#include <shape_msgs/boost/MeshTriangle.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::internal::DataSource< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::internal::AssignCommand< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::internal::ValueDataSource< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::OutputPort< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::InputPort< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::Property< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::Attribute< shape_msgs::MeshTriangle >;
template class RTT_EXPORT RTT::Constant< shape_msgs::MeshTriangle >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_shape_msgs_MeshTriangle() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<shape_msgs::MeshTriangle>("/shape_msgs/MeshTriangle") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<shape_msgs::MeshTriangle> >("/shape_msgs/MeshTriangle[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<shape_msgs::MeshTriangle> >("/shape_msgs/cMeshTriangle[]") );
      }

    
}

