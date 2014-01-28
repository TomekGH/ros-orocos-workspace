#include <visualization_msgs/boost/Marker.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSMarkerPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/visualization_msgs/Marker")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::Marker>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"Marker";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "Marker" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSMarkerPlugin )
