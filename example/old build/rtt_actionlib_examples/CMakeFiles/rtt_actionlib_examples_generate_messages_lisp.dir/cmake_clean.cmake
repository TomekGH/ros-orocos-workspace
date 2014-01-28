FILE(REMOVE_RECURSE
  "src/orocos/types/ros_SomeActionAction_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionActionGoal_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionActionResult_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionActionFeedback_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionGoal_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionResult_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionFeedback_typekit_plugin.cpp"
  "src/orocos/types/ros_SomeActionAction_transport_plugin.cpp"
  "src/orocos/types/ros_SomeActionActionGoal_transport_plugin.cpp"
  "src/orocos/types/ros_SomeActionActionResult_transport_plugin.cpp"
  "src/orocos/types/ros_SomeActionActionFeedback_transport_plugin.cpp"
  "src/orocos/types/ros_SomeActionGoal_transport_plugin.cpp"
  "src/orocos/types/ros_SomeActionResult_transport_plugin.cpp"
  "src/orocos/types/ros_SomeActionFeedback_transport_plugin.cpp"
  "src/orocos/types/ros_rtt_actionlib_examples_typekit.cpp"
  "src/orocos/types/ros_rtt_actionlib_examples_transport.cpp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/orocos/rtt_actionlib_examples"
  "CMakeFiles/rtt_actionlib_examples_generate_messages_lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionResult.lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionActionResult.lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionActionGoal.lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionGoal.lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionFeedback.lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionActionFeedback.lisp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples/msg/SomeActionAction.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rtt_actionlib_examples_generate_messages_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
