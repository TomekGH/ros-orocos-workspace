#include <nav_msgs/boost/MapMetaData.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSMapMetaDataPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/nav_msgs/MapMetaData")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<nav_msgs::MapMetaData>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"MapMetaData";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "MapMetaData" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSMapMetaDataPlugin )
