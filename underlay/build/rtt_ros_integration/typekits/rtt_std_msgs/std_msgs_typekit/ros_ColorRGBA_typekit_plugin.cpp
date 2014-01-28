#include <std_msgs/boost/ColorRGBA.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::internal::DataSource< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::internal::AssignCommand< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::internal::ValueDataSource< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::OutputPort< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::InputPort< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::Property< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::Attribute< std_msgs::ColorRGBA >;
template class RTT_EXPORT RTT::Constant< std_msgs::ColorRGBA >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_std_msgs_ColorRGBA() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<std_msgs::ColorRGBA>("/std_msgs/ColorRGBA") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<std_msgs::ColorRGBA> >("/std_msgs/ColorRGBA[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<std_msgs::ColorRGBA> >("/std_msgs/cColorRGBA[]") );
      }

    
}
