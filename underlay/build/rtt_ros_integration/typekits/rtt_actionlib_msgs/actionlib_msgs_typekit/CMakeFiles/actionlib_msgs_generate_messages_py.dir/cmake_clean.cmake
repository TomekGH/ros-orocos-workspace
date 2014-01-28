FILE(REMOVE_RECURSE
  "ros_GoalID_typekit_plugin.cpp"
  "ros_GoalStatus_typekit_plugin.cpp"
  "ros_GoalStatusArray_typekit_plugin.cpp"
  "ros_GoalID_transport_plugin.cpp"
  "ros_GoalStatus_transport_plugin.cpp"
  "ros_GoalStatusArray_transport_plugin.cpp"
  "ros_actionlib_msgs_typekit.cpp"
  "ros_actionlib_msgs_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/actionlib_msgs"
  "CMakeFiles/actionlib_msgs_generate_messages_py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/actionlib_msgs_generate_messages_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
