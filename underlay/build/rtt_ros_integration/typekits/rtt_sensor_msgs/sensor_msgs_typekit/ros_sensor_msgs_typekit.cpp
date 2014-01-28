#include <orocos/sensor_msgs/boost/CameraInfo.h>
#include <orocos/sensor_msgs/boost/ChannelFloat32.h>
#include <orocos/sensor_msgs/boost/CompressedImage.h>
#include <orocos/sensor_msgs/boost/FluidPressure.h>
#include <orocos/sensor_msgs/boost/Illuminance.h>
#include <orocos/sensor_msgs/boost/Image.h>
#include <orocos/sensor_msgs/boost/Imu.h>
#include <orocos/sensor_msgs/boost/JointState.h>
#include <orocos/sensor_msgs/boost/Joy.h>
#include <orocos/sensor_msgs/boost/JoyFeedback.h>
#include <orocos/sensor_msgs/boost/JoyFeedbackArray.h>
#include <orocos/sensor_msgs/boost/LaserEcho.h>
#include <orocos/sensor_msgs/boost/LaserScan.h>
#include <orocos/sensor_msgs/boost/MagneticField.h>
#include <orocos/sensor_msgs/boost/MultiDOFJointState.h>
#include <orocos/sensor_msgs/boost/MultiEchoLaserScan.h>
#include <orocos/sensor_msgs/boost/NavSatFix.h>
#include <orocos/sensor_msgs/boost/NavSatStatus.h>
#include <orocos/sensor_msgs/boost/PointCloud.h>
#include <orocos/sensor_msgs/boost/PointCloud2.h>
#include <orocos/sensor_msgs/boost/PointField.h>
#include <orocos/sensor_msgs/boost/Range.h>
#include <orocos/sensor_msgs/boost/RegionOfInterest.h>
#include <orocos/sensor_msgs/boost/RelativeHumidity.h>
#include <orocos/sensor_msgs/boost/Temperature.h>
#include <orocos/sensor_msgs/boost/TimeReference.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_sensor_msgs_CameraInfo();
        void rtt_ros_addType_sensor_msgs_ChannelFloat32();
        void rtt_ros_addType_sensor_msgs_CompressedImage();
        void rtt_ros_addType_sensor_msgs_FluidPressure();
        void rtt_ros_addType_sensor_msgs_Illuminance();
        void rtt_ros_addType_sensor_msgs_Image();
        void rtt_ros_addType_sensor_msgs_Imu();
        void rtt_ros_addType_sensor_msgs_JointState();
        void rtt_ros_addType_sensor_msgs_Joy();
        void rtt_ros_addType_sensor_msgs_JoyFeedback();
        void rtt_ros_addType_sensor_msgs_JoyFeedbackArray();
        void rtt_ros_addType_sensor_msgs_LaserEcho();
        void rtt_ros_addType_sensor_msgs_LaserScan();
        void rtt_ros_addType_sensor_msgs_MagneticField();
        void rtt_ros_addType_sensor_msgs_MultiDOFJointState();
        void rtt_ros_addType_sensor_msgs_MultiEchoLaserScan();
        void rtt_ros_addType_sensor_msgs_NavSatFix();
        void rtt_ros_addType_sensor_msgs_NavSatStatus();
        void rtt_ros_addType_sensor_msgs_PointCloud();
        void rtt_ros_addType_sensor_msgs_PointCloud2();
        void rtt_ros_addType_sensor_msgs_PointField();
        void rtt_ros_addType_sensor_msgs_Range();
        void rtt_ros_addType_sensor_msgs_RegionOfInterest();
        void rtt_ros_addType_sensor_msgs_RelativeHumidity();
        void rtt_ros_addType_sensor_msgs_Temperature();
        void rtt_ros_addType_sensor_msgs_TimeReference();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSsensor_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"sensor_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_sensor_msgs_CameraInfo(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_ChannelFloat32(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_CompressedImage(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_FluidPressure(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_Illuminance(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_Image(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_Imu(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_JointState(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_Joy(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_JoyFeedback(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_JoyFeedbackArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_LaserEcho(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_LaserScan(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_MagneticField(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_MultiDOFJointState(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_MultiEchoLaserScan(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_NavSatFix(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_NavSatStatus(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_PointCloud(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_PointCloud2(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_PointField(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_Range(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_RegionOfInterest(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_RelativeHumidity(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_Temperature(); // factory function for adding TypeInfo.
        rtt_ros_addType_sensor_msgs_TimeReference(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSsensor_msgsTypekitPlugin )

