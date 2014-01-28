/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/nav_msgs/cmake/../msg/Path.msg */
#ifndef NAV_MSGS_BOOST_SERIALIZATION_PATH_H
#define NAV_MSGS_BOOST_SERIALIZATION_PATH_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <nav_msgs/Path.h>
#include <std_msgs/boost/Header.h>
#include <geometry_msgs/boost/PoseStamped.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::nav_msgs::Path_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("poses",m.poses);
}

} // namespace serialization
} // namespace boost

#endif // NAV_MSGS_BOOST_SERIALIZATION_PATH_H
