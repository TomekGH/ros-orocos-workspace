#include <sensor_msgs/boost/RegionOfInterest.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSRegionOfInterestPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/sensor_msgs/RegionOfInterest")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::RegionOfInterest>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"RegionOfInterest";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "RegionOfInterest" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSRegionOfInterestPlugin )
