FILE(REMOVE_RECURSE
  "ros_ImageMarker_typekit_plugin.cpp"
  "ros_InteractiveMarker_typekit_plugin.cpp"
  "ros_InteractiveMarkerControl_typekit_plugin.cpp"
  "ros_InteractiveMarkerFeedback_typekit_plugin.cpp"
  "ros_InteractiveMarkerInit_typekit_plugin.cpp"
  "ros_InteractiveMarkerPose_typekit_plugin.cpp"
  "ros_InteractiveMarkerUpdate_typekit_plugin.cpp"
  "ros_MarkerArray_typekit_plugin.cpp"
  "ros_Marker_typekit_plugin.cpp"
  "ros_MenuEntry_typekit_plugin.cpp"
  "ros_ImageMarker_transport_plugin.cpp"
  "ros_InteractiveMarker_transport_plugin.cpp"
  "ros_InteractiveMarkerControl_transport_plugin.cpp"
  "ros_InteractiveMarkerFeedback_transport_plugin.cpp"
  "ros_InteractiveMarkerInit_transport_plugin.cpp"
  "ros_InteractiveMarkerPose_transport_plugin.cpp"
  "ros_InteractiveMarkerUpdate_transport_plugin.cpp"
  "ros_MarkerArray_transport_plugin.cpp"
  "ros_Marker_transport_plugin.cpp"
  "ros_MenuEntry_transport_plugin.cpp"
  "ros_visualization_msgs_typekit.cpp"
  "ros_visualization_msgs_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/visualization_msgs"
  "CMakeFiles/visualization_msgs_generate_messages_py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/visualization_msgs_generate_messages_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
