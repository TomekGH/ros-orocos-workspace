#include "hi_moxa.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/select.h>
#include <fcntl.h>

#include <exception>
#include <stdexcept>
#include <cstring>

#include <iostream>

namespace hi_moxa {

HI_moxa::HI_moxa(unsigned int numberOfDrivers) {
	last_drive_number = numberOfDrivers;
}

HI_moxa::~HI_moxa() {
	for (unsigned int i = 0; i < last_drive_number; i++) {
		if (fd[i] > 0) {
			tcsetattr(fd[i], TCSANOW, &oldtio[i]);
			close(fd[i]);
		}
	}
}

void HI_moxa::init(std::vector<std::string> ports) {

	if (ports.size() != (last_drive_number+1))
		throw(std::runtime_error("ports list size invalid !!!"));

	port_names = ports;

	// inicjalizacja zmiennych
	for (unsigned int i = 0; i <= last_drive_number; i++) {
		servo_data[i].first_hardware_reads
				= FIRST_HARDWARE_READS_WITH_ZERO_INCREMENT;
		servo_data[i].command_params = 0;
		for (int j = 0; j < SERVO_ST_BUF_LEN; j++)
			servo_data[i].buf[j] = 0;
	}
	hardware_panic = false;

	fd_max = 0;
	for (unsigned int i = 0; i <= last_drive_number; i++) {
		std::cout << "[info] opening port : " << port_names[i].c_str();
		fd[i] = open(port_names[i].c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
		if (fd[i] < 0) {
			throw(std::runtime_error("unable to open device!!!"));
		} else {
			std::cout << "...OK" << std::endl;
			if (fd[i] > fd_max) {
				fd_max = fd[i];
			}
		}
		tcgetattr(fd[i], &oldtio[i]);

		// set up new settings
		struct termios newtio;
		memset(&newtio, 0, sizeof(newtio));
		newtio.c_cflag = CS8 | CLOCAL | CREAD | CSTOPB;
		newtio.c_iflag = INPCK; //IGNPAR;
		newtio.c_oflag = 0;
		newtio.c_lflag = 0;
		if (cfsetispeed(&newtio, BAUD) < 0 || cfsetospeed(&newtio, BAUD) < 0) {
			tcsetattr(fd[i], TCSANOW, &oldtio[i]);
			close(fd[i]);
			fd[i] = -1;
			throw(std::runtime_error("unable to set baudrate !!!"));
			return;
		}
		// activate new settings
		tcflush(fd[i], TCIFLUSH);
		tcsetattr(fd[i], TCSANOW, &newtio);

		// start driver in MANUAL mode
		set_parameter(i, hi_moxa::PARAM_DRIVER_MODE,
				hi_moxa::PARAM_DRIVER_MODE_MANUAL);
		set_parameter(i, hi_moxa::PARAM_DRIVER_MODE,
				hi_moxa::PARAM_DRIVER_MODE_MANUAL);
	}

	resetCounters();
}

void HI_moxa::insertSetValue(int drive_number, double set_value) {

	servo_data[drive_number].buf[0] = 0x00;
	servo_data[drive_number].buf[1] = 0x00;
	servo_data[drive_number].buf[2] = 0x00;
	servo_data[drive_number].buf[3] = 0x00;
	servo_data[drive_number].buf[4] = START_BYTE;
	servo_data[drive_number].buf[5] = COMMAND_MODE_PWM
			| servo_data[drive_number].command_params;
	struct pwm_St* temp = (pwm_St*) &(servo_data[drive_number].buf[6]);
	// Nowa karta sterownika: -1000..+1000, stara karta: -255..+255
	temp->pwm = set_value * (1000.0 / 255.0);

#ifdef T_INFO_FUNC
	std::cout << "[func] HI_moxa::insert_set_value(" << drive_number << ", " << set_value << ")" << std::endl;
#endif
}

int HI_moxa::getCurrent(int drive_offset) {
	int ret;

	ret = servo_data[drive_offset].drive_status.current;

#ifdef T_INFO_FUNC
	std::cout << "[func] HI_moxa::get_current(" << drive_offset << ") = " << ret << std::endl;
#endif
	return ret;
}

double HI_moxa::getIncrement(int drive_offset) {
	double ret;
	ret = servo_data[drive_offset].current_position_inc;

#ifdef T_INFO_FUNC
	std::cout << "[func] HI_moxa::get_increment(" << drive_offset << ") = " << ret << std::endl;
#endif
	return ret;
}

long int HI_moxa::getPosition(int drive_offset) {
	int ret;

	ret = servo_data[drive_offset].current_absolute_position;

#ifdef T_INFO_FUNC
	std::cout << "[func] HI_moxa::get_position(" << drive_offset << ") = " << ret << std::endl;
#endif
	return ret;
}

uint64_t HI_moxa::readWriteHardware(void) {
	static int64_t receive_attempts = 0, receive_timeouts = 0;
	static int error_msg_power_stage = 0;
	static int error_msg_hardware_panic = 0;
	static int error_msg_overcurrent = 0;
	static int last_synchro_state[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	static int comm_timeouts[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	static int synchro_switch_filter[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	const int synchro_switch_filter_th = 2;
	bool robot_synchronized = true;
	bool power_fault;
	bool hardware_read_ok = true;
	bool all_hardware_read = true;
	std::size_t bytes_received[MOXA_SERVOS_NR];
	fd_set rfds;
	uint64_t ret = 0;
	uint8_t drive_number;
	static int status_disp_cnt = 0;

	if (hardware_panic) {
		for (drive_number = 0; drive_number <= last_drive_number; drive_number++)
			set_parameter(drive_number, PARAM_DRIVER_MODE,
					PARAM_DRIVER_MODE_ERROR);

		if (error_msg_hardware_panic == 0) {
			std::cout << "[error] hardware panic" << std::endl;
			error_msg_hardware_panic++;
		}
		return ret;
	}

	for (drive_number = 0; drive_number <= last_drive_number; drive_number++) {
		//	write(fd[drive_number], "  ", 2);
		write(fd[drive_number], servo_data[drive_number].buf, WRITE_BYTES);
		write(fd[drive_number], "  ", 2);
		bytes_received[drive_number] = 0;
	}

	receive_attempts++;

	while (1) {
		FD_ZERO(&rfds);
		for (drive_number = 0; drive_number <= last_drive_number; drive_number++) {
			if (bytes_received[drive_number] < READ_BYTES) {
				FD_SET(fd[drive_number], &rfds);
			}
		}

		struct timeval timeout;
		timeout.tv_sec = (time_t) 0;
		timeout.tv_usec = 500;
		int select_retval = select(fd_max + 1, &rfds, NULL, NULL, &timeout);
		if (select_retval == 0) {
			receive_timeouts++;
			std::cout << "[error] communication timeout (" << receive_timeouts
					<< "/" << receive_attempts << "="
					<< (((float) receive_timeouts) / receive_attempts) << ")";

			for (drive_number = 0; drive_number <= last_drive_number; drive_number++) {
				if (bytes_received[drive_number] < READ_BYTES) {
					std::cout << " " << (int) drive_number << "(" << READ_BYTES
							- bytes_received[drive_number] << ")";
					comm_timeouts[drive_number]++;
				}
			}
			std::cout << std::endl;
			hardware_read_ok = false;
			break;
		} else {
			all_hardware_read = true;
			for (drive_number = 0; drive_number <= last_drive_number; drive_number++) {

				if (FD_ISSET(fd[drive_number], &rfds)) {
					bytes_received[drive_number] += read(
							fd[drive_number],
							(char*) (&(servo_data[drive_number].drive_status))
									+ bytes_received[drive_number],
							READ_BYTES - bytes_received[drive_number]);
					//					std::cout << "[comm] drive " << (int)drive_number << ", received " << bytes_received[drive_number] << std::endl;
				}
				if (bytes_received[drive_number] < READ_BYTES) {
					all_hardware_read = false;
				}
			}
			if (all_hardware_read) {
				for (drive_number = 0; drive_number <= last_drive_number; drive_number++)
					comm_timeouts[drive_number] = 0;
				break;
			}
		}
	}

	// Inicjalizacja flag
	robot_synchronized = true;
	power_fault = false;

	for (drive_number = 0; drive_number <= last_drive_number; drive_number++) {

		// Wypelnienie pol odebranymi danymi
		if (bytes_received[drive_number] >= READ_BYTES) {
			servo_data[drive_number].previous_absolute_position
					= servo_data[drive_number].current_absolute_position;
			servo_data[drive_number].current_absolute_position
					= servo_data[drive_number].drive_status.position;
		}

		// Ustawienie flagi wlaczonej mocy
		if (servo_data[drive_number].drive_status.powerStageFault != 0) {
			power_fault = true;
		}

		// Ustawienie flagi synchronizacji
		if (servo_data[drive_number].drive_status.isSynchronized == 0) {
			robot_synchronized = false;
		}

		// Sprawdzenie, czy wlasnie nastapila synchronizacja kolejnej osi
		if (last_synchro_state[drive_number] == 0
				&& servo_data[drive_number].drive_status.isSynchronized != 0) {
			servo_data[drive_number].first_hardware_reads
					= FIRST_HARDWARE_READS_WITH_ZERO_INCREMENT;
			last_synchro_state[drive_number] = 1;
		}

		// W pierwszych odczytach danych z napedu przyrost pozycji musi byc 0.
		if ((servo_data[drive_number].first_hardware_reads > 0)
				&& hardware_read_ok) {
			servo_data[drive_number].previous_absolute_position
					= servo_data[drive_number].current_absolute_position;
			servo_data[drive_number].first_hardware_reads--;
		}

		// Sprawdzenie przyrostu pozycji enkodera
		servo_data[drive_number].current_position_inc
				= (double) (servo_data[drive_number].current_absolute_position
						- servo_data[drive_number].previous_absolute_position);

		if ((robot_synchronized) && (ridiculous_increment[drive_number] != 0)) {
			if ((servo_data[drive_number].current_position_inc
					> ridiculous_increment[drive_number])
					|| (servo_data[drive_number].current_position_inc
							< -ridiculous_increment[drive_number])) {
				hardware_panic = true;
				std::cout << "[error] ridiculous increment on ("
						<< (int) drive_number << "): read = "
						<< servo_data[drive_number].current_position_inc
						<< ", max = " << ridiculous_increment[drive_number]
						<< std::endl;

			}
		}

		// Sprawdzenie ograniczenia nadpradowego
		if (servo_data[drive_number].drive_status.overcurrent == 1) {
			if (error_msg_overcurrent == 0) {
				std::cout << "[error] overcurrent on (" << (int) drive_number
						<< "): read = "
						<< servo_data[drive_number].drive_status.current
						<< "mA" << std::endl;
				error_msg_overcurrent++;
			}
		}

		// Wykrywanie sekwencji timeoutow komunikacji
		if (comm_timeouts[drive_number] >= MAX_COMM_TIMEOUTS) {
			hardware_panic = true;
			std::cout << "[error] multiple communication timeouts on ("
					<< (int) drive_number << "): limit = " << MAX_COMM_TIMEOUTS
					<< std::endl;

		}

	}

	if (power_fault) {
		if (error_msg_power_stage == 0) {
			std::cout << "Wylaczono moc - robot zablokowany" << std::endl;
			error_msg_power_stage++;
		}

	} else {
		error_msg_power_stage = 0;
	}

	for (drive_number = 0; drive_number <= last_drive_number; drive_number++) {
		if (servo_data[drive_number].drive_status.sw1 != 0)
			ret |= (uint64_t)(UPPER_LIMIT_SWITCH << (5 * (drive_number))); // Zadzialal wylacznik "gorny" krancowy
		if (servo_data[drive_number].drive_status.sw2 != 0)
			ret |= (uint64_t)(LOWER_LIMIT_SWITCH << (5 * (drive_number))); // Zadzialal wylacznik "dolny" krancowy
		if (servo_data[drive_number].drive_status.synchroZero != 0)
			ret |= (uint64_t)(SYNCHRO_ZERO << (5 * (drive_number))); // Impuls zera rezolwera
		if (servo_data[drive_number].drive_status.overcurrent != 0)
			ret |= (uint64_t)(OVER_CURRENT << (5 * (drive_number))); // Przekroczenie dopuszczalnego pradu
		if (servo_data[drive_number].drive_status.swSynchr != 0) {
			if (synchro_switch_filter[drive_number] == synchro_switch_filter_th)
				ret |= (uint64_t)(SYNCHRO_SWITCH_ON << (5 * (drive_number))); // Zadzialal wylacznik synchronizacji
			else
				synchro_switch_filter[drive_number]++;
		} else {
			synchro_switch_filter[drive_number] = 0;
		}
	}

	return ret;
}

int HI_moxa::set_parameter(int drive_number, const int parameter,
		uint32_t new_value) {
	char tx_buf[SERVO_ST_BUF_LEN];
	char rx_buf[SERVO_ST_BUF_LEN];

	tx_buf[0] = 0x00;
	tx_buf[1] = 0x00;
	tx_buf[2] = 0x00;
	tx_buf[3] = 0x00;
	tx_buf[4] = START_BYTE;
	tx_buf[5] = COMMAND_SET_PARAM | parameter;
	union param_Un* temp = (param_Un*) &(tx_buf[6]);
	temp->largest = 0;

	switch (parameter) {
	case PARAM_SYNCHRONIZED:
		temp->synchronized = new_value;
		break;
	case PARAM_MAXCURRENT:
		temp->maxcurrent = new_value;
		break;
	case PARAM_PID_POS_P:
	case PARAM_PID_POS_I:
	case PARAM_PID_POS_D:
	case PARAM_PID_CURR_P:
	case PARAM_PID_CURR_I:
	case PARAM_PID_CURR_D:
		temp->pid_coeff = new_value;
		break;
	case PARAM_DRIVER_MODE:
		temp->driver_mode = new_value;
		break;
	default:
		std::cout << "[error] HI_moxa::set_parameter() invalid parameter"
				<< std::endl;
		return -1;
		break;
	}

	for (int param_set_attempt = 0; param_set_attempt < MAX_PARAM_SET_ATTEMPTS; param_set_attempt++) {
		write(fd[drive_number], tx_buf, WRITE_BYTES);

		fd_set rfds;

		FD_ZERO(&rfds);
		FD_SET(fd[drive_number], &rfds);

		std::size_t bytes_received = 0;

		for (int i = 0; i < 3; i++) {
			struct timeval timeout;
			timeout.tv_sec = (time_t) 0;
			timeout.tv_usec = 500;
			int select_retval = select(fd[drive_number] + 1, &rfds, NULL, NULL,
					&timeout);
			// hardware panic; do not print error information
			if (parameter == PARAM_DRIVER_MODE && new_value
					== PARAM_DRIVER_MODE_ERROR)
				return 0;
			if (select_retval == 0) {
				std::cout << "[error] param set ack timeout for drive ("
						<< drive_number << ")" << std::endl;
			} else {
				bytes_received += read(fd[drive_number],
						rx_buf + bytes_received, READ_BYTES - bytes_received);

				if (bytes_received == READ_BYTES)
					return 0;
			}
		}
		usleep(2000);
	}
	throw std::runtime_error(
			"HI_Moxa: Unable to communicate with motor controllers. Try switching the power on.");
	return 1;
}

void HI_moxa::set_command_param(int drive_number, uint8_t param) {
	servo_data[drive_number].command_params |= param;
}

void HI_moxa::resetCounters(void) {
	for (int i = 0; i < last_drive_number; i++) {
		servo_data[i].current_absolute_position = 0L;
		servo_data[i].previous_absolute_position = 0L;
		servo_data[i].current_position_inc = 0.0;
	}
}

void HI_moxa::startSynchro(int drive_offset) {
	servo_data[drive_offset].command_params |= COMMAND_PARAM_SYNCHRO;
}

void HI_moxa::finishSynchro(int drive_offset) {
	servo_data[drive_offset].command_params &= 0;
}

bool HI_moxa::isImpulseZero(int drive_offset) {
	return (servo_data[drive_offset].drive_status.synchroZero != 0);
}

void HI_moxa::resetPosition(int drive_number) {
	servo_data[drive_number].current_absolute_position = 0L;
	servo_data[drive_number].previous_absolute_position = 0L;
	servo_data[drive_number].current_position_inc = 0.0;
	servo_data[drive_number].first_hardware_reads
			= FIRST_HARDWARE_READS_WITH_ZERO_INCREMENT;
}

bool HI_moxa::isRobotSynchronized() {
	bool ret = true;
	for (std::size_t i = 0; i <= last_drive_number; i++) {
		if (servo_data[i].drive_status.isSynchronized == 0) {
			ret = false;
		}
	}
	return ret;
}

bool HI_moxa::isInSynchroArea(int drive) {
	return servo_data[drive].drive_status.swSynchr;
}

}

