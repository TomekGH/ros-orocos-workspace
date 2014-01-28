#include <rtt/TaskContext.hpp>
#include <rtt/Port.hpp>
#include <std_msgs/Float64.h>
#include <std_msgs/Int64.h>
#include <rtt/Component.hpp>
#include <std_srvs/Empty.h>
#include <ros/ros.h>

#include "Regulator.h"


using namespace RTT;

class SarkofagRegulator : public RTT::TaskContext{

private: 
 
InputPort<std_msgs::Float64> posInc_in;
InputPort<std_msgs::Float64> deltaInc_in;

OutputPort<std_msgs::Float64> computedPwm_out;

std::string prop_answer;

Regulator regulator;

OperationCaller<bool(std_srvs::Empty::Request&, std_srvs::Empty::Response&)> updated;


public:

SarkofagRegulator(const std::string& name):
	TaskContext(name),
    posInc_in("posInc_in"),
    deltaInc_in("deltaInc_in"),
    computedPwm_out("computedPwm_out"),
    prop_answer("Sarkofag Regulator"),
    updated("updated"),
    regulator()
{

    this->addEventPort(posInc_in).doc("Receiving a value of position step");
    this->addPort(deltaInc_in).doc("Receiving a value of measured increment.");
    this->addPort(computedPwm_out).doc("Sending value of calculated pwm.");

	this->requires()->addOperationCaller(updated);



}

~SarkofagRegulator(){}

private:

bool configureHook()
{
    regulator.reset();
    regulator.setParam(const_sarkofag::A[0], const_sarkofag::BB0[0], const_sarkofag::BB1[0]);
}

void updateHook()
{
    std_msgs::Float64 posIncData;
    std_msgs::Float64 deltaIncData;
    if(NewData==posInc_in.read(posIncData) && NewData==deltaInc_in.read(deltaIncData))
    {
        sendPwm(computePwmValue(posIncData.data,deltaIncData.data));
    }



}

int readPosInc()
{
    std_msgs::Float64 posIncData;
    if(NewData==posInc_in.read(posIncData))
    {
        return posIncData.data;
    }
}

int readDeltaInc()
{
    std_msgs::Float64 deltaIncData;
    if(NewData==deltaInc_in.read(deltaIncData))
    {
        return deltaIncData.data;
    }
}

float computePwmValue(double posInc, double deltaInc)
{
    return regulator.doServo(posInc, deltaInc);
}

void sendPwm(float data)
{
    std_msgs::Float64 currentData;
    currentData.data = data;

    computedPwm_out.write(currentData);
}



};
ORO_CREATE_COMPONENT(SarkofagRegulator)
