
#include <orocos/visualization_msgs/boost/ImageMarker.h>
#include <orocos/visualization_msgs/boost/InteractiveMarker.h>
#include <orocos/visualization_msgs/boost/InteractiveMarkerControl.h>
#include <orocos/visualization_msgs/boost/InteractiveMarkerFeedback.h>
#include <orocos/visualization_msgs/boost/InteractiveMarkerInit.h>
#include <orocos/visualization_msgs/boost/InteractiveMarkerPose.h>
#include <orocos/visualization_msgs/boost/InteractiveMarkerUpdate.h>
#include <orocos/visualization_msgs/boost/MarkerArray.h>
#include <orocos/visualization_msgs/boost/Marker.h>
#include <orocos/visualization_msgs/boost/MenuEntry.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSvisualization_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/visualization_msgs/ImageMarker") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::ImageMarker>()); } else
         if(name == "/visualization_msgs/InteractiveMarker") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::InteractiveMarker>()); } else
         if(name == "/visualization_msgs/InteractiveMarkerControl") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::InteractiveMarkerControl>()); } else
         if(name == "/visualization_msgs/InteractiveMarkerFeedback") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::InteractiveMarkerFeedback>()); } else
         if(name == "/visualization_msgs/InteractiveMarkerInit") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::InteractiveMarkerInit>()); } else
         if(name == "/visualization_msgs/InteractiveMarkerPose") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::InteractiveMarkerPose>()); } else
         if(name == "/visualization_msgs/InteractiveMarkerUpdate") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::InteractiveMarkerUpdate>()); } else
         if(name == "/visualization_msgs/MarkerArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::MarkerArray>()); } else
         if(name == "/visualization_msgs/Marker") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::Marker>()); } else
         if(name == "/visualization_msgs/MenuEntry") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<visualization_msgs::MenuEntry>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"visualization_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "visualization_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSvisualization_msgsPlugin )
