FILE(REMOVE_RECURSE
  "ros_JointTrajectory_typekit_plugin.cpp"
  "ros_JointTrajectoryPoint_typekit_plugin.cpp"
  "ros_MultiDOFJointTrajectory_typekit_plugin.cpp"
  "ros_MultiDOFJointTrajectoryPoint_typekit_plugin.cpp"
  "ros_JointTrajectory_transport_plugin.cpp"
  "ros_JointTrajectoryPoint_transport_plugin.cpp"
  "ros_MultiDOFJointTrajectory_transport_plugin.cpp"
  "ros_MultiDOFJointTrajectoryPoint_transport_plugin.cpp"
  "ros_trajectory_msgs_typekit.cpp"
  "ros_trajectory_msgs_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/trajectory_msgs"
  "CMakeFiles/trajectory_msgs_generate_messages_py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/trajectory_msgs_generate_messages_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
