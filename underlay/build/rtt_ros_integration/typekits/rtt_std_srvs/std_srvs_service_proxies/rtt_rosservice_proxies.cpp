
#include <rtt/RTT.hpp>
#include <rtt/plugin/ServicePlugin.hpp>
#include <rtt/internal/GlobalService.hpp>

#include <rtt_rosservice/rtt_rosservice_registry_service.h>
#include <rtt_rosservice/rtt_rosservice_proxy.h>

////////////////////////////////////////////////////////////////////////////////
#include <std_srvs/Empty.h>

////////////////////////////////////////////////////////////////////////////////

bool registerROSServiceProxies() {
  // Get the ros service registry service
  ROSServiceRegistryServicePtr rosservice_registry = ROSServiceRegistryService::Instance();
  if(!rosservice_registry) {
    return false;
  }

  // Get the factory registration operation
  RTT::OperationCaller<bool(ROSServiceProxyFactoryBase*)> register_service_factory = 
    rosservice_registry->getOperation("registerServiceFactory");

  // Make sure the registration operation is ready
  if(!register_service_factory.ready()) {
    return false;
  }

  // True at the end if all factories have been registered
  bool success = true;

  //////////////////////////////////////////////////////////////////////////////
  //success = success && register_service_factory(new ROSServiceProxyFactory<std_srvs::Empty>("std_srvs/Empty"));
    success = success && register_service_factory(new ROSServiceProxyFactory<std_srvs::Empty>("std_srvs/Empty"));

  //////////////////////////////////////////////////////////////////////////////

  return success;
}

extern "C" {
  bool loadRTTPlugin(RTT::TaskContext* c) { return registerROSServiceProxies(); }
  std::string getRTTPluginName () { return "rtt_std_srvs_ros_service_proxies"; }
  std::string getRTTTargetName () { return OROCOS_TARGET_NAME; }
}
