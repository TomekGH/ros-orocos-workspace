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

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_visualization_msgs_ImageMarker();
        void rtt_ros_addType_visualization_msgs_InteractiveMarker();
        void rtt_ros_addType_visualization_msgs_InteractiveMarkerControl();
        void rtt_ros_addType_visualization_msgs_InteractiveMarkerFeedback();
        void rtt_ros_addType_visualization_msgs_InteractiveMarkerInit();
        void rtt_ros_addType_visualization_msgs_InteractiveMarkerPose();
        void rtt_ros_addType_visualization_msgs_InteractiveMarkerUpdate();
        void rtt_ros_addType_visualization_msgs_MarkerArray();
        void rtt_ros_addType_visualization_msgs_Marker();
        void rtt_ros_addType_visualization_msgs_MenuEntry();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSvisualization_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"visualization_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_visualization_msgs_ImageMarker(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_InteractiveMarker(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_InteractiveMarkerControl(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_InteractiveMarkerFeedback(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_InteractiveMarkerInit(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_InteractiveMarkerPose(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_InteractiveMarkerUpdate(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_MarkerArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_Marker(); // factory function for adding TypeInfo.
        rtt_ros_addType_visualization_msgs_MenuEntry(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSvisualization_msgsTypekitPlugin )

