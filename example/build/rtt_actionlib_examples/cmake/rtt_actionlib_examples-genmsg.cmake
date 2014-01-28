# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "rtt_actionlib_examples: 7 messages, 0 services")

set(MSG_I_FLAGS "-Irtt_actionlib_examples:/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg;-Iactionlib_msgs:/opt/ros/hydro/share/actionlib_msgs/cmake/../msg;-Istd_msgs:/opt/ros/groovy/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(rtt_actionlib_examples_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_cpp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionAction.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
)

### Generating Services

### Generating Module File
_generate_module_cpp(rtt_actionlib_examples
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(rtt_actionlib_examples_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(rtt_actionlib_examples_generate_messages rtt_actionlib_examples_generate_messages_cpp)

# target for backward compatibility
add_custom_target(rtt_actionlib_examples_gencpp)
add_dependencies(rtt_actionlib_examples_gencpp rtt_actionlib_examples_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rtt_actionlib_examples_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_lisp(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionAction.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
)

### Generating Services

### Generating Module File
_generate_module_lisp(rtt_actionlib_examples
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(rtt_actionlib_examples_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(rtt_actionlib_examples_generate_messages rtt_actionlib_examples_generate_messages_lisp)

# target for backward compatibility
add_custom_target(rtt_actionlib_examples_genlisp)
add_dependencies(rtt_actionlib_examples_genlisp rtt_actionlib_examples_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rtt_actionlib_examples_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)
_generate_msg_py(rtt_actionlib_examples
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionAction.msg"
  "${MSG_I_FLAGS}"
  "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalStatus.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg;/opt/ros/hydro/share/actionlib_msgs/cmake/../msg/GoalID.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg;/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg;/opt/ros/groovy/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
)

### Generating Services

### Generating Module File
_generate_module_py(rtt_actionlib_examples
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(rtt_actionlib_examples_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(rtt_actionlib_examples_generate_messages rtt_actionlib_examples_generate_messages_py)

# target for backward compatibility
add_custom_target(rtt_actionlib_examples_genpy)
add_dependencies(rtt_actionlib_examples_genpy rtt_actionlib_examples_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rtt_actionlib_examples_generate_messages_py)


debug_message(2 "rtt_actionlib_examples: Iflags=${MSG_I_FLAGS}")


if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rtt_actionlib_examples
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(rtt_actionlib_examples_generate_messages_cpp actionlib_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rtt_actionlib_examples
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(rtt_actionlib_examples_generate_messages_lisp actionlib_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rtt_actionlib_examples
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(rtt_actionlib_examples_generate_messages_py actionlib_msgs_generate_messages_py)
