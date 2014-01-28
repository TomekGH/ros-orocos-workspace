#include <trajectory_msgs/boost/JointTrajectory.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::internal::DataSource< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::internal::AssignCommand< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::internal::ValueDataSource< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::OutputPort< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::InputPort< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::Property< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::Attribute< trajectory_msgs::JointTrajectory >;
template class RTT_EXPORT RTT::Constant< trajectory_msgs::JointTrajectory >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_trajectory_msgs_JointTrajectory() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<trajectory_msgs::JointTrajectory>("/trajectory_msgs/JointTrajectory") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<trajectory_msgs::JointTrajectory> >("/trajectory_msgs/JointTrajectory[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<trajectory_msgs::JointTrajectory> >("/trajectory_msgs/cJointTrajectory[]") );
      }

    
}

