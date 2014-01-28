
#include <orocos/diagnostic_msgs/boost/DiagnosticArray.h>
#include <orocos/diagnostic_msgs/boost/DiagnosticStatus.h>
#include <orocos/diagnostic_msgs/boost/KeyValue.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSdiagnostic_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/diagnostic_msgs/DiagnosticArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<diagnostic_msgs::DiagnosticArray>()); } else
         if(name == "/diagnostic_msgs/DiagnosticStatus") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<diagnostic_msgs::DiagnosticStatus>()); } else
         if(name == "/diagnostic_msgs/KeyValue") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<diagnostic_msgs::KeyValue>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"diagnostic_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "diagnostic_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSdiagnostic_msgsPlugin )
