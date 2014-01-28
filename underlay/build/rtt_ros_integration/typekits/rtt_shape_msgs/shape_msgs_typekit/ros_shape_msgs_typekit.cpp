#include <orocos/shape_msgs/boost/Mesh.h>
#include <orocos/shape_msgs/boost/MeshTriangle.h>
#include <orocos/shape_msgs/boost/Plane.h>
#include <orocos/shape_msgs/boost/SolidPrimitive.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_shape_msgs_Mesh();
        void rtt_ros_addType_shape_msgs_MeshTriangle();
        void rtt_ros_addType_shape_msgs_Plane();
        void rtt_ros_addType_shape_msgs_SolidPrimitive();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSshape_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"shape_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_shape_msgs_Mesh(); // factory function for adding TypeInfo.
        rtt_ros_addType_shape_msgs_MeshTriangle(); // factory function for adding TypeInfo.
        rtt_ros_addType_shape_msgs_Plane(); // factory function for adding TypeInfo.
        rtt_ros_addType_shape_msgs_SolidPrimitive(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSshape_msgsTypekitPlugin )

