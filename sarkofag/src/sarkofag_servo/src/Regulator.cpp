#include "Regulator.h"

#include <iostream>
#include <cstdarg>

Regulator::Regulator()
{

}

Regulator::~Regulator()
{

}

int Regulator::doServo(int pos_inc_new, int pos_inc)
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

  step_new_pulse = pos_inc_new;// * const_sarkofag::INC_PER_REVOLUTION / (2 * 3.14159265359);
  position_increment_new = pos_inc;

  // Przyrost calki uchybu
  delta_eint = delta_eint_old + 1.008 * (step_new_pulse - position_increment_new) - 0.992 * (step_old_pulse
               - position_increment_old);

  //  double a = 0.548946716233 / 2;
  //  double b0 = 1.576266 / 2; //9.244959545156;
  //  double b1 = 1.468599 / 2; //8.613484947882;

  /*double kp = 1;
  double ki = 0.05;

  a_ = 0;
  b0_ = kp * (1 + ki);
  b1_ = kp;*/

  // obliczenie nowej wartosci wypelnienia PWM algorytm PD + I
  set_value_new = (1 + a_) * set_value_old - a_ * set_value_very_old + b0_ * delta_eint - b1_ * delta_eint_old;

  std::cout << "PWM VALUE (" << pos_inc << " to " << step_new_pulse << ") IS " << (int)set_value_new << std::endl;

  // ograniczenie na sterowanie
  if (set_value_new > const_sarkofag::MAX_PWM[0])
      set_value_new = const_sarkofag::MAX_PWM[0];
  if (set_value_new < -const_sarkofag::MAX_PWM[0])
      set_value_new = -const_sarkofag::MAX_PWM[0];

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
