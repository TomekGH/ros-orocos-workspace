#include <actionlib_msgs/boost/GoalID.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::internal::DataSource< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::internal::AssignCommand< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::internal::ValueDataSource< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::OutputPort< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::InputPort< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::Property< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::Attribute< actionlib_msgs::GoalID >;
template class RTT_EXPORT RTT::Constant< actionlib_msgs::GoalID >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_actionlib_msgs_GoalID() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<actionlib_msgs::GoalID>("/actionlib_msgs/GoalID") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<actionlib_msgs::GoalID> >("/actionlib_msgs/GoalID[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<actionlib_msgs::GoalID> >("/actionlib_msgs/cGoalID[]") );
      }

    
}

