/* Auto-generated by create_boost_header.py for file /home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg */
#ifndef RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONRESULT_H
#define RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONRESULT_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <rtt_actionlib_examples/SomeActionResult.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::rtt_actionlib_examples::SomeActionResult_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("actual_delay_time",m.actual_delay_time);
}

} // namespace serialization
} // namespace boost

#endif // RTT_ACTIONLIB_EXAMPLES_BOOST_SERIALIZATION_SOMEACTIONRESULT_H

