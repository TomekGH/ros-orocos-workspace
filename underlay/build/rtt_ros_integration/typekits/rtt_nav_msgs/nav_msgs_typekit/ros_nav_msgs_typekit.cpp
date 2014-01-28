#include <orocos/nav_msgs/boost/GridCells.h>
#include <orocos/nav_msgs/boost/MapMetaData.h>
#include <orocos/nav_msgs/boost/OccupancyGrid.h>
#include <orocos/nav_msgs/boost/Odometry.h>
#include <orocos/nav_msgs/boost/Path.h>
#include <orocos/nav_msgs/boost/GetMapAction.h>
#include <orocos/nav_msgs/boost/GetMapActionGoal.h>
#include <orocos/nav_msgs/boost/GetMapActionResult.h>
#include <orocos/nav_msgs/boost/GetMapActionFeedback.h>
#include <orocos/nav_msgs/boost/GetMapGoal.h>
#include <orocos/nav_msgs/boost/GetMapResult.h>
#include <orocos/nav_msgs/boost/GetMapFeedback.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_nav_msgs_GridCells();
        void rtt_ros_addType_nav_msgs_MapMetaData();
        void rtt_ros_addType_nav_msgs_OccupancyGrid();
        void rtt_ros_addType_nav_msgs_Odometry();
        void rtt_ros_addType_nav_msgs_Path();
        void rtt_ros_addType_nav_msgs_GetMapAction();
        void rtt_ros_addType_nav_msgs_GetMapActionGoal();
        void rtt_ros_addType_nav_msgs_GetMapActionResult();
        void rtt_ros_addType_nav_msgs_GetMapActionFeedback();
        void rtt_ros_addType_nav_msgs_GetMapGoal();
        void rtt_ros_addType_nav_msgs_GetMapResult();
        void rtt_ros_addType_nav_msgs_GetMapFeedback();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSnav_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"nav_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_nav_msgs_GridCells(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_MapMetaData(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_OccupancyGrid(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_Odometry(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_Path(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapAction(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapActionGoal(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapActionResult(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapActionFeedback(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapGoal(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapResult(); // factory function for adding TypeInfo.
        rtt_ros_addType_nav_msgs_GetMapFeedback(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSnav_msgsTypekitPlugin )

