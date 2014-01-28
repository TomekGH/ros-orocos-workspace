# Install script for directory: /home/tpokorsk/ros-orocos-workspace/underlay/devel/share/rtt_roscomm/src/templates/service

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
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_nav_msgs/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_nav_msgs/plugins:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_std_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_geometry_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so"
         OLD_RPATH "/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_std_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_geometry_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_nav_msgs/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_nav_msgs/plugins:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_std_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_geometry_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_actionlib_msgs/types:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_nav_msgs/plugins/librtt_nav_msgs_rosservice_proxies-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
