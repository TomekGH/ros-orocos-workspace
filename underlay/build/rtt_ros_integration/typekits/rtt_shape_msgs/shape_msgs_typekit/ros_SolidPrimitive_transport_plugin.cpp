#include <shape_msgs/boost/SolidPrimitive.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSSolidPrimitivePlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/shape_msgs/SolidPrimitive")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<shape_msgs::SolidPrimitive>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"SolidPrimitive";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "SolidPrimitive" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSSolidPrimitivePlugin )
