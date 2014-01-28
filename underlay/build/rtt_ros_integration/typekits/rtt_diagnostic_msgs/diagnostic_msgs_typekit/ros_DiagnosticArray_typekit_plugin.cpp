#include <diagnostic_msgs/boost/DiagnosticArray.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::internal::DataSource< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::internal::AssignCommand< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::internal::ValueDataSource< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::OutputPort< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::InputPort< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::Property< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::Attribute< diagnostic_msgs::DiagnosticArray >;
template class RTT_EXPORT RTT::Constant< diagnostic_msgs::DiagnosticArray >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_diagnostic_msgs_DiagnosticArray() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<diagnostic_msgs::DiagnosticArray>("/diagnostic_msgs/DiagnosticArray") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<diagnostic_msgs::DiagnosticArray> >("/diagnostic_msgs/DiagnosticArray[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<diagnostic_msgs::DiagnosticArray> >("/diagnostic_msgs/cDiagnosticArray[]") );
      }

    
}

