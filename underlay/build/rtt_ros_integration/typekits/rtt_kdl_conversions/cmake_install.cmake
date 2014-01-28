# Install script for directory: /home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/typekits/rtt_kdl_conversions

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
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_kdl_conversions/types:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_kdl_conversions/types:/opt/ros/hydro/lib")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so"
         OLD_RPATH "/opt/ros/hydro/lib:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_kdl_conversions/types:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_kdl_conversions/types:/opt/ros/hydro/lib")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_kdl_conversions/types/libkdlconversions-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_kdl_conversions/rtt_kdl_conversions-gnulinux.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_kdl_conversions/catkin_generated/installspace/rtt_kdl_conversions.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_kdl_conversions/cmake" TYPE FILE FILES
    "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_kdl_conversions/catkin_generated/installspace/rtt_kdl_conversionsConfig.cmake"
    "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/typekits/rtt_kdl_conversions/catkin_generated/installspace/rtt_kdl_conversionsConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_kdl_conversions" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/typekits/rtt_kdl_conversions/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

