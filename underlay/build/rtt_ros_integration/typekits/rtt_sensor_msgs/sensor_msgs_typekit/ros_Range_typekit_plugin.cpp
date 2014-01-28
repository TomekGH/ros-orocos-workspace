#include <sensor_msgs/boost/Range.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< sensor_msgs::Range >;
template class RTT_EXPORT RTT::internal::DataSource< sensor_msgs::Range >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< sensor_msgs::Range >;
template class RTT_EXPORT RTT::internal::AssignCommand< sensor_msgs::Range >;
template class RTT_EXPORT RTT::internal::ValueDataSource< sensor_msgs::Range >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< sensor_msgs::Range >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< sensor_msgs::Range >;
template class RTT_EXPORT RTT::OutputPort< sensor_msgs::Range >;
template class RTT_EXPORT RTT::InputPort< sensor_msgs::Range >;
template class RTT_EXPORT RTT::Property< sensor_msgs::Range >;
template class RTT_EXPORT RTT::Attribute< sensor_msgs::Range >;
template class RTT_EXPORT RTT::Constant< sensor_msgs::Range >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_sensor_msgs_Range() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<sensor_msgs::Range>("/sensor_msgs/Range") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<sensor_msgs::Range> >("/sensor_msgs/Range[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<sensor_msgs::Range> >("/sensor_msgs/cRange[]") );
      }

    
}

