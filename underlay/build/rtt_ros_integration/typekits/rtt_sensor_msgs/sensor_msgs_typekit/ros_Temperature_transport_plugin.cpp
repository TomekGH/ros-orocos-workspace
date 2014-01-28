#include <sensor_msgs/boost/Temperature.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSTemperaturePlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/sensor_msgs/Temperature")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Temperature>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"Temperature";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "Temperature" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSTemperaturePlugin )
