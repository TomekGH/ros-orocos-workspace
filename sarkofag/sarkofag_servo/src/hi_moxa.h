#ifndef __HI_MOXA_H
#define __HI_MOXA_H

#include "hi_moxa_combuf.h"

#include <stdint.h>
#include <termios.h>
#include <sstream>
//#include <ctime>

#include <string>
#include <vector>

#include "serialcomm/serialcomm.hpp"
#include "nf/nfv2.h"

#define STATUS_DISP_T 100

namespace hi_moxa {

const std::size_t MOXA_SERVOS_NR = 1;
const int MAX_PARAM_SET_ATTEMPTS = 3;
const int MAX_COMM_TIMEOUTS = 3;
const std::size_t FIRST_HARDWARE_READS_WITH_ZERO_INCREMENT = 4;

const int VOLTAGE = 48.0;

class HI_moxa {

public:

    HI_moxa(unsigned int numberOfDrivers, const unsigned int* card_addresses, const double* max_increments, int tx_prefix_len);
	~HI_moxa();

    //initialize
	void init(std::vector<std::string> ports);

	//do communication cycle	
	uint64_t HI_read_write_hardware(void);

    //set parameter
	void set_parameter(int drive_number, const int parameter, ...);

	//send parameter to motor driver	
	int set_parameter_now(int drive_number, const int parameter, ...);

    void set_pwm(int drive_number, double set_value);
    void set_current(int drive_number, double set_value);

    void set_pwm_mode(int drive_number);
    void set_current_mode(int drive_number);

    int get_current(int drive_number);
    float get_voltage(int drive_number) ;
    double get_increment(int drive_number);
    long int get_position(int drive_number);

    void reset_counters(void);
    void start_synchro(int drive_number);
    void finish_synchro(int drive_number);
    void unsynchro(int drive_number);
    bool in_synchro_area(int drive_number);
    bool robot_synchronized();
    bool drive_synchronized(int drive_number);


    bool is_impulse_zero(int drive_number);
    void reset_position(int i);

    void clear_buffer(int drive_number);

    uint16_t convert_to_115(float input);

protected:
    bool hardware_panic;

private:

/// communication baud rate (bps)
#if defined(B921600)
            static const speed_t BAUD = B921600;
#else
            static const speed_t BAUD = 921600;
#endif
    const int howMuchItSucks;

	/// (number of drives)-1
	std::size_t last_drive_number;
	/// vector of serial port names
	std::vector<std::string> port_names;
	/// tab od drives addresses
	const unsigned int* drives_addresses;
    /// tab of max allowed motor position increments
    const double* ridiculous_increment;

    int fd[MOXA_SERVOS_NR];

	/// tab of comunication class instances
	SerialComm* SerialPort[MOXA_SERVOS_NR];

	/// tab of data buffers
	struct servo_St servo_data[MOXA_SERVOS_NR];
    struct termios oldtio[MOXA_SERVOS_NR];

    /// periodic timer used for generating read_write_hardware time base
    //lib::periodic_timer ptimer;

	/// comunication buffer	
	NF_STRUCT_ComBuf NFComBuf;
	uint8_t txBuf[256];
	uint8_t txCnt;
	uint8_t rxBuf[256];
	uint8_t rxCnt;
	uint8_t rxCommandArray[256];
	uint8_t rxCommandCnt;
	

};

} // namespace hi_moxa

#endif // __HI_MOXA_H
