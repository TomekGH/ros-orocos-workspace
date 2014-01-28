#include <geometry_msgs/boost/WrenchStamped.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSWrenchStampedPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/geometry_msgs/WrenchStamped")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::WrenchStamped>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"WrenchStamped";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "WrenchStamped" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSWrenchStampedPlugin )
