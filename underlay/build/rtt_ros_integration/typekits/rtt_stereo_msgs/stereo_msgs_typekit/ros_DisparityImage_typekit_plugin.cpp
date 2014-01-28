#include <stereo_msgs/boost/DisparityImage.h>
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/PrimitiveSequenceTypeInfo.hpp>
#include <rtt/types/CArrayTypeInfo.hpp>
#include <vector>

// Note: we need to put these up-front or we get gcc compiler warnings:
// <<warning: type attributes ignored after type is already defined>>        
template class RTT_EXPORT RTT::internal::DataSourceTypeInfo< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::internal::DataSource< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::internal::AssignableDataSource< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::internal::AssignCommand< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::internal::ValueDataSource< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::internal::ConstantDataSource< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::internal::ReferenceDataSource< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::OutputPort< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::InputPort< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::Property< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::Attribute< stereo_msgs::DisparityImage >;
template class RTT_EXPORT RTT::Constant< stereo_msgs::DisparityImage >;

namespace ros_integration {
  using namespace RTT;
    // Factory function
    
      void rtt_ros_addType_stereo_msgs_DisparityImage() {
           // Only the .msg type is sent over ports. The msg[] (variable size) and  cmsg[] (fixed size) exist only as members of larger messages
           RTT::types::Types()->addType( new types::StructTypeInfo<stereo_msgs::DisparityImage>("/stereo_msgs/DisparityImage") );
           RTT::types::Types()->addType( new types::PrimitiveSequenceTypeInfo<std::vector<stereo_msgs::DisparityImage> >("/stereo_msgs/DisparityImage[]") );
           RTT::types::Types()->addType( new types::CArrayTypeInfo<RTT::types::carray<stereo_msgs::DisparityImage> >("/stereo_msgs/cDisparityImage[]") );
      }

    
}

