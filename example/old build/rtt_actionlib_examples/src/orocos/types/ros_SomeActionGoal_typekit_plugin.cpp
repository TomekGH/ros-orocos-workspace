#include <rtt_actionlib_examples/boost/SomeActionGoal.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::internal::DataSource< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::internal::AssignCommand< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::internal::ValueDataSource< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::OutputPort< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::InputPort< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::Property< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::Attribute< rtt_actionlib_examples::SomeActionGoal >;
template class RTT_EXPORT RTT::Constant< rtt_actionlib_examples::SomeActionGoal >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
          void rtt_ros_addType_rtt_actionlib_examples_SomeActionGoal() {
               // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
               RTT::types::Types()->addType( new types::StructTypeInfo<rtt_actionlib_examples::SomeActionGoal>("/rtt_actionlib_examples/SomeActionGoal") );
               RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<rtt_actionlib_examples::SomeActionGoal> >("/rtt_actionlib_examples/SomeActionGoal[]") );
               RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<rtt_actionlib_examples::SomeActionGoal> >("/rtt_actionlib_examples/cSomeActionGoal[]") );
          }

    
}

