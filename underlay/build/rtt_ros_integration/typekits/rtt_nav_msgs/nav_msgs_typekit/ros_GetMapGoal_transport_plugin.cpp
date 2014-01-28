#include <nav_msgs/boost/GetMapGoal.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSGetMapGoalPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/nav_msgs/GetMapGoal")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapGoal>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"GetMapGoal";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "GetMapGoal" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSGetMapGoalPlugin )