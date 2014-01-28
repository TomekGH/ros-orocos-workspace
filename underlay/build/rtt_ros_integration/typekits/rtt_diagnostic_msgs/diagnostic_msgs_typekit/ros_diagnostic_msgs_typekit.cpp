#include <orocos/diagnostic_msgs/boost/DiagnosticArray.h>
#include <orocos/diagnostic_msgs/boost/DiagnosticStatus.h>
#include <orocos/diagnostic_msgs/boost/KeyValue.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_diagnostic_msgs_DiagnosticArray();
        void rtt_ros_addType_diagnostic_msgs_DiagnosticStatus();
        void rtt_ros_addType_diagnostic_msgs_KeyValue();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSdiagnostic_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"diagnostic_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_diagnostic_msgs_DiagnosticArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_diagnostic_msgs_DiagnosticStatus(); // factory function for adding TypeInfo.
        rtt_ros_addType_diagnostic_msgs_KeyValue(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSdiagnostic_msgsTypekitPlugin )

