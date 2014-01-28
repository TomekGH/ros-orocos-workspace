#include <rtt_actionlib_examples/boost/SomeActionResult.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSSomeActionResultPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/rtt_actionlib_examples/SomeActionResult")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<rtt_actionlib_examples::SomeActionResult>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"SomeActionResult";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "SomeActionResult" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSSomeActionResultPlugin )
