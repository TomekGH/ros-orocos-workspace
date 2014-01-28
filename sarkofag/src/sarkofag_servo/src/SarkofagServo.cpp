#include <rtt/TaskContext.hpp>
#include <rtt/Port.hpp>
#include <std_msgs/Float64.h>
#include <std_msgs/Int64.h>
#include <std_msgs/Bool.h>
#include <rtt/Component.hpp>
#include <std_srvs/Empty.h>
#include <ros/ros.h>

#include "hi_moxa.h"
#include "const_sarkofag.h"

//wywal
#include "../../sarkofag_regulator/src/Regulator.h"

using namespace RTT;

typedef enum { NOT_SYNCHRONIZED, SERVOING, SYNCHRONIZING } State;
typedef enum { MOVE_TO_SYNCHRO_AREA, STOP, MOVE_FROM_SYNCHRO_AREA, WAIT_FOR_IMPULSE, SYNCHRO_END } SynchroState;


class SarkofagServo : public RTT::TaskContext{

private: 
 
InputPort<std_msgs::Float64> computedPwm_in;

OutputPort<std_msgs::Float64> posInc_out;
OutputPort<std_msgs::Float64> deltaInc_out;

//OutputPort<std_msgs::Bool> is_synchronized;

std::string prop_answer;
double prop_counter_step;
double prop_service_call_counter;

double counter;

State state;
SynchroState synchro_state;

//wywal wywal
long int first_inc_pos;
bool pos_readed;

double pos_inc;

long long int increment;
long int inc_pos;
long int inc_pos_old;
double joint_pos;
double joint_pos_old;
double motor_pos;
double motor_pos_old;

hi_moxa::HI_moxa hi_;

Regulator regulator;

OperationCaller<bool(std_srvs::Empty::Request&, std_srvs::Empty::Response&)> updated;


public:

SarkofagServo(const std::string& name):
	TaskContext(name),
    computedPwm_in("computedPwm_in"),
    posInc_out("posInc_out"),
    deltaInc_out("deltaInc_out"),
	prop_answer("Sarkofag Servo"),
	prop_counter_step(0.01),
	prop_service_call_counter(0.0),
	updated("updated"),
    hi_(const_sarkofag::NUM_OF_SERVOS-1, const_sarkofag::CARD_ADDRESSES, const_sarkofag::MAX_INCREMENT, const_sarkofag::TX_PREFIX_LEN)
{
    this->addEventPort(computedPwm_in).doc("Receiving a value of computed PWM.");
    this->addPort(posInc_out).doc("Sends out a value of expected position increment.");
    this->addPort(deltaInc_out).doc("Sends out a value increment increase in cycle.");

	this->addProperty("answer",prop_answer).doc("The text being sent out on 'string_out'.");
	this->addProperty("counter_step",prop_counter_step).doc("The increment for each new sample on 'float_out'");
	this->addProperty("service_call_counter",prop_service_call_counter).doc("The number of times the incrememt operation has been called.");

    this->provides()->addOperation("showPosition",&SarkofagServo::showPosition,this,RTT::OwnThread);
	this->requires()->addOperationCaller(updated);

	counter=0.0;

    increment = 0;

    //wywal
    pos_readed = false;

    pos_inc = 0;
}

~SarkofagServo(){}

private:


bool configureHook()
{
	std::vector<std::string> ports;
    ports.push_back("/dev/ttyMI7");

	try
	{
		hi_.init(ports);
        hi_.set_parameter_now(0, NF_COMMAND_SetDrivesMaxCurrent, const_sarkofag::MAX_CURRENT_0);
        hi_.set_pwm_mode(0);
        /*NF_STRUCT_Regulator tmpReg =
                    { hi_.convert_to_115(0.0600), hi_.convert_to_115(0.0500), hi_.convert_to_115(0.0), 0 };
        hi_.set_parameter_now(0, NF_COMMAND_SetCurrentRegulator, tmpReg);
        */
        //wywal
        regulator.setParam(const_sarkofag::A[0], const_sarkofag::BB0[0], const_sarkofag::BB1[0]);

	}
	catch (std::exception& e)
	{
		log(Info) << e.what() << endlog();	
	}

	return true;
}

bool startHook()
{
    try
    {
        hi_.HI_read_write_hardware();

        if(!hi_.robot_synchronized())
        {
            std::cout << "Robot not synchronized" << std::endl;
            state = NOT_SYNCHRONIZED;

        }
        else
        {
            std::cout << "Robot synchronized" << std::endl;

            inc_pos = hi_.get_position(0);
            joint_pos = i2jp(inc_pos);
            motor_pos = i2mp(inc_pos);

            state = SERVOING;
        }
    }
    catch (const std::exception& e)
    {
      std::cout << e.what() << std::endl;
    }

    regulator.reset();
    pos_inc = 0.0;
}


void updateHook()
{

    double pwm;

    hi_.HI_read_write_hardware();

    switch(state)
    {
        case NOT_SYNCHRONIZED :
            std::cout << "NOT_SYNCHRONIZED" << std::endl;
            state = SYNCHRONIZING;
            synchro_state = MOVE_TO_SYNCHRO_AREA;
            pos_inc = 0.0;
        break;

        case SERVOING :


            inc_pos_old = inc_pos;
            inc_pos = hi_.get_position(0);
            joint_pos_old = joint_pos;
            joint_pos = i2jp(inc_pos);
            motor_pos_old = motor_pos;
            motor_pos = i2mp(inc_pos);


            if(!pos_readed)
            {
                first_inc_pos = inc_pos;
                pos_readed = true;
            }

            //std::cout << "get_increment: " << increment << std::endl;

            //pos_inc = jp2i(joint_pos - joint_pos_old);

            pos_inc = 0.0;

            std::cout << "SERVOING: " << pwm << std::endl;

        break;

        case SYNCHRONIZING :
            switch(synchro_state)
            {
                case MOVE_TO_SYNCHRO_AREA :
                    if(hi_.in_synchro_area(0))
                    {
                        std::cout << "MOVE_TO_SYNCHRO_AREA ended" << std::endl;
                        pos_inc = 0.0;
                        synchro_state = STOP;
                    }
                    else
                    {
                        //ruszam powoli w stronę synchro area
                        std::cout << "MOVE_TO_SYNCHRO_AREA" << std::endl;
                        pos_inc = const_sarkofag::SYNCHRO_STEP_COARSE[0] * (const_sarkofag::ENC_RES[0]/(2.0*M_PI));
                    }
                break;

                case STOP :
                    //tutaj jakis timeout
                    hi_.start_synchro(0);
                    synchro_state = MOVE_FROM_SYNCHRO_AREA;

                break;

                case MOVE_FROM_SYNCHRO_AREA :
                    if(!hi_.in_synchro_area((0)))
                    {
                        std::cout << "MOVE_FROM_SYNCHRO_AREA ended" << std::endl;

                        synchro_state = WAIT_FOR_IMPULSE;
                    }
                    else
                    {
                        std::cout << "MOVE_FROM_SYNCHRO_AREA" << std::endl;
                        pos_inc = const_sarkofag::SYNCHRO_STEP_FINE[0] * (const_sarkofag::ENC_RES[0]/(2.0*M_PI));
                    }
                break;

                case WAIT_FOR_IMPULSE:
                    if(hi_.drive_synchronized(0))
                    {
                        std::cout << "WAIT_FOR_IMPULSE ended" << std::endl;

                        synchro_state = SYNCHRO_END;
                    }
                    else
                    {
                        std::cout << "WAIT_FOR_IMPULSE" << std::endl;
                        pos_inc = const_sarkofag::SYNCHRO_STEP_FINE[0] * (const_sarkofag::ENC_RES[0]/(2.0*M_PI));
                    }
                break;

                case SYNCHRO_END :
                    hi_.finish_synchro(0);
                    hi_.reset_position(0);
                    regulator.reset();
                    std::cout << "SYNCHRONIZING ended" << std::endl;
                    state = SERVOING;
                break;
            }
        break;

    }

    increment = hi_.get_increment(0);

    if(abs(increment) > 400)
    {
        increment = 0;
    }

    if(fabs(pos_inc) > 400)
    {
        pos_inc = 0;
    }

    std_msgs::Float64 pwmData;
    if(NewData==computedPwm_in.read(pwmData))
    {
        pwm = pwmData.data;
    }


    //pwm = regulator.doServo(pos_inc, increment);


    hi_.set_pwm(0, pwm);

    sendPosInc(pos_inc);
    sendDeltaInc(increment);

}


void showPosition()
{
    log(Info)<< "POSITION: " << endlog();
    log(Info)<< "increments : " << inc_pos << endlog();
    log(Info)<< "joint_position: " << i2jp(inc_pos) << endlog();
    log(Info)<< "motor_position: " << i2mp(inc_pos) << endlog();
}


double i2jp (double iPosition)
{
    return iPosition  / (const_sarkofag::INC_PER_REVOLUTION / (2.0 * M_PI));
}

double jp2i (double mPosition)
{
    return mPosition  * (const_sarkofag::INC_PER_REVOLUTION / (2.0 * M_PI));
}

double i2mp (double iPosition)
{
    double joints = i2jp(iPosition);
    return (joints - const_sarkofag::SYNCHRO_JOINT_POSITION[0]) / const_sarkofag::GEAR;
}

double mp2i (double mPosition)
{
    mPosition = (mPosition * const_sarkofag::GEAR) + const_sarkofag::SYNCHRO_JOINT_POSITION[0];
    return jp2i(mPosition);
}

void sendPosInc(double data)
{
    std_msgs::Float64 currentData;
    currentData.data = data;

    posInc_out.write(currentData);
}

void sendDeltaInc(double data)
{
    std_msgs::Float64 incrementData;
    incrementData.data = data;

    deltaInc_out.write(incrementData);
}

};
ORO_CREATE_COMPONENT(SarkofagServo)
