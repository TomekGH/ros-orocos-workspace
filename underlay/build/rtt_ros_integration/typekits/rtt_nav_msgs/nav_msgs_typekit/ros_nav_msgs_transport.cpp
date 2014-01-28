
#include <orocos/nav_msgs/boost/GridCells.h>
#include <orocos/nav_msgs/boost/MapMetaData.h>
#include <orocos/nav_msgs/boost/OccupancyGrid.h>
#include <orocos/nav_msgs/boost/Odometry.h>
#include <orocos/nav_msgs/boost/Path.h>
#include <orocos/nav_msgs/boost/GetMapAction.h>
#include <orocos/nav_msgs/boost/GetMapActionGoal.h>
#include <orocos/nav_msgs/boost/GetMapActionResult.h>
#include <orocos/nav_msgs/boost/GetMapActionFeedback.h>
#include <orocos/nav_msgs/boost/GetMapGoal.h>
#include <orocos/nav_msgs/boost/GetMapResult.h>
#include <orocos/nav_msgs/boost/GetMapFeedback.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSnav_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/nav_msgs/GridCells") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GridCells>()); } else
         if(name == "/nav_msgs/MapMetaData") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::MapMetaData>()); } else
         if(name == "/nav_msgs/OccupancyGrid") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::OccupancyGrid>()); } else
         if(name == "/nav_msgs/Odometry") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::Odometry>()); } else
         if(name == "/nav_msgs/Path") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::Path>()); } else
         if(name == "/nav_msgs/GetMapAction") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapAction>()); } else
         if(name == "/nav_msgs/GetMapActionGoal") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapActionGoal>()); } else
         if(name == "/nav_msgs/GetMapActionResult") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapActionResult>()); } else
         if(name == "/nav_msgs/GetMapActionFeedback") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapActionFeedback>()); } else
         if(name == "/nav_msgs/GetMapGoal") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapGoal>()); } else
         if(name == "/nav_msgs/GetMapResult") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapResult>()); } else
         if(name == "/nav_msgs/GetMapFeedback") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::GetMapFeedback>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"nav_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "nav_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSnav_msgsPlugin )
