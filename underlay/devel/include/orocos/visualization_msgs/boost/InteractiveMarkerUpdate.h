/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/visualization_msgs/cmake/../msg/InteractiveMarkerUpdate.msg */
#ifndef VISUALIZATION_MSGS_BOOST_SERIALIZATION_INTERACTIVEMARKERUPDATE_H
#define VISUALIZATION_MSGS_BOOST_SERIALIZATION_INTERACTIVEMARKERUPDATE_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <visualization_msgs/InteractiveMarkerUpdate.h>
#include <visualization_msgs/boost/InteractiveMarker.h>
#include <visualization_msgs/boost/InteractiveMarkerPose.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("server_id",m.server_id);
    a & make_nvp("seq_num",m.seq_num);
    a & make_nvp("type",m.type);
    a & make_nvp("markers",m.markers);
    a & make_nvp("poses",m.poses);
    a & make_nvp("erases",m.erases);
}

} // namespace serialization
} // namespace boost

#endif // VISUALIZATION_MSGS_BOOST_SERIALIZATION_INTERACTIVEMARKERUPDATE_H
