
#include <orocos/tf/boost/tfMessage.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROStfPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/tf/tfMessage") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<tf::tfMessage>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"tf";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "tf" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROStfPlugin )
