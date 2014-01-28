#include <trajectory_msgs/boost/MultiDOFJointTrajectory.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::internal::DataSource< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::internal::AssignCommand< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::internal::ValueDataSource< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::OutputPort< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::InputPort< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::Property< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::Attribute< trajectory_msgs::MultiDOFJointTrajectory >;
template class RTT_EXPORT RTT::Constant< trajectory_msgs::MultiDOFJointTrajectory >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_trajectory_msgs_MultiDOFJointTrajectory() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<trajectory_msgs::MultiDOFJointTrajectory>("/trajectory_msgs/MultiDOFJointTrajectory") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<trajectory_msgs::MultiDOFJointTrajectory> >("/trajectory_msgs/MultiDOFJointTrajectory[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<trajectory_msgs::MultiDOFJointTrajectory> >("/trajectory_msgs/cMultiDOFJointTrajectory[]") );
      }

    
}

