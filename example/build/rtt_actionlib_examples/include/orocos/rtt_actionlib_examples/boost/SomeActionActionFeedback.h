/* Auto-generated by create_boost_header.py for file /home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg */
#ifndef RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONACTIONFEEDBACK_H
#define RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONACTIONFEEDBACK_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <rtt_actionlib_examples/SomeActionActionFeedback.h>
#include <ros/common.h>
#if ROS_VERSION_MINIMUM(1,4,0)
#include <std_msgs/Header.h>
#else
#include <roslib/Header.h>
#endif
#include <actionlib_msgs/boost/GoalStatus.h>
#include <rtt_actionlib_examples/boost/SomeActionFeedback.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::rtt_actionlib_examples::SomeActionActionFeedback_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("header",m.header);
    a & make_nvp("status",m.status);
    a & make_nvp("feedback",m.feedback);
}

} // namespace serialization
} // namespace boost

#endif // RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONACTIONFEEDBACK_H
