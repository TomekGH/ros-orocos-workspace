/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/sensor_msgs/cmake/../msg/JoyFeedbackArray.msg */
#ifndef SENSOR_MSGS_BOOST_SERIALIZATION_JOYFEEDBACKARRAY_H
#define SENSOR_MSGS_BOOST_SERIALIZATION_JOYFEEDBACKARRAY_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <sensor_msgs/JoyFeedbackArray.h>
#include <sensor_msgs/boost/JoyFeedback.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::sensor_msgs::JoyFeedbackArray_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("array",m.array);
}

} // namespace serialization
} // namespace boost

#endif // SENSOR_MSGS_BOOST_SERIALIZATION_JOYFEEDBACKARRAY_H
