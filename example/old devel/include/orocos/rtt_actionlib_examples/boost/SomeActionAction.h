/* Auto-generated by create_boost_header.py for file /home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionAction.msg */
#ifndef RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONACTION_H
#define RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONACTION_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <rtt_actionlib_examples/SomeActionAction.h>
#include <rtt_actionlib_examples/boost/SomeActionActionGoal.h>
#include <rtt_actionlib_examples/boost/SomeActionActionResult.h>
#include <rtt_actionlib_examples/boost/SomeActionActionFeedback.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::rtt_actionlib_examples::SomeActionAction_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("action_goal",m.action_goal);
    a & make_nvp("action_result",m.action_result);
    a & make_nvp("action_feedback",m.action_feedback);
}

} // namespace serialization
} // namespace boost

#endif // RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONACTION_H

