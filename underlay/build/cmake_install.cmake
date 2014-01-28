# Install script for directory: /home/tpokorsk/ros-orocos-workspace/underlay/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/tpokorsk/ros-orocos-workspace/underlay/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
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
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/.catkin")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/.catkin")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/_setup_util.py")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE PROGRAM FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/_setup_util.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/env.sh")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE PROGRAM FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/env.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/setup.bash")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/setup.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/setup.sh")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/setup.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/setup.zsh")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/setup.zsh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/home/tpokorsk/ros-orocos-workspace/underlay/install/.rosinstall")
FILE(INSTALL DESTINATION "/home/tpokorsk/ros-orocos-workspace/underlay/install" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/catkin_generated/installspace/.rosinstall")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/catkin/profile.d" TYPE FILE FILES "/opt/ros/hydro/share/catkin/cmake/env-hooks/05.catkin_make_isolated.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/gtest/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_common_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_kdl_conversions/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_ros/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_ros_comm/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_ros_integration/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/tests/rtt_ros_tests/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_rosnode/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_rospack/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_roscomm/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/tests/rtt_rospack_tests/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_rosparam/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_std_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_actionlib_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_actionlib/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_diagnostic_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_geometry_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_nav_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/tests/rtt_roscomm_tests/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_rosgraph_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_sensor_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_shape_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_std_srvs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_stereo_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_tf/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_trajectory_msgs/cmake_install.cmake")
  INCLUDE("/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_visualization_msgs/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/tpokorsk/ros-orocos-workspace/underlay/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/tpokorsk/ros-orocos-workspace/underlay/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
