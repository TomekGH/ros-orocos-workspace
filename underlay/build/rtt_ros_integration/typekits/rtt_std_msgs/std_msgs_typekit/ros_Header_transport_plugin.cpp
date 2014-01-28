#include <std_msgs/boost/Header.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSHeaderPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/std_msgs/Header")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Header>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"Header";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "Header" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSHeaderPlugin )
