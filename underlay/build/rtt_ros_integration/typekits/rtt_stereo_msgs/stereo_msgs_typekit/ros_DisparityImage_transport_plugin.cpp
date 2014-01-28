#include <stereo_msgs/boost/DisparityImage.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSDisparityImagePlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/stereo_msgs/DisparityImage")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<stereo_msgs::DisparityImage>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"DisparityImage";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "DisparityImage" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSDisparityImagePlugin )
