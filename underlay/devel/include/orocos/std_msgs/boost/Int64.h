/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/std_msgs/cmake/../msg/Int64.msg */
#ifndef STD_MSGS_BOOST_SERIALIZATION_INT64_H
#define STD_MSGS_BOOST_SERIALIZATION_INT64_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <std_msgs/Int64.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::std_msgs::Int64_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("data",m.data);
}

} // namespace serialization
} // namespace boost

#endif // STD_MSGS_BOOST_SERIALIZATION_INT64_H

