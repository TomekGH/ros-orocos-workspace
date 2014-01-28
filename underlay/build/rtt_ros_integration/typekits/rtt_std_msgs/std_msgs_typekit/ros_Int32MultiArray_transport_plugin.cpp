#include <std_msgs/boost/Int32MultiArray.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSInt32MultiArrayPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/std_msgs/Int32MultiArray")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int32MultiArray>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"Int32MultiArray";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "Int32MultiArray" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSInt32MultiArrayPlugin )
