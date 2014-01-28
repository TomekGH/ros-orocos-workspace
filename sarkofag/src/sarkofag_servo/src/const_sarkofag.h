#if !defined(_SARKOFAG_CONST_H)
#define _SARKOFAG_CONST_H

#include <string>
#include <stdint.h>

namespace const_sarkofag {


const std::string ROBOT_NAME = "sarkofag";

const int NUM_OF_SERVOS = 1;

const int LAST_MOXA_PORT_NUM = 0;

const std::string ports_strings[] = { "/dev/ttyMI7" };

const int16_t MAX_CURRENT_0 = 25000;
const double MAX_INCREMENT[] = { 0 };
const int MAX_PWM[] = { 2048 };

const unsigned int CARD_ADDRESSES[] = { 0 };

const int TX_PREFIX_LEN = 5;

const double INC_PER_REVOLUTION = 4000;

const double GEAR = 158;

const double THETA = 0;

const double SYNCHRO_JOINT_POSITION[] = { -168 };

const double SYNCHRO_MOTOR_POSITION[] = { -168 };

const int ENC_RES[] = {4000};

const double LOWER_MOTOR_LIMIT[] = { -470};
const double UPPER_MOTOR_LIMIT[] = { 450};

const double A[] = {0.0};
const double BB0[] = {1.05};
const double BB1[] = {1};

const double SYNCHRO_STEP_COARSE[] = {0.05};
const double SYNCHRO_STEP_FINE[] = {-0.02};


}

#endif /* _SARKOFAG_CONST_H */
