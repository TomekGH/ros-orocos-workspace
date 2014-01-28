
#include <orocos/actionlib_msgs/boost/GoalID.h>
#include <orocos/actionlib_msgs/boost/GoalStatus.h>
#include <orocos/actionlib_msgs/boost/GoalStatusArray.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSactionlib_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/actionlib_msgs/GoalID") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<actionlib_msgs::GoalID>()); } else
         if(name == "/actionlib_msgs/GoalStatus") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<actionlib_msgs::GoalStatus>()); } else
         if(name == "/actionlib_msgs/GoalStatusArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<actionlib_msgs::GoalStatusArray>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"actionlib_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "actionlib_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSactionlib_msgsPlugin )
