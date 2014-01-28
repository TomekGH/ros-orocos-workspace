#include <actionlib_msgs/boost/GoalID.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSGoalIDPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/actionlib_msgs/GoalID")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<actionlib_msgs::GoalID>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"GoalID";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "GoalID" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSGoalIDPlugin )
