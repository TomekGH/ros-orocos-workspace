FILE(REMOVE_RECURSE
  "ros_GridCells_typekit_plugin.cpp"
  "ros_MapMetaData_typekit_plugin.cpp"
  "ros_OccupancyGrid_typekit_plugin.cpp"
  "ros_Odometry_typekit_plugin.cpp"
  "ros_Path_typekit_plugin.cpp"
  "ros_GetMapAction_typekit_plugin.cpp"
  "ros_GetMapActionGoal_typekit_plugin.cpp"
  "ros_GetMapActionResult_typekit_plugin.cpp"
  "ros_GetMapActionFeedback_typekit_plugin.cpp"
  "ros_GetMapGoal_typekit_plugin.cpp"
  "ros_GetMapResult_typekit_plugin.cpp"
  "ros_GetMapFeedback_typekit_plugin.cpp"
  "ros_GridCells_transport_plugin.cpp"
  "ros_MapMetaData_transport_plugin.cpp"
  "ros_OccupancyGrid_transport_plugin.cpp"
  "ros_Odometry_transport_plugin.cpp"
  "ros_Path_transport_plugin.cpp"
  "ros_GetMapAction_transport_plugin.cpp"
  "ros_GetMapActionGoal_transport_plugin.cpp"
  "ros_GetMapActionResult_transport_plugin.cpp"
  "ros_GetMapActionFeedback_transport_plugin.cpp"
  "ros_GetMapGoal_transport_plugin.cpp"
  "ros_GetMapResult_transport_plugin.cpp"
  "ros_GetMapFeedback_transport_plugin.cpp"
  "ros_nav_msgs_typekit.cpp"
  "ros_nav_msgs_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/nav_msgs"
  "CMakeFiles/nav_msgs_generate_messages_lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/nav_msgs_generate_messages_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
