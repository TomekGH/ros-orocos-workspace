
#include <orocos/geometry_msgs/boost/Point.h>
#include <orocos/geometry_msgs/boost/Point32.h>
#include <orocos/geometry_msgs/boost/PointStamped.h>
#include <orocos/geometry_msgs/boost/Polygon.h>
#include <orocos/geometry_msgs/boost/PolygonStamped.h>
#include <orocos/geometry_msgs/boost/Pose2D.h>
#include <orocos/geometry_msgs/boost/Pose.h>
#include <orocos/geometry_msgs/boost/PoseArray.h>
#include <orocos/geometry_msgs/boost/PoseStamped.h>
#include <orocos/geometry_msgs/boost/PoseWithCovariance.h>
#include <orocos/geometry_msgs/boost/PoseWithCovarianceStamped.h>
#include <orocos/geometry_msgs/boost/Quaternion.h>
#include <orocos/geometry_msgs/boost/QuaternionStamped.h>
#include <orocos/geometry_msgs/boost/Transform.h>
#include <orocos/geometry_msgs/boost/TransformStamped.h>
#include <orocos/geometry_msgs/boost/Twist.h>
#include <orocos/geometry_msgs/boost/TwistStamped.h>
#include <orocos/geometry_msgs/boost/TwistWithCovariance.h>
#include <orocos/geometry_msgs/boost/TwistWithCovarianceStamped.h>
#include <orocos/geometry_msgs/boost/Vector3.h>
#include <orocos/geometry_msgs/boost/Vector3Stamped.h>
#include <orocos/geometry_msgs/boost/Wrench.h>
#include <orocos/geometry_msgs/boost/WrenchStamped.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSgeometry_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/geometry_msgs/Point") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Point>()); } else
         if(name == "/geometry_msgs/Point32") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Point32>()); } else
         if(name == "/geometry_msgs/PointStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PointStamped>()); } else
         if(name == "/geometry_msgs/Polygon") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Polygon>()); } else
         if(name == "/geometry_msgs/PolygonStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PolygonStamped>()); } else
         if(name == "/geometry_msgs/Pose2D") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Pose2D>()); } else
         if(name == "/geometry_msgs/Pose") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Pose>()); } else
         if(name == "/geometry_msgs/PoseArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PoseArray>()); } else
         if(name == "/geometry_msgs/PoseStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PoseStamped>()); } else
         if(name == "/geometry_msgs/PoseWithCovariance") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PoseWithCovariance>()); } else
         if(name == "/geometry_msgs/PoseWithCovarianceStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::PoseWithCovarianceStamped>()); } else
         if(name == "/geometry_msgs/Quaternion") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Quaternion>()); } else
         if(name == "/geometry_msgs/QuaternionStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::QuaternionStamped>()); } else
         if(name == "/geometry_msgs/Transform") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Transform>()); } else
         if(name == "/geometry_msgs/TransformStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::TransformStamped>()); } else
         if(name == "/geometry_msgs/Twist") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Twist>()); } else
         if(name == "/geometry_msgs/TwistStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::TwistStamped>()); } else
         if(name == "/geometry_msgs/TwistWithCovariance") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::TwistWithCovariance>()); } else
         if(name == "/geometry_msgs/TwistWithCovarianceStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::TwistWithCovarianceStamped>()); } else
         if(name == "/geometry_msgs/Vector3") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Vector3>()); } else
         if(name == "/geometry_msgs/Vector3Stamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Vector3Stamped>()); } else
         if(name == "/geometry_msgs/Wrench") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::Wrench>()); } else
         if(name == "/geometry_msgs/WrenchStamped") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<geometry_msgs::WrenchStamped>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"geometry_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "geometry_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSgeometry_msgsPlugin )
