#include <orocos/geometry_msgs/boost/Point.h>
#include <orocos/geometry_msgs/boost/Point32.h>
#include <orocos/geometry_msgs/boost/PointStamped.h>
#include <orocos/geometry_msgs/boost/Polygon.h>
#include <orocos/geometry_msgs/boost/PolygonStamped.h>
#include <orocos/geometry_msgs/boost/Pose2D.h>
#include <orocos/geometry_msgs/boost/Pose.h>
#include <orocos/geometry_msgs/boost/PoseArray.h>
#include <orocos/geometry_msgs/boost/PoseStamped.h>
#include <orocos/geometry_msgs/boost/PoseWithCovariance.h>
#include <orocos/geometry_msgs/boost/PoseWithCovarianceStamped.h>
#include <orocos/geometry_msgs/boost/Quaternion.h>
#include <orocos/geometry_msgs/boost/QuaternionStamped.h>
#include <orocos/geometry_msgs/boost/Transform.h>
#include <orocos/geometry_msgs/boost/TransformStamped.h>
#include <orocos/geometry_msgs/boost/Twist.h>
#include <orocos/geometry_msgs/boost/TwistStamped.h>
#include <orocos/geometry_msgs/boost/TwistWithCovariance.h>
#include <orocos/geometry_msgs/boost/TwistWithCovarianceStamped.h>
#include <orocos/geometry_msgs/boost/Vector3.h>
#include <orocos/geometry_msgs/boost/Vector3Stamped.h>
#include <orocos/geometry_msgs/boost/Wrench.h>
#include <orocos/geometry_msgs/boost/WrenchStamped.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_geometry_msgs_Point();
        void rtt_ros_addType_geometry_msgs_Point32();
        void rtt_ros_addType_geometry_msgs_PointStamped();
        void rtt_ros_addType_geometry_msgs_Polygon();
        void rtt_ros_addType_geometry_msgs_PolygonStamped();
        void rtt_ros_addType_geometry_msgs_Pose2D();
        void rtt_ros_addType_geometry_msgs_Pose();
        void rtt_ros_addType_geometry_msgs_PoseArray();
        void rtt_ros_addType_geometry_msgs_PoseStamped();
        void rtt_ros_addType_geometry_msgs_PoseWithCovariance();
        void rtt_ros_addType_geometry_msgs_PoseWithCovarianceStamped();
        void rtt_ros_addType_geometry_msgs_Quaternion();
        void rtt_ros_addType_geometry_msgs_QuaternionStamped();
        void rtt_ros_addType_geometry_msgs_Transform();
        void rtt_ros_addType_geometry_msgs_TransformStamped();
        void rtt_ros_addType_geometry_msgs_Twist();
        void rtt_ros_addType_geometry_msgs_TwistStamped();
        void rtt_ros_addType_geometry_msgs_TwistWithCovariance();
        void rtt_ros_addType_geometry_msgs_TwistWithCovarianceStamped();
        void rtt_ros_addType_geometry_msgs_Vector3();
        void rtt_ros_addType_geometry_msgs_Vector3Stamped();
        void rtt_ros_addType_geometry_msgs_Wrench();
        void rtt_ros_addType_geometry_msgs_WrenchStamped();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSgeometry_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"geometry_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_geometry_msgs_Point(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Point32(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_PointStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Polygon(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_PolygonStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Pose2D(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Pose(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_PoseArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_PoseStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_PoseWithCovariance(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_PoseWithCovarianceStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Quaternion(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_QuaternionStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Transform(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_TransformStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Twist(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_TwistStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_TwistWithCovariance(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_TwistWithCovarianceStamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Vector3(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Vector3Stamped(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_Wrench(); // factory function for adding TypeInfo.
        rtt_ros_addType_geometry_msgs_WrenchStamped(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSgeometry_msgsTypekitPlugin )

