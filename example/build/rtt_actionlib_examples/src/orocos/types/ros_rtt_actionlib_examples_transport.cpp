
#include <orocos/rtt_actionlib_examples/boost/SomeActionAction.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionActionGoal.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionActionResult.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionActionFeedback.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionGoal.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionResult.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionFeedback.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSrtt_actionlib_examplesPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/rtt_actionlib_examples/SomeActionAction") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionAction>()); } else
         if(name == "/rtt_actionlib_examples/SomeActionActionGoal") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionActionGoal>()); } else
         if(name == "/rtt_actionlib_examples/SomeActionActionResult") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionActionResult>()); } else
         if(name == "/rtt_actionlib_examples/SomeActionActionFeedback") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionActionFeedback>()); } else
         if(name == "/rtt_actionlib_examples/SomeActionGoal") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionGoal>()); } else
         if(name == "/rtt_actionlib_examples/SomeActionResult") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionResult>()); } else
         if(name == "/rtt_actionlib_examples/SomeActionFeedback") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionFeedback>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"rtt_actionlib_examples";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "rtt_actionlib_examples" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSrtt_actionlib_examplesPlugin )
