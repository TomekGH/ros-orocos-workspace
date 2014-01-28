#include <nav_msgs/boost/Path.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< nav_msgs::Path >;
template class RTT_EXPORT RTT::internal::DataSource< nav_msgs::Path >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< nav_msgs::Path >;
template class RTT_EXPORT RTT::internal::AssignCommand< nav_msgs::Path >;
template class RTT_EXPORT RTT::internal::ValueDataSource< nav_msgs::Path >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< nav_msgs::Path >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< nav_msgs::Path >;
template class RTT_EXPORT RTT::OutputPort< nav_msgs::Path >;
template class RTT_EXPORT RTT::InputPort< nav_msgs::Path >;
template class RTT_EXPORT RTT::Property< nav_msgs::Path >;
template class RTT_EXPORT RTT::Attribute< nav_msgs::Path >;
template class RTT_EXPORT RTT::Constant< nav_msgs::Path >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_nav_msgs_Path() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<nav_msgs::Path>("/nav_msgs/Path") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<nav_msgs::Path> >("/nav_msgs/Path[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<nav_msgs::Path> >("/nav_msgs/cPath[]") );
      }

    
}

