
#include <orocos/std_msgs/boost/Bool.h>
#include <orocos/std_msgs/boost/Byte.h>
#include <orocos/std_msgs/boost/ByteMultiArray.h>
#include <orocos/std_msgs/boost/Char.h>
#include <orocos/std_msgs/boost/ColorRGBA.h>
#include <orocos/std_msgs/boost/Duration.h>
#include <orocos/std_msgs/boost/Empty.h>
#include <orocos/std_msgs/boost/Float32.h>
#include <orocos/std_msgs/boost/Float32MultiArray.h>
#include <orocos/std_msgs/boost/Float64.h>
#include <orocos/std_msgs/boost/Float64MultiArray.h>
#include <orocos/std_msgs/boost/Header.h>
#include <orocos/std_msgs/boost/Int16.h>
#include <orocos/std_msgs/boost/Int16MultiArray.h>
#include <orocos/std_msgs/boost/Int32.h>
#include <orocos/std_msgs/boost/Int32MultiArray.h>
#include <orocos/std_msgs/boost/Int64.h>
#include <orocos/std_msgs/boost/Int64MultiArray.h>
#include <orocos/std_msgs/boost/Int8.h>
#include <orocos/std_msgs/boost/Int8MultiArray.h>
#include <orocos/std_msgs/boost/MultiArrayDimension.h>
#include <orocos/std_msgs/boost/MultiArrayLayout.h>
#include <orocos/std_msgs/boost/String.h>
#include <orocos/std_msgs/boost/Time.h>
#include <orocos/std_msgs/boost/UInt16.h>
#include <orocos/std_msgs/boost/UInt16MultiArray.h>
#include <orocos/std_msgs/boost/UInt32.h>
#include <orocos/std_msgs/boost/UInt32MultiArray.h>
#include <orocos/std_msgs/boost/UInt64.h>
#include <orocos/std_msgs/boost/UInt64MultiArray.h>
#include <orocos/std_msgs/boost/UInt8.h>
#include <orocos/std_msgs/boost/UInt8MultiArray.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSstd_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/std_msgs/Bool") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Bool>()); } else
         if(name == "/std_msgs/Byte") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Byte>()); } else
         if(name == "/std_msgs/ByteMultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::ByteMultiArray>()); } else
         if(name == "/std_msgs/Char") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Char>()); } else
         if(name == "/std_msgs/ColorRGBA") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::ColorRGBA>()); } else
         if(name == "/std_msgs/Duration") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Duration>()); } else
         if(name == "/std_msgs/Empty") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Empty>()); } else
         if(name == "/std_msgs/Float32") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Float32>()); } else
         if(name == "/std_msgs/Float32MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Float32MultiArray>()); } else
         if(name == "/std_msgs/Float64") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Float64>()); } else
         if(name == "/std_msgs/Float64MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Float64MultiArray>()); } else
         if(name == "/std_msgs/Header") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Header>()); } else
         if(name == "/std_msgs/Int16") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int16>()); } else
         if(name == "/std_msgs/Int16MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int16MultiArray>()); } else
         if(name == "/std_msgs/Int32") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int32>()); } else
         if(name == "/std_msgs/Int32MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int32MultiArray>()); } else
         if(name == "/std_msgs/Int64") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int64>()); } else
         if(name == "/std_msgs/Int64MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int64MultiArray>()); } else
         if(name == "/std_msgs/Int8") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int8>()); } else
         if(name == "/std_msgs/Int8MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Int8MultiArray>()); } else
         if(name == "/std_msgs/MultiArrayDimension") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::MultiArrayDimension>()); } else
         if(name == "/std_msgs/MultiArrayLayout") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::MultiArrayLayout>()); } else
         if(name == "/std_msgs/String") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::String>()); } else
         if(name == "/std_msgs/Time") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::Time>()); } else
         if(name == "/std_msgs/UInt16") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt16>()); } else
         if(name == "/std_msgs/UInt16MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt16MultiArray>()); } else
         if(name == "/std_msgs/UInt32") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt32>()); } else
         if(name == "/std_msgs/UInt32MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt32MultiArray>()); } else
         if(name == "/std_msgs/UInt64") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt64>()); } else
         if(name == "/std_msgs/UInt64MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt64MultiArray>()); } else
         if(name == "/std_msgs/UInt8") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt8>()); } else
         if(name == "/std_msgs/UInt8MultiArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<std_msgs::UInt8MultiArray>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"std_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "std_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSstd_msgsPlugin )
