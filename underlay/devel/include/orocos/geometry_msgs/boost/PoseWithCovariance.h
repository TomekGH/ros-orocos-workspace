/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg */
#ifndef GEOMETRY_MSGS_BOOST_SERIALIZATION_POSEWITHCOVARIANCE_H
#define GEOMETRY_MSGS_BOOST_SERIALIZATION_POSEWITHCOVARIANCE_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/boost/Pose.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("pose",m.pose);
    a & make_nvp("covariance",m.covariance);
}

} // namespace serialization
} // namespace boost

#endif // GEOMETRY_MSGS_BOOST_SERIALIZATION_POSEWITHCOVARIANCE_H
