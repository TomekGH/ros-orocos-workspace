/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/nav_msgs/cmake/../msg/GetMapActionFeedback.msg */
#ifndef NAV_MSGS_BOOST_SERIALIZATION_GETMAPACTIONFEEDBACK_H
#define NAV_MSGS_BOOST_SERIALIZATION_GETMAPACTIONFEEDBACK_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <nav_msgs/GetMapActionFeedback.h>
#include <std_msgs/boost/Header.h>
#include <actionlib_msgs/boost/GoalStatus.h>
#include <nav_msgs/boost/GetMapFeedback.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::nav_msgs::GetMapActionFeedback_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("status",m.status);
    a & make_nvp("feedback",m.feedback);
}

} // namespace serialization
} // namespace boost

#endif // NAV_MSGS_BOOST_SERIALIZATION_GETMAPACTIONFEEDBACK_H
