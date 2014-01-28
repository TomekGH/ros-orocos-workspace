/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/geometry_msgs/cmake/../msg/PoseArray.msg */
#ifndef GEOMETRY_MSGS_BOOST_SERIALIZATION_POSEARRAY_H
#define GEOMETRY_MSGS_BOOST_SERIALIZATION_POSEARRAY_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <geometry_msgs/PoseArray.h>
#include <std_msgs/boost/Header.h>
#include <geometry_msgs/boost/Pose.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::geometry_msgs::PoseArray_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("poses",m.poses);
}

} // namespace serialization
} // namespace boost

#endif // GEOMETRY_MSGS_BOOST_SERIALIZATION_POSEARRAY_H

