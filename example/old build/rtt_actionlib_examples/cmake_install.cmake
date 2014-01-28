# Install script for directory: /home/tpokorsk/ros-orocos-workspace/example/src/rtt_actionlib_examples

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/tpokorsk/ros-orocos-workspace/example/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_actionlib_examples/action" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/example/src/rtt_actionlib_examples/action/SomeAction.action")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_actionlib_examples/msg" TYPE FILE FILES
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionAction.msg"
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionGoal.msg"
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionResult.msg"
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionActionFeedback.msg"
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionGoal.msg"
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionResult.msg"
    "/home/tpokorsk/ros-orocos-workspace/example/devel/share/rtt_actionlib_examples/msg/SomeActionFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_actionlib_examples/cmake" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples/catkin_generated/installspace/rtt_actionlib_examples-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/include/rtt_actionlib_examples")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/share/common-lisp/ros/rtt_actionlib_examples")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/tpokorsk/ros-orocos-workspace/example/devel/lib/python2.7/dist-packages/rtt_actionlib_examples")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/lib/python2.7/dist-packages/rtt_actionlib_examples")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/example/install/lib:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so"
         OLD_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/example/install/lib:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-typekit-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/example/install/lib:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so"
         OLD_RPATH "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/example/install/lib:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/example/install/lib/orocos/gnulinux/rtt_actionlib_examples/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_actionlib_examples/types/librtt-rtt_actionlib_examples-ros-transport-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/orocos" TYPE DIRECTORY FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/include/orocos/rtt_actionlib_examples")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples/catkin_generated/installspace/rtt_actionlib_examples.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_actionlib_examples/cmake" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples/catkin_generated/installspace/rtt_actionlib_examples-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_actionlib_examples/cmake" TYPE FILE FILES
    "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples/catkin_generated/installspace/rtt_actionlib_examplesConfig.cmake"
    "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples/catkin_generated/installspace/rtt_actionlib_examplesConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_actionlib_examples" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/example/src/rtt_actionlib_examples/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux"
         RPATH "/home/tpokorsk/ros-orocos-workspace/example/install/bin:/home/tpokorsk/ros-orocos-workspace/example/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib_msgs/types")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/tpokorsk/ros-orocos-workspace/example/devel/lib/rtt_actionlib_examples/test_server-gnulinux")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux"
         OLD_RPATH "/home/tpokorsk/ros-orocos-workspace/example/build/rtt_actionlib_examples:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib_msgs/types:::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/example/install/bin:/home/tpokorsk/ros-orocos-workspace/example/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/plugins:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/ocl/types:/home/tpokorsk/ros-orocos-workspace/underlay_isolated/install_isolated/lib/orocos/gnulinux/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib_msgs/types")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/test_server-gnulinux")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

