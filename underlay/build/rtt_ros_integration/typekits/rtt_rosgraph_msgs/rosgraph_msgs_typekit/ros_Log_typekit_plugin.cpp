#include <rosgraph_msgs/boost/Log.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::internal::DataSource< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::internal::AssignCommand< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::internal::ValueDataSource< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::OutputPort< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::InputPort< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::Property< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::Attribute< rosgraph_msgs::Log >;
template class RTT_EXPORT RTT::Constant< rosgraph_msgs::Log >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_rosgraph_msgs_Log() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<rosgraph_msgs::Log>("/rosgraph_msgs/Log") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<rosgraph_msgs::Log> >("/rosgraph_msgs/Log[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<rosgraph_msgs::Log> >("/rosgraph_msgs/cLog[]") );
      }

    
}

