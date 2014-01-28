#include <trajectory_msgs/boost/MultiDOFJointTrajectoryPoint.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSMultiDOFJointTrajectoryPointPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/trajectory_msgs/MultiDOFJointTrajectoryPoint")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<trajectory_msgs::MultiDOFJointTrajectoryPoint>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"MultiDOFJointTrajectoryPoint";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "MultiDOFJointTrajectoryPoint" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSMultiDOFJointTrajectoryPointPlugin )