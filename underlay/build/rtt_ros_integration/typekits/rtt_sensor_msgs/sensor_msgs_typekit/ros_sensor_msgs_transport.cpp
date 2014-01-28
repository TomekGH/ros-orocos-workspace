
#include <orocos/sensor_msgs/boost/CameraInfo.h>
#include <orocos/sensor_msgs/boost/ChannelFloat32.h>
#include <orocos/sensor_msgs/boost/CompressedImage.h>
#include <orocos/sensor_msgs/boost/FluidPressure.h>
#include <orocos/sensor_msgs/boost/Illuminance.h>
#include <orocos/sensor_msgs/boost/Image.h>
#include <orocos/sensor_msgs/boost/Imu.h>
#include <orocos/sensor_msgs/boost/JointState.h>
#include <orocos/sensor_msgs/boost/Joy.h>
#include <orocos/sensor_msgs/boost/JoyFeedback.h>
#include <orocos/sensor_msgs/boost/JoyFeedbackArray.h>
#include <orocos/sensor_msgs/boost/LaserEcho.h>
#include <orocos/sensor_msgs/boost/LaserScan.h>
#include <orocos/sensor_msgs/boost/MagneticField.h>
#include <orocos/sensor_msgs/boost/MultiDOFJointState.h>
#include <orocos/sensor_msgs/boost/MultiEchoLaserScan.h>
#include <orocos/sensor_msgs/boost/NavSatFix.h>
#include <orocos/sensor_msgs/boost/NavSatStatus.h>
#include <orocos/sensor_msgs/boost/PointCloud.h>
#include <orocos/sensor_msgs/boost/PointCloud2.h>
#include <orocos/sensor_msgs/boost/PointField.h>
#include <orocos/sensor_msgs/boost/Range.h>
#include <orocos/sensor_msgs/boost/RegionOfInterest.h>
#include <orocos/sensor_msgs/boost/RelativeHumidity.h>
#include <orocos/sensor_msgs/boost/Temperature.h>
#include <orocos/sensor_msgs/boost/TimeReference.h>

#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
    struct ROSsensor_msgsPlugin
      : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
                   if(name == "/sensor_msgs/CameraInfo") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::CameraInfo>()); } else
         if(name == "/sensor_msgs/ChannelFloat32") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::ChannelFloat32>()); } else
         if(name == "/sensor_msgs/CompressedImage") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::CompressedImage>()); } else
         if(name == "/sensor_msgs/FluidPressure") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::FluidPressure>()); } else
         if(name == "/sensor_msgs/Illuminance") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Illuminance>()); } else
         if(name == "/sensor_msgs/Image") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Image>()); } else
         if(name == "/sensor_msgs/Imu") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Imu>()); } else
         if(name == "/sensor_msgs/JointState") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::JointState>()); } else
         if(name == "/sensor_msgs/Joy") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Joy>()); } else
         if(name == "/sensor_msgs/JoyFeedback") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::JoyFeedback>()); } else
         if(name == "/sensor_msgs/JoyFeedbackArray") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::JoyFeedbackArray>()); } else
         if(name == "/sensor_msgs/LaserEcho") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::LaserEcho>()); } else
         if(name == "/sensor_msgs/LaserScan") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::LaserScan>()); } else
         if(name == "/sensor_msgs/MagneticField") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::MagneticField>()); } else
         if(name == "/sensor_msgs/MultiDOFJointState") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::MultiDOFJointState>()); } else
         if(name == "/sensor_msgs/MultiEchoLaserScan") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::MultiEchoLaserScan>()); } else
         if(name == "/sensor_msgs/NavSatFix") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::NavSatFix>()); } else
         if(name == "/sensor_msgs/NavSatStatus") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::NavSatStatus>()); } else
         if(name == "/sensor_msgs/PointCloud") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::PointCloud>()); } else
         if(name == "/sensor_msgs/PointCloud2") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::PointCloud2>()); } else
         if(name == "/sensor_msgs/PointField") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::PointField>()); } else
         if(name == "/sensor_msgs/Range") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Range>()); } else
         if(name == "/sensor_msgs/RegionOfInterest") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::RegionOfInterest>()); } else
         if(name == "/sensor_msgs/RelativeHumidity") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::RelativeHumidity>()); } else
         if(name == "/sensor_msgs/Temperature") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::Temperature>()); } else
         if(name == "/sensor_msgs/TimeReference") { return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<sensor_msgs::TimeReference>()); } else
 { }
          return false;
      }
      
      std::string getTransportName() const {
          return "ros";
      }
      
      std::string getTypekitName() const {
          return std::string("ros-")+"sensor_msgs";
      }
      std::string getName() const {
          return std::string("rtt-ros-") + "sensor_msgs" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSsensor_msgsPlugin )
