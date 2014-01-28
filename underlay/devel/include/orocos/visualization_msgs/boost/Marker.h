/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/visualization_msgs/cmake/../msg/Marker.msg */
#ifndef VISUALIZATION_MSGS_BOOST_SERIALIZATION_MARKER_H
#define VISUALIZATION_MSGS_BOOST_SERIALIZATION_MARKER_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <visualization_msgs/Marker.h>
#include <std_msgs/boost/Header.h>
#include <geometry_msgs/boost/Pose.h>
#include <geometry_msgs/boost/Vector3.h>
#include <std_msgs/boost/ColorRGBA.h>
#include <geometry_msgs/boost/Point.h>
#include <std_msgs/boost/ColorRGBA.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::visualization_msgs::Marker_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("ns",m.ns);
    a & make_nvp("id",m.id);
    a & make_nvp("type",m.type);
    a & make_nvp("action",m.action);
    a & make_nvp("pose",m.pose);
    a & make_nvp("scale",m.scale);
    a & make_nvp("color",m.color);
    a & make_nvp("lifetime",m.lifetime);
    a & make_nvp("frame_locked",m.frame_locked);
    a & make_nvp("points",m.points);
    a & make_nvp("colors",m.colors);
    a & make_nvp("text",m.text);
    a & make_nvp("mesh_resource",m.mesh_resource);
    a & make_nvp("mesh_use_embedded_materials",m.mesh_use_embedded_materials);
}

} // namespace serialization
} // namespace boost

#endif // VISUALIZATION_MSGS_BOOST_SERIALIZATION_MARKER_H
