/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/nav_msgs/cmake/../msg/MapMetaData.msg */
#ifndef NAV_MSGS_BOOST_SERIALIZATION_MAPMETADATA_H
#define NAV_MSGS_BOOST_SERIALIZATION_MAPMETADATA_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <nav_msgs/MapMetaData.h>
#include <geometry_msgs/boost/Pose.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::nav_msgs::MapMetaData_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("map_load_time",m.map_load_time);
    a & make_nvp("resolution",m.resolution);
    a & make_nvp("width",m.width);
    a & make_nvp("height",m.height);
    a & make_nvp("origin",m.origin);
}

} // namespace serialization
} // namespace boost

#endif // NAV_MSGS_BOOST_SERIALIZATION_MAPMETADATA_H

