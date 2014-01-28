/*
 * irp6p_servo.cpp
 *
 *  Created on: 22-09-2010
 *      Author: Konrad Banachowicz
 */

#include <ocl/Component.hpp>

#include <iostream>

#include "irp6p_servo.h"

IRP6pServo::IRP6pServo(const std::string& name) :
    RTT::TaskContext(name, PreOperational),autoSynchronize_(false), hi_(NUMBER_OF_DRIVES-1)
{
  this->ports()->addPort("desJntPos", dsrJntPos_port_);
  this->ports()->addPort("cmdJntPos", cmdJntPos_port_);
  this->ports()->addPort("msrJntPos", msrJntPos_port_);

  this->addProperty("autoSynchronize", autoSynchronize_);
}

IRP6pServo::~IRP6pServo()
{

}

bool IRP6pServo::configureHook()
{
  if(fabs(getActivity()->getPeriod() - DT) > 0.00001)
    return false;

  std::vector<std::string> ports;
  ports.push_back("/dev/ttyMI0");
  ports.push_back("/dev/ttyMI1");
  ports.push_back("/dev/ttyMI2");
  ports.push_back("/dev/ttyMI3");
  ports.push_back("/dev/ttyMI4");
  ports.push_back("/dev/ttyMI5");

  try
  {
    hi_.init(ports);
  }
  catch (std::exception& e)
  {
    std::cout << e.what() << std::endl;
    return false;
  }

  for(unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
    reg_[i].setParam(A[i], BB0[i], BB1[i]);

  dsrJntPos_.resize(NUMBER_OF_DRIVES);
  msrJntPos_.resize(NUMBER_OF_DRIVES);
  cmdJntPos_.resize(NUMBER_OF_DRIVES);
  return true;
}

bool IRP6pServo::startHook()
{
  try
  {
    for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
      hi_.insertSetValue(i, 0);
    hi_.readWriteHardware();

    if (hi_.isRobotSynchronized())
    {
      for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
        motor_pos_old_[i] = ((double)hi_.getPosition(i) / (ENC_RES[i]/(2*M_PI)));

      if(!checkMotorPosition(motor_pos_old_))
        std::cout << "current motor state out of range !!!" << std::endl;

      mp2i(motor_pos_old_, joint_pos_);

      for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
      {
        dsrJntPos_[i] = joint_pos_[i];

      }
      cmdJntPos_ = dsrJntPos_;
      state_ = SERVOING;
    }
    else
    {
      std::cout << "robot not synchronized" << std::endl;
      
      if(autoSynchronize_)
      {
        std::cout << "synchronizing .. " << std::endl;
        synchro_state_ = MOVE_TO_SYNCHRO_AREA;
        state_ = SYNCHRONIZING;
        synchro_drive_ = 0;
      } else 
      {
        state_ = NOT_SYNCHRONIZED;
      }
    }
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << std::endl;
    return false;
  }

  for(unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
  {
    reg_[i].reset();
    pos_inc_[i] = 0.0;
  }
  return true;
}

void IRP6pServo::updateHook()
{
  double motor_pos[NUMBER_OF_DRIVES];
  double pwm[NUMBER_OF_DRIVES];

  switch (state_)
  {
  case NOT_SYNCHRONIZED :
    for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
      pos_inc_[i] = 0.0;
    break;
  case SERVOING :
    if (dsrJntPos_port_.read(dsrJntPos_) == RTT::NewData)
    {

      double joint_pos_new[NUMBER_OF_DRIVES];
      double motor_pos_new[NUMBER_OF_DRIVES];

      for(unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
        joint_pos_new[i] = dsrJntPos_[i];
      
      if(i2mp(joint_pos_new, motor_pos_new))
      {
        for(unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
        {
          pos_inc_[i] = (motor_pos_new[i] - motor_pos_old_[i]) * ((double)ENC_RES[i]/(2*M_PI));
          motor_pos_old_[i] = motor_pos_new[i];
        }
        
      } else 
      {
        std::cout << "setpoint out of motor range !!! " << std::endl;
        for(unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
          pos_inc_[i] = 0.0; 
      }
      cmdJntPos_ = dsrJntPos_;
    }
    else
    {
      for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
        pos_inc_[i] = 0.0;
    }
    break;
  case SYNCHRONIZING :
    switch (synchro_state_)
    {
    case MOVE_TO_SYNCHRO_AREA :
         if (hi_.isInSynchroArea(synchro_drive_))
         {
           std::cout << "[servo " << synchro_drive_ << " ] MOVE_TO_SYNCHRO_AREA cmp" << std::endl;
           pos_inc_[synchro_drive_] = 0.0;
           delay_ = 500;
           synchro_state_ = STOP;
           std::cout << "[servo " << synchro_drive_ << " ] STOP start" << std::endl;
         }
         else
         {
           pos_inc_[synchro_drive_] = SYNCHRO_STEP_COARSE[synchro_drive_] * (ENC_RES[synchro_drive_]/(2*M_PI));
         }
      break;
    case STOP :
      if(delay_-- < 0)
      {
        std::cout << "[servo " << synchro_drive_ << " ] STOP cmp" << std::endl;
        synchro_state_ = MOVE_FROM_SYNCHRO_AREA;
        hi_.startSynchro(synchro_drive_);
        std::cout << "[servo " << synchro_drive_ << " ] MOVE_FROM_SYNCHRO_AREA start" << std::endl;
      }
      break;
    case MOVE_FROM_SYNCHRO_AREA :
      if (hi_.isImpulseZero(synchro_drive_) && isInSynchroArea(synchro_drive_))
      {
        std::cout << "[servo " << synchro_drive_ << " ] MOVE_FROM_SYNCHRO_AREA cmp " << std::endl;
        hi_.finishSynchro(synchro_drive_);
        hi_.resetPosition(synchro_drive_);
        reg_[synchro_drive_].reset();
        pos_inc_[synchro_drive_] = 0.0;
        motor_pos_old_[synchro_drive_] = ((double)hi_.getPosition(synchro_drive_) / (ENC_RES[synchro_drive_]/(2*M_PI)));
        
        if(++synchro_drive_ < NUMBER_OF_DRIVES)
        {
          synchro_state_ = MOVE_TO_SYNCHRO_AREA;
        } else
        {
          synchro_state_ = SYNCHRO_END;
        }
      }
      else
      {
        pos_inc_[synchro_drive_] = SYNCHRO_STEP_FINE[synchro_drive_] * (ENC_RES[synchro_drive_]/(2*M_PI));
      }
      break;
    case SYNCHRO_END:
      if(!checkMotorPosition(motor_pos_old_))
        std::cout << "current motor state out of range !!!" << std::endl;

      mp2i(motor_pos_old_, joint_pos_);

      for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
      {
        dsrJntPos_[i] = joint_pos_[i];
      }

      state_ = SERVOING;
      break;
    }
    break;
  }

  for(unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
  {
    int64_t increment = hi_.getIncrement(i);
    if(abs(increment) > 400)
    {
      std::cout << "!!!! increment > 400 !!!!" << std::endl;
      increment = 0;
    }

    if(fabs(pos_inc_[i]) > 400)
    {
      std::cout << "!!!! pos_inc > 400 !!!!" << std::endl;
      pos_inc_[i] = 0;
    }

    pwm[i] = reg_[i].doServo(pos_inc_[i], increment);
  }

  try
  {
    for(unsigned int i = 0; i < 6; i++)
      hi_.insertSetValue(i, pwm[i]);
    hi_.readWriteHardware();
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }

  if(state_ == SERVOING)
  {
    for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
      motor_pos[i] = ((double)hi_.getPosition(i) / (ENC_RES[i]/(2*M_PI)));
  
    if(!checkMotorPosition(motor_pos))
      std::cout << "current motor state out of range !!!" << std::endl;

    mp2i(motor_pos, joint_pos_);
  
    for (unsigned int i = 0; i < NUMBER_OF_DRIVES; i++)
    {
      msrJntPos_[i] = joint_pos_[i];
    }

    msrJntPos_port_.write(msrJntPos_);
    cmdJntPos_port_.write(cmdJntPos_);

  }

}

void IRP6pServo::mp2i(const double* motors, double* joints)
{
  // zmienne pomocnicze
  double c, d, l;
  double sinus, cosinus;
  double M1, M2;

  const double sl123 = 7.789525e+04;
  const double mi1 = 6.090255e+04;
  const double ni1 = -2.934668e+04;

  const double mi2 = -4.410000e+04;
  const double ni2 = -5.124000e+04;

// Przelicznik polozenia walu silnika napedowego kolumny w radianach
// na kat obrotu kolumny (wspolrzedna wewnetrzna) w radianach
  joints[0] = (motors[0] - SYNCHRO_MOTOR_POSITION[0]) / GEAR[0] + THETA[0];

// Przelicznik polozenia walu silnika napedowego ramienia dolnego w radianach
// na kat obrotu ramienia (wspolrzedna wewnetrzna) w radianach
  l = (motors[1] - SYNCHRO_MOTOR_POSITION[1]) / GEAR[1] + THETA[1];
  M1 = mi1 * mi1 + ni1 * ni1;
  c = l * l - sl123;
  d = sqrt(M1 - c * c);
  cosinus = (mi1 * c - ni1 * d) / M1;
  sinus = -(ni1 * c + mi1 * d) / M1;
  joints[1] = atan2(sinus, cosinus);

// Przelicznik polozenia walu silnika napedowego ramienia gornego w radianach
// na kat obrotu ramienia (wspolrzedna wewnetrzna) w radianach
  l = (motors[2] - SYNCHRO_MOTOR_POSITION[2]) / GEAR[2] + THETA[2];
  M2 = mi2 * mi2 + ni2 * ni2;
  c = l * l - sl123;
  d = sqrt(M2 - c * c);
  cosinus = (mi2 * c - ni2 * d) / M2;
  sinus = -(ni2 * c + mi2 * d) / M2;
  joints[2] = atan2(sinus, cosinus);

// Przelicznik polozenia walu silnika napedowego obrotu kisci T w radianach
// na kat pochylenia kisci (wspolrzedna wewnetrzna) w radianach
  joints[3] = (motors[3] - SYNCHRO_MOTOR_POSITION[3]) / GEAR[3];

// Przelicznik polozenia walu silnika napedowego obrotu kisci V w radianach
// na kat obrotu kisci (wspolrzedna wewnetrzna) w radianach
  joints[4] = (motors[4] - SYNCHRO_MOTOR_POSITION[4] - (motors[3]
                             - SYNCHRO_MOTOR_POSITION[3])) / GEAR[4] + THETA[4];

// Przelicznik polozenia walu silnika napedowego obrotu kisci N w radianach
// na kat obrotu kisci (wspolrzedna wewnetrzna) w radianach
  joints[5] = (motors[5] - SYNCHRO_MOTOR_POSITION[5]) / GEAR[5] + THETA[5];

  joints[2] -= joints[1] + M_PI_2;
  joints[3] -= joints[2] + joints[1] + M_PI_2;

}

bool IRP6pServo::i2mp(const double* joints, double* motors)
{
  const double sl123 = 7.789525e+04;
  const double mi1 = 6.090255e+04;
  const double ni1 = -2.934668e+04;

  const double mi2 = -4.410000e+04;
  const double ni2 = -5.124000e+04;

  // Niejednoznacznosc polozenia dla 3-tej osi (obrot kisci < 180).
  const double joint_3_revolution = M_PI;
  // Niejednoznacznosc polozenia dla 4-tej osi (obrot kisci > 360).
  const double axis_4_revolution = 2 * M_PI;

  // Obliczanie kata obrotu walu silnika napedowego kolumny
  motors[0] = GEAR[0] * joints[0] + SYNCHRO_JOINT_POSITION[0];

  // Obliczanie kata obrotu walu silnika napedowego ramienia dolnego
  motors[1] = GEAR[1] * sqrt(sl123 + mi1 * cos(joints[1]) + ni1
		* sin(-joints[1])) + SYNCHRO_JOINT_POSITION[1];

  // Obliczanie kata obrotu walu silnika napedowego ramienia gornego
  motors[2] = GEAR[2] * sqrt(sl123 + mi2 * cos(joints[2] + joints[1] + M_PI_2) + ni2
			* sin(-(joints[2] + joints[1] + M_PI_2))) + SYNCHRO_JOINT_POSITION[2];

  // Obliczanie kata obrotu walu silnika napedowego obotu kisci T
  // jesli jest mniejsze od -pi/2
  double joints_tmp3 = joints[3] + joints[2] + joints[1] + M_PI_2;
  if (joints_tmp3 < -M_PI_2)
    joints_tmp3 += joint_3_revolution;
  motors[3] = GEAR[3] * (joints_tmp3 + THETA[3]) + SYNCHRO_JOINT_POSITION[3];

  // Obliczanie kata obrotu walu silnika napedowego obrotu kisci V
  motors[4] = GEAR[4] * joints[4] + SYNCHRO_JOINT_POSITION[4]
            + motors[3];

  // Ograniczenie na obrot.
  while (motors[4] < -80)
    motors[4] += axis_4_revolution;
  while (motors[4] > 490)
    motors[4] -= axis_4_revolution;

  // Obliczanie kata obrotu walu silnika napedowego obrotu kisci N
  motors[5] = GEAR[5] * joints[5] + SYNCHRO_JOINT_POSITION[5];

  return checkMotorPosition(motors);
}

bool IRP6pServo::checkMotorPosition(const double * motor_position)
{

  if (motor_position[0] < LOWER_MOTOR_LIMIT[0]) // Kat f1 mniejszy od minimalnego
    return false;//throw NonFatal_error_2(BEYOND_LOWER_LIMIT_AXIS_0);
  else if (motor_position[0] > UPPER_MOTOR_LIMIT[0]) // Kat f1 wiekszy od maksymalnego
    return false;//throw NonFatal_error_2(BEYOND_UPPER_LIMIT_AXIS_0);

  if (motor_position[1] < LOWER_MOTOR_LIMIT[1]) // Kat f2 mniejszy od minimalnego
    return false;//throw NonFatal_error_2(BEYOND_LOWER_LIMIT_AXIS_1);
  else if (motor_position[1] > UPPER_MOTOR_LIMIT[1]) // Kat f2 wiekszy od maksymalnego
    return false;//throw NonFatal_error_2(BEYOND_UPPER_LIMIT_AXIS_1);

  if (motor_position[2] < LOWER_MOTOR_LIMIT[2]) // Kat f3 mniejszy od minimalnego
    return false;//throw NonFatal_error_2(BEYOND_LOWER_LIMIT_AXIS_2);
  else if (motor_position[2] > UPPER_MOTOR_LIMIT[2]) // Kat f3 wiekszy od maksymalnego
    return false;//throw NonFatal_error_2(BEYOND_UPPER_LIMIT_AXIS_2);

  if (motor_position[3] < LOWER_MOTOR_LIMIT[3]) // Kat f4 mniejszy od minimalnego
    return false; //throw NonFatal_error_2(BEYOND_LOWER_LIMIT_AXIS_3);
  else if (motor_position[3] > UPPER_MOTOR_LIMIT[3]) // Kat f4 wiekszy od maksymalnego
    return false; //throw NonFatal_error_2(BEYOND_UPPER_LIMIT_AXIS_3);

  if (motor_position[4] < LOWER_MOTOR_LIMIT[4]) // Kat f5 mniejszy od minimalnego
    return false; //throw NonFatal_error_2(BEYOND_LOWER_LIMIT_AXIS_4);
  else if (motor_position[4] > UPPER_MOTOR_LIMIT[4]) // Kat f5 wiekszy od maksymalnego
    return false; //throw NonFatal_error_2(BEYOND_UPPER_LIMIT_AXIS_4);

  if (motor_position[5] < LOWER_MOTOR_LIMIT[5]) // Kat f6 mniejszy od minimalnego
    return false; //throw NonFatal_error_2(BEYOND_LOWER_LIMIT_AXIS_5);
  else if (motor_position[5] > UPPER_MOTOR_LIMIT[5]) // Kat f6 wiekszy od maksymalnego
    return false;//throw NonFatal_error_2(BEYOND_UPPER_LIMIT_AXIS_5);

  return true;
} //: check_motor_position


Regulator::Regulator()
{

}

Regulator::~Regulator()
{

}

int Regulator::doServo(double pos_inc_new, int pos_inc)
{

  // algorytm regulacji dla serwomechanizmu
  // position_increment_old - przedostatnio odczytany przyrost polozenie
  //                         (delta y[k-2] -- mierzone w impulsach)
  // position_increment_new - ostatnio odczytany przyrost polozenie
  //                         (delta y[k-1] -- mierzone w impulsach)
  // step_old_pulse               - poprzednia wartosc zadana dla jednego kroku
  //                         regulacji (przyrost wartosci zadanej polozenia --
  //                         delta r[k-2] -- mierzone w impulsach)
  // step_new               - nastepna wartosc zadana dla jednego kroku
  //                         regulacji (przyrost wartosci zadanej polozenia --
  //                         delta r[k-1] -- mierzone w radianach)
  // set_value_new          - wielkosc kroku do realizacji przez HIP
  //                         (wypelnienie PWM -- u[k]): czas trwania jedynki
  // set_value_old          - wielkosc kroku do realizacji przez HIP
  //                         (wypelnienie PWM -- u[k-1]): czas trwania jedynki
  // set_value_very_old     - wielkosc kroku do realizacji przez HIP
  //                         (wypelnienie PWM -- u[k-2]): czas trwania jedynki

  double step_new_pulse; // nastepna wartosc zadana dla jednego kroku regulacji

  step_new_pulse = pos_inc_new;
  position_increment_new = pos_inc;

  // Przyrost calki uchybu
  delta_eint = delta_eint_old + 1.008 * (step_new_pulse - position_increment_new) - 0.992 * (step_old_pulse
               - position_increment_old);

  //  double a = 0.548946716233 / 2;
  //  double b0 = 1.576266 / 2; //9.244959545156;
  //  double b1 = 1.468599 / 2; //8.613484947882;

  // obliczenie nowej wartosci wypelnienia PWM algorytm PD + I
  set_value_new = (1 + a_) * set_value_old - a_ * set_value_very_old + b0_ * delta_eint - b1_ * delta_eint_old;

  // ograniczenie na sterowanie
  if (set_value_new > MAX_PWM)
    set_value_new = MAX_PWM;
  if (set_value_new < -MAX_PWM)
    set_value_new = -MAX_PWM;

  // przepisanie nowych wartosci zmiennych do zmiennych przechowujacych wartosci poprzednie
  position_increment_old = position_increment_new;
  delta_eint_old = delta_eint;
  step_old_pulse = step_new_pulse;
  set_value_very_old = set_value_old;
  set_value_old = set_value_new;

  return ((int) set_value_new);
}

void Regulator::reset()
{
  position_increment_old = 0.0;
  position_increment_new = 0.0;
  step_old_pulse = 0.0;
  step_new = 0.0;
  set_value_new = 0.0;
  set_value_old = 0.0;
  set_value_very_old = 0.0;
  delta_eint = 0.0;
  delta_eint_old = 0.0;
}

void Regulator::setParam(double a, double b0, double b1)
{
  a_ = a;
  b0_ = b0;
  b1_ = b1;
}

ORO_CREATE_COMPONENT( IRP6pServo )
