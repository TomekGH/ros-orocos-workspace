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
  "CMakeFiles/rtt_actionlib_examples_generate_messages_cpp"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionResult.h"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionActionResult.h"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionActionGoal.h"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionGoal.h"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionFeedback.h"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionActionFeedback.h"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples/SomeActionAction.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rtt_actionlib_examples_generate_messages_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
