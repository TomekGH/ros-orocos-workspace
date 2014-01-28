
#include <orocos/trajectory_msgs/boost/JointTrajectory.h>
#include <orocos/trajectory_msgs/boost/JointTrajectoryPoint.h>
#include <orocos/trajectory_msgs/boost/MultiDOFJointTrajectory.h>
#include <orocos/trajectory_msgs/boost/MultiDOFJointTrajectoryPoint.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROStrajectory_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/trajectory_msgs/JointTrajectory") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<trajectory_msgs::JointTrajectory>()); } else
         if(name == "/trajectory_msgs/JointTrajectoryPoint") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<trajectory_msgs::JointTrajectoryPoint>()); } else
         if(name == "/trajectory_msgs/MultiDOFJointTrajectory") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<trajectory_msgs::MultiDOFJointTrajectory>()); } else
         if(name == "/trajectory_msgs/MultiDOFJointTrajectoryPoint") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<trajectory_msgs::MultiDOFJointTrajectoryPoint>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"trajectory_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "trajectory_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROStrajectory_msgsPlugin )
