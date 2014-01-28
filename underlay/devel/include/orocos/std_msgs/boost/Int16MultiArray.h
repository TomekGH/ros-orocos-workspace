/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/std_msgs/cmake/../msg/Int16MultiArray.msg */
#ifndef STD_MSGS_BOOST_SERIALIZATION_INT16MULTIARRAY_H
#define STD_MSGS_BOOST_SERIALIZATION_INT16MULTIARRAY_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <std_msgs/Int16MultiArray.h>
#include <std_msgs/boost/MultiArrayLayout.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::std_msgs::Int16MultiArray_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("layout",m.layout);
    a & make_nvp("data",m.data);
}

} // namespace serialization
} // namespace boost

#endif // STD_MSGS_BOOST_SERIALIZATION_INT16MULTIARRAY_H
