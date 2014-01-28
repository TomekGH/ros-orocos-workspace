#include <orocos/trajectory_msgs/boost/JointTrajectory.h>
#include <orocos/trajectory_msgs/boost/JointTrajectoryPoint.h>
#include <orocos/trajectory_msgs/boost/MultiDOFJointTrajectory.h>
#include <orocos/trajectory_msgs/boost/MultiDOFJointTrajectoryPoint.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_trajectory_msgs_JointTrajectory();
        void rtt_ros_addType_trajectory_msgs_JointTrajectoryPoint();
        void rtt_ros_addType_trajectory_msgs_MultiDOFJointTrajectory();
        void rtt_ros_addType_trajectory_msgs_MultiDOFJointTrajectoryPoint();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROStrajectory_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"trajectory_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_trajectory_msgs_JointTrajectory(); // factory function for adding TypeInfo.
        rtt_ros_addType_trajectory_msgs_JointTrajectoryPoint(); // factory function for adding TypeInfo.
        rtt_ros_addType_trajectory_msgs_MultiDOFJointTrajectory(); // factory function for adding TypeInfo.
        rtt_ros_addType_trajectory_msgs_MultiDOFJointTrajectoryPoint(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROStrajectory_msgsTypekitPlugin )

