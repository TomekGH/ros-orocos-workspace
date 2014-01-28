#include <visualization_msgs/boost/MenuEntry.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSMenuEntryPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/visualization_msgs/MenuEntry")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::MenuEntry>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"MenuEntry";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "MenuEntry" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSMenuEntryPlugin )
