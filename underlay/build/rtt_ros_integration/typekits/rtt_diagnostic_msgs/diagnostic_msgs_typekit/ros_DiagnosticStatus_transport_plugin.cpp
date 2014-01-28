#include <diagnostic_msgs/boost/DiagnosticStatus.h>
#include <rtt_rostopic/ros_msg_transporter.hpp>
#include <rtt_rostopic/rtt_rostopic.h>
#include <rtt/types/TransportPlugin.hpp>
#include <rtt/types/TypekitPlugin.hpp>

namespace ros_integration {
  using namespace RTT;
  struct ROSDiagnosticStatusPlugin
    : public types::TransportPlugin
    {
      bool registerTransport(std::string name, types::TypeInfo* ti)
      {
        if(name == "/diagnostic_msgs/DiagnosticStatus")
          return ti->addProtocol(ORO_ROS_PROTOCOL_ID,new RosMsgTransporter<diagnostic_msgs::DiagnosticStatus>());
        return false;
      }

      std::string getTransportName() const {
        return "ros";
      }

      std::string getTypekitName() const {
        return std::string("ros-")+"DiagnosticStatus";
      }
      std::string getName() const {
        return std::string("rtt-ros-") + "DiagnosticStatus" + "-transport";
      }

    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSDiagnosticStatusPlugin )
