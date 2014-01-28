#include <tf/boost/tfMessage.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< tf::tfMessage >;
template class RTT_EXPORT RTT::internal::DataSource< tf::tfMessage >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< tf::tfMessage >;
template class RTT_EXPORT RTT::internal::AssignCommand< tf::tfMessage >;
template class RTT_EXPORT RTT::internal::ValueDataSource< tf::tfMessage >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< tf::tfMessage >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< tf::tfMessage >;
template class RTT_EXPORT RTT::OutputPort< tf::tfMessage >;
template class RTT_EXPORT RTT::InputPort< tf::tfMessage >;
template class RTT_EXPORT RTT::Property< tf::tfMessage >;
template class RTT_EXPORT RTT::Attribute< tf::tfMessage >;
template class RTT_EXPORT RTT::Constant< tf::tfMessage >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_tf_tfMessage() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<tf::tfMessage>("/tf/tfMessage") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<tf::tfMessage> >("/tf/tfMessage[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<tf::tfMessage> >("/tf/ctfMessage[]") );
      }

    
}

