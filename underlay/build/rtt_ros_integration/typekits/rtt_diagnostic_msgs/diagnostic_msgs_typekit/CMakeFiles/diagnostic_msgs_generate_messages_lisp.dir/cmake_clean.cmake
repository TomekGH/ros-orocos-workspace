FILE(REMOVE_RECURSE
  "ros_DiagnosticArray_typekit_plugin.cpp"
  "ros_DiagnosticStatus_typekit_plugin.cpp"
  "ros_KeyValue_typekit_plugin.cpp"
  "ros_DiagnosticArray_transport_plugin.cpp"
  "ros_DiagnosticStatus_transport_plugin.cpp"
  "ros_KeyValue_transport_plugin.cpp"
  "ros_diagnostic_msgs_typekit.cpp"
  "ros_diagnostic_msgs_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/diagnostic_msgs"
  "CMakeFiles/diagnostic_msgs_generate_messages_lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/diagnostic_msgs_generate_messages_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
