#include <sensor_msgs/boost/CompressedImage.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSCompressedImagePlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/sensor_msgs/CompressedImage")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::CompressedImage>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"CompressedImage";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "CompressedImage" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSCompressedImagePlugin )
