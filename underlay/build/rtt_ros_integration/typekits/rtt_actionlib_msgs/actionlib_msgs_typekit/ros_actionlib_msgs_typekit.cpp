#include <orocos/actionlib_msgs/boost/GoalID.h>
#include <orocos/actionlib_msgs/boost/GoalStatus.h>
#include <orocos/actionlib_msgs/boost/GoalStatusArray.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_actionlib_msgs_GoalID();
        void rtt_ros_addType_actionlib_msgs_GoalStatus();
        void rtt_ros_addType_actionlib_msgs_GoalStatusArray();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSactionlib_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"actionlib_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_actionlib_msgs_GoalID(); // factory function for adding TypeInfo.
        rtt_ros_addType_actionlib_msgs_GoalStatus(); // factory function for adding TypeInfo.
        rtt_ros_addType_actionlib_msgs_GoalStatusArray(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSactionlib_msgsTypekitPlugin )

