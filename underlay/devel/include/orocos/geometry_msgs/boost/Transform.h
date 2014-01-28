/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/geometry_msgs/cmake/../msg/Transform.msg */
#ifndef GEOMETRY_MSGS_BOOST_SERIALIZATION_TRANSFORM_H
#define GEOMETRY_MSGS_BOOST_SERIALIZATION_TRANSFORM_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <geometry_msgs/Transform.h>
#include <geometry_msgs/boost/Vector3.h>
#include <geometry_msgs/boost/Quaternion.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::geometry_msgs::Transform_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("translation",m.translation);
    a & make_nvp("rotation",m.rotation);
}

} // namespace serialization
} // namespace boost

#endif // GEOMETRY_MSGS_BOOST_SERIALIZATION_TRANSFORM_H
