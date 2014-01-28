#include <sensor_msgs/boost/TimeReference.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSTimeReferencePlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/sensor_msgs/TimeReference")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::TimeReference>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"TimeReference";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "TimeReference" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSTimeReferencePlugin )
