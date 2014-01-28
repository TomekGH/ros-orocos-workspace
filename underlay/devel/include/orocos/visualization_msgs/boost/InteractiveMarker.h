/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/visualization_msgs/cmake/../msg/InteractiveMarker.msg */
#ifndef VISUALIZATION_MSGS_BOOST_SERIALIZATION_INTERACTIVEMARKER_H
#define VISUALIZATION_MSGS_BOOST_SERIALIZATION_INTERACTIVEMARKER_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <visualization_msgs/InteractiveMarker.h>
#include <std_msgs/boost/Header.h>
#include <geometry_msgs/boost/Pose.h>
#include <visualization_msgs/boost/MenuEntry.h>
#include <visualization_msgs/boost/InteractiveMarkerControl.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::visualization_msgs::InteractiveMarker_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("pose",m.pose);
    a & make_nvp("name",m.name);
    a & make_nvp("description",m.description);
    a & make_nvp("scale",m.scale);
    a & make_nvp("menu_entries",m.menu_entries);
    a & make_nvp("controls",m.controls);
}

} // namespace serialization
} // namespace boost

#endif // VISUALIZATION_MSGS_BOOST_SERIALIZATION_INTERACTIVEMARKER_H

