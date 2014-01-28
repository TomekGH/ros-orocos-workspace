#include <rosgraph_msgs/boost/Log.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSLogPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/rosgraph_msgs/Log")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rosgraph_msgs::Log>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"Log";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "Log" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSLogPlugin )
