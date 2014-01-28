/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/geometry_msgs/cmake/../msg/TwistStamped.msg */
#ifndef GEOMETRY_MSGS_BOOST_SERIALIZATION_TWISTSTAMPED_H
#define GEOMETRY_MSGS_BOOST_SERIALIZATION_TWISTSTAMPED_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <geometry_msgs/TwistStamped.h>
#include <std_msgs/boost/Header.h>
#include <geometry_msgs/boost/Twist.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::geometry_msgs::TwistStamped_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("twist",m.twist);
}

} // namespace serialization
} // namespace boost

#endif // GEOMETRY_MSGS_BOOST_SERIALIZATION_TWISTSTAMPED_H
