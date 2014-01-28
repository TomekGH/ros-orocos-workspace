#include <visualization_msgs/boost/InteractiveMarker.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::internal::DataSource< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::internal::AssignCommand< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::internal::ValueDataSource< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::OutputPort< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::InputPort< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::Property< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::Attribute< visualization_msgs::InteractiveMarker >;
template class RTT_EXPORT RTT::Constant< visualization_msgs::InteractiveMarker >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_visualization_msgs_InteractiveMarker() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<visualization_msgs::InteractiveMarker>("/visualization_msgs/InteractiveMarker") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<visualization_msgs::InteractiveMarker> >("/visualization_msgs/InteractiveMarker[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<visualization_msgs::InteractiveMarker> >("/visualization_msgs/cInteractiveMarker[]") );
      }

    
}

