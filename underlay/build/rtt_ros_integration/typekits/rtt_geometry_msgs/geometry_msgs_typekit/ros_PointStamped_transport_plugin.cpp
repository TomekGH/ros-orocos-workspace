#include <geometry_msgs/boost/PointStamped.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSPointStampedPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/geometry_msgs/PointStamped")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PointStamped>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"PointStamped";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "PointStamped" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSPointStampedPlugin )
