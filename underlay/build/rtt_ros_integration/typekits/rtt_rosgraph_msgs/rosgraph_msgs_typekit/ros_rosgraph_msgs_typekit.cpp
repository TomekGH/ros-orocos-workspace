#include <orocos/rosgraph_msgs/boost/Clock.h>
#include <orocos/rosgraph_msgs/boost/Log.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_rosgraph_msgs_Clock();
        void rtt_ros_addType_rosgraph_msgs_Log();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSrosgraph_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"rosgraph_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_rosgraph_msgs_Clock(); // factory function for adding TypeInfo.
        rtt_ros_addType_rosgraph_msgs_Log(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSrosgraph_msgsTypekitPlugin )

