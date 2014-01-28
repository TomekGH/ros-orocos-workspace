#include <shape_msgs/boost/Mesh.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::internal::DataSource< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::internal::AssignCommand< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::internal::ValueDataSource< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::OutputPort< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::InputPort< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::Property< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::Attribute< shape_msgs::Mesh >;
template class RTT_EXPORT RTT::Constant< shape_msgs::Mesh >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_shape_msgs_Mesh() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<shape_msgs::Mesh>("/shape_msgs/Mesh") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<shape_msgs::Mesh> >("/shape_msgs/Mesh[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<shape_msgs::Mesh> >("/shape_msgs/cMesh[]") );
      }

    
}
