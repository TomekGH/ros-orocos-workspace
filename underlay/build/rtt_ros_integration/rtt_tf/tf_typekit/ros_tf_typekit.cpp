#include <orocos/tf/boost/tfMessage.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_tf_tfMessage();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROStfTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"tf";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_tf_tfMessage(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROStfTypekitPlugin )

