#include <orocos/rtt_actionlib_examples/boost/SomeActionAction.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionActionGoal.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionActionResult.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionActionFeedback.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionGoal.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionResult.h>
#include <orocos/rtt_actionlib_examples/boost/SomeActionFeedback.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_rtt_actionlib_examples_SomeActionAction();
        void rtt_ros_addType_rtt_actionlib_examples_SomeActionActionGoal();
        void rtt_ros_addType_rtt_actionlib_examples_SomeActionActionResult();
        void rtt_ros_addType_rtt_actionlib_examples_SomeActionActionFeedback();
        void rtt_ros_addType_rtt_actionlib_examples_SomeActionGoal();
        void rtt_ros_addType_rtt_actionlib_examples_SomeActionResult();
        void rtt_ros_addType_rtt_actionlib_examples_SomeActionFeedback();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSrtt_actionlib_examplesTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"rtt_actionlib_examples";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_rtt_actionlib_examples_SomeActionAction(); // factory function for adding TypeInfo.
        rtt_ros_addType_rtt_actionlib_examples_SomeActionActionGoal(); // factory function for adding TypeInfo.
        rtt_ros_addType_rtt_actionlib_examples_SomeActionActionResult(); // factory function for adding TypeInfo.
        rtt_ros_addType_rtt_actionlib_examples_SomeActionActionFeedback(); // factory function for adding TypeInfo.
        rtt_ros_addType_rtt_actionlib_examples_SomeActionGoal(); // factory function for adding TypeInfo.
        rtt_ros_addType_rtt_actionlib_examples_SomeActionResult(); // factory function for adding TypeInfo.
        rtt_ros_addType_rtt_actionlib_examples_SomeActionFeedback(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSrtt_actionlib_examplesTypekitPlugin )

