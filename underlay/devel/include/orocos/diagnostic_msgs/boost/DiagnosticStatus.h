/* Auto-generated by create_boost_header.py for file /opt/ros/hydro/share/diagnostic_msgs/cmake/../msg/DiagnosticStatus.msg */
#ifndef DIAGNOSTIC_MSGS_BOOST_SERIALIZATION_DIAGNOSTICSTATUS_H
#define DIAGNOSTIC_MSGS_BOOST_SERIALIZATION_DIAGNOSTICSTATUS_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <diagnostic_msgs/DiagnosticStatus.h>
#include <diagnostic_msgs/boost/KeyValue.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("level",m.level);
    a & make_nvp("name",m.name);
    a & make_nvp("message",m.message);
    a & make_nvp("hardware_id",m.hardware_id);
    a & make_nvp("values",m.values);
}

} // namespace serialization
} // namespace boost

#endif // DIAGNOSTIC_MSGS_BOOST_SERIALIZATION_DIAGNOSTICSTATUS_H

