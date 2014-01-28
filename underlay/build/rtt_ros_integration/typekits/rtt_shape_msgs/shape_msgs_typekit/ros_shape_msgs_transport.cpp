
#include <orocos/shape_msgs/boost/Mesh.h>
#include <orocos/shape_msgs/boost/MeshTriangle.h>
#include <orocos/shape_msgs/boost/Plane.h>
#include <orocos/shape_msgs/boost/SolidPrimitive.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSshape_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/shape_msgs/Mesh") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<shape_msgs::Mesh>()); } else
         if(name == "/shape_msgs/MeshTriangle") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<shape_msgs::MeshTriangle>()); } else
         if(name == "/shape_msgs/Plane") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<shape_msgs::Plane>()); } else
         if(name == "/shape_msgs/SolidPrimitive") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<shape_msgs::SolidPrimitive>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"shape_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "shape_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSshape_msgsPlugin )
