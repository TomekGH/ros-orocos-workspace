
#include <orocos/stereo_msgs/boost/DisparityImage.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSstereo_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/stereo_msgs/DisparityImage") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<stereo_msgs::DisparityImage>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"stereo_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "stereo_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSstereo_msgsPlugin )
