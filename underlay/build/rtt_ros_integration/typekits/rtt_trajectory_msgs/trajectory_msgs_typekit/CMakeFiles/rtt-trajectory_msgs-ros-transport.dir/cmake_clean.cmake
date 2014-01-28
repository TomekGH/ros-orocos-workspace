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
  "CMakeFiles/rtt-trajectory_msgs-ros-transport.dir/ros_trajectory_msgs_transport.cpp.o"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/trajectory_msgs/boost/JointTrajectory.h"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/trajectory_msgs/boost/JointTrajectoryPoint.h"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/trajectory_msgs/boost/MultiDOFJointTrajectory.h"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/include/orocos/trajectory_msgs/boost/MultiDOFJointTrajectoryPoint.h"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_trajectory_msgs/types/librtt-trajectory_msgs-ros-transport-gnulinux.pdb"
  "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_trajectory_msgs/types/librtt-trajectory_msgs-ros-transport-gnulinux.so"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/rtt-trajectory_msgs-ros-transport.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
