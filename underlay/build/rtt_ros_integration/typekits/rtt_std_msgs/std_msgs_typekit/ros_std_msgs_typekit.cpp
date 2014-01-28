#include <orocos/std_msgs/boost/Bool.h>
#include <orocos/std_msgs/boost/Byte.h>
#include <orocos/std_msgs/boost/ByteMultiArray.h>
#include <orocos/std_msgs/boost/Char.h>
#include <orocos/std_msgs/boost/ColorRGBA.h>
#include <orocos/std_msgs/boost/Duration.h>
#include <orocos/std_msgs/boost/Empty.h>
#include <orocos/std_msgs/boost/Float32.h>
#include <orocos/std_msgs/boost/Float32MultiArray.h>
#include <orocos/std_msgs/boost/Float64.h>
#include <orocos/std_msgs/boost/Float64MultiArray.h>
#include <orocos/std_msgs/boost/Header.h>
#include <orocos/std_msgs/boost/Int16.h>
#include <orocos/std_msgs/boost/Int16MultiArray.h>
#include <orocos/std_msgs/boost/Int32.h>
#include <orocos/std_msgs/boost/Int32MultiArray.h>
#include <orocos/std_msgs/boost/Int64.h>
#include <orocos/std_msgs/boost/Int64MultiArray.h>
#include <orocos/std_msgs/boost/Int8.h>
#include <orocos/std_msgs/boost/Int8MultiArray.h>
#include <orocos/std_msgs/boost/MultiArrayDimension.h>
#include <orocos/std_msgs/boost/MultiArrayLayout.h>
#include <orocos/std_msgs/boost/String.h>
#include <orocos/std_msgs/boost/Time.h>
#include <orocos/std_msgs/boost/UInt16.h>
#include <orocos/std_msgs/boost/UInt16MultiArray.h>
#include <orocos/std_msgs/boost/UInt32.h>
#include <orocos/std_msgs/boost/UInt32MultiArray.h>
#include <orocos/std_msgs/boost/UInt64.h>
#include <orocos/std_msgs/boost/UInt64MultiArray.h>
#include <orocos/std_msgs/boost/UInt8.h>
#include <orocos/std_msgs/boost/UInt8MultiArray.h>

#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>

namespace ros_integration {
  using namespace RTT;

    /** Declare all factory functions */
            void rtt_ros_addType_std_msgs_Bool();
        void rtt_ros_addType_std_msgs_Byte();
        void rtt_ros_addType_std_msgs_ByteMultiArray();
        void rtt_ros_addType_std_msgs_Char();
        void rtt_ros_addType_std_msgs_ColorRGBA();
        void rtt_ros_addType_std_msgs_Duration();
        void rtt_ros_addType_std_msgs_Empty();
        void rtt_ros_addType_std_msgs_Float32();
        void rtt_ros_addType_std_msgs_Float32MultiArray();
        void rtt_ros_addType_std_msgs_Float64();
        void rtt_ros_addType_std_msgs_Float64MultiArray();
        void rtt_ros_addType_std_msgs_Header();
        void rtt_ros_addType_std_msgs_Int16();
        void rtt_ros_addType_std_msgs_Int16MultiArray();
        void rtt_ros_addType_std_msgs_Int32();
        void rtt_ros_addType_std_msgs_Int32MultiArray();
        void rtt_ros_addType_std_msgs_Int64();
        void rtt_ros_addType_std_msgs_Int64MultiArray();
        void rtt_ros_addType_std_msgs_Int8();
        void rtt_ros_addType_std_msgs_Int8MultiArray();
        void rtt_ros_addType_std_msgs_MultiArrayDimension();
        void rtt_ros_addType_std_msgs_MultiArrayLayout();
        void rtt_ros_addType_std_msgs_String();
        void rtt_ros_addType_std_msgs_Time();
        void rtt_ros_addType_std_msgs_UInt16();
        void rtt_ros_addType_std_msgs_UInt16MultiArray();
        void rtt_ros_addType_std_msgs_UInt32();
        void rtt_ros_addType_std_msgs_UInt32MultiArray();
        void rtt_ros_addType_std_msgs_UInt64();
        void rtt_ros_addType_std_msgs_UInt64MultiArray();
        void rtt_ros_addType_std_msgs_UInt8();
        void rtt_ros_addType_std_msgs_UInt8MultiArray();

   
    /**
     * This interface defines the types of the realTime package.
     */
    class ROSstd_msgsTypekitPlugin
      : public types::TypekitPlugin
    {
    public:
      virtual std::string getName(){
          return std::string("ros-")+"std_msgs";
      }

      virtual bool loadTypes() {
          // call all factory functions
                  rtt_ros_addType_std_msgs_Bool(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Byte(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_ByteMultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Char(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_ColorRGBA(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Duration(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Empty(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Float32(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Float32MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Float64(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Float64MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Header(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int16(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int16MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int32(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int32MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int64(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int64MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int8(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Int8MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_MultiArrayDimension(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_MultiArrayLayout(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_String(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_Time(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt16(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt16MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt32(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt32MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt64(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt64MultiArray(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt8(); // factory function for adding TypeInfo.
        rtt_ros_addType_std_msgs_UInt8MultiArray(); // factory function for adding TypeInfo.

          return true;
      }
      virtual bool loadOperators() { return true; }
      virtual bool loadConstructors() { return true; }
    };
}

ORO_TYPEKIT_PLUGIN( ros_integration::ROSstd_msgsTypekitPlugin )

