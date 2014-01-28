/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/geometry_msgs/cmake/../msg/Polygon.msg */
#ifndef GEOMETRY_MSGS_BOOST_SERIALIZATION_POLYGON_H
#define GEOMETRY_MSGS_BOOST_SERIALIZATION_POLYGON_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/boost/Point32.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::geometry_msgs::Polygon_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("points",m.points);
}

} // namespace serialization
} // namespace boost

#endif // GEOMETRY_MSGS_BOOST_SERIALIZATION_POLYGON_H

