#include <geometry_msgs/boost/PoseWithCovarianceStamped.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSPoseWithCovarianceStampedPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/geometry_msgs/PoseWithCovarianceStamped")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PoseWithCovarianceStamped>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"PoseWithCovarianceStamped";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "PoseWithCovarianceStamped" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSPoseWithCovarianceStampedPlugin )
