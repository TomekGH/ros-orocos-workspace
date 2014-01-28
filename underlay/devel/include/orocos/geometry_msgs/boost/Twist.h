/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/geometry_msgs/cmake/../msg/Twist.msg */
#ifndef GEOMETRY_MSGS_BOOST_SERIALIZATION_TWIST_H
#define GEOMETRY_MSGS_BOOST_SERIALIZATION_TWIST_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/boost/Vector3.h>
#include <geometry_msgs/boost/Vector3.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::geometry_msgs::Twist_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("linear",m.linear);
    a & make_nvp("angular",m.angular);
}

} // namespace serialization
} // namespace boost

#endif // GEOMETRY_MSGS_BOOST_SERIALIZATION_TWIST_H

