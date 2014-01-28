/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/sensor_msgs/cmake/../msg/Joy.msg */
#ifndef SENSOR_MSGS_BOOST_SERIALIZATION_JOY_H
#define SENSOR_MSGS_BOOST_SERIALIZATION_JOY_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <sensor_msgs/Joy.h>
#include <std_msgs/boost/Header.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::sensor_msgs::Joy_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("axes",m.axes);
    a & make_nvp("buttons",m.buttons);
}

} // namespace serialization
} // namespace boost

#endif // SENSOR_MSGS_BOOST_SERIALIZATION_JOY_H

