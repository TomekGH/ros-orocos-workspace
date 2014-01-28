/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/visualization_msgs/cmake/../msg/MenuEntry.msg */
#ifndef VISUALIZATION_MSGS_BOOST_SERIALIZATION_MENUENTRY_H
#define VISUALIZATION_MSGS_BOOST_SERIALIZATION_MENUENTRY_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <visualization_msgs/MenuEntry.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::visualization_msgs::MenuEntry_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("id",m.id);
    a & make_nvp("parent_id",m.parent_id);
    a & make_nvp("title",m.title);
    a & make_nvp("command",m.command);
    a & make_nvp("command_type",m.command_type);
}

} // namespace serialization
} // namespace boost

#endif // VISUALIZATION_MSGS_BOOST_SERIALIZATION_MENUENTRY_H

