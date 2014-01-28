#include <geometry_msgs/boost/Point.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< geometry_msgs::Point >;
template class RTT_EXPORT RTT::internal::DataSource< geometry_msgs::Point >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< geometry_msgs::Point >;
template class RTT_EXPORT RTT::internal::AssignCommand< geometry_msgs::Point >;
template class RTT_EXPORT RTT::internal::ValueDataSource< geometry_msgs::Point >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< geometry_msgs::Point >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< geometry_msgs::Point >;
template class RTT_EXPORT RTT::OutputPort< geometry_msgs::Point >;
template class RTT_EXPORT RTT::InputPort< geometry_msgs::Point >;
template class RTT_EXPORT RTT::Property< geometry_msgs::Point >;
template class RTT_EXPORT RTT::Attribute< geometry_msgs::Point >;
template class RTT_EXPORT RTT::Constant< geometry_msgs::Point >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_geometry_msgs_Point() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<geometry_msgs::Point>("/geometry_msgs/Point") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<geometry_msgs::Point> >("/geometry_msgs/Point[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<geometry_msgs::Point> >("/geometry_msgs/cPoint[]") );
      }

    
}
