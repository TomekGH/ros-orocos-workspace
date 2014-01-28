/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/sensor_msgs/cmake/../msg/NavSatFix.msg */
#ifndef SENSOR_MSGS_BOOST_SERIALIZATION_NAVSATFIX_H
#define SENSOR_MSGS_BOOST_SERIALIZATION_NAVSATFIX_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <sensor_msgs/NavSatFix.h>
#include <std_msgs/boost/Header.h>
#include <sensor_msgs/boost/NavSatStatus.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::sensor_msgs::NavSatFix_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("status",m.status);
    a & make_nvp("latitude",m.latitude);
    a & make_nvp("longitude",m.longitude);
    a & make_nvp("altitude",m.altitude);
    a & make_nvp("position_covariance",m.position_covariance);
    a & make_nvp("position_covariance_type",m.position_covariance_type);
}

} // namespace serialization
} // namespace boost

#endif // SENSOR_MSGS_BOOST_SERIALIZATION_NAVSATFIX_H
