# Install script for directory: /home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_roscomm/catkin_generated/installspace/rtt_roscomm.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_roscomm/cmake" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_roscomm/catkin_generated/installspace/GenerateRTTROSCommPackage.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_roscomm/cmake" TYPE FILE FILES
    "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_roscomm/catkin_generated/installspace/rtt_roscommConfig.cmake"
    "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_roscomm/catkin_generated/installspace/rtt_roscommConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_roscomm" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so"
         OLD_RPATH "/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rostopic-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/opt/ros/hydro/lib")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so"
         OLD_RPATH "/opt/ros/hydro/lib:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/opt/ros/hydro/lib")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice_registry-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so"
         OLD_RPATH "/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/plugins:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/plugins:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/plugins/librtt_rosservice-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so"
         RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/types:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types" TYPE SHARED_LIBRARY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so")
    FILE(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so"
         OLD_RPATH "/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tpokorsk/ros-orocos-workspace/underlay/install/lib:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/types:/home/tpokorsk/ros-orocos-workspace/underlay/install/lib/orocos/gnulinux/rtt_roscomm/types:/opt/ros/hydro/lib:/home/tpokorsk/ros-orocos-workspace/underlay/devel/lib/orocos/gnulinux/rtt_ros/plugins")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/orocos/gnulinux/rtt_roscomm/types/librtt-ros-primitives-typekit-gnulinux.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tpokorsk/ros-orocos-workspace/underlay/build/rtt_ros_integration/rtt_roscomm/rtt_roscomm-gnulinux.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rtt_roscomm" TYPE PROGRAM FILES "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/scripts/create_rtt_pkg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/orocos" TYPE DIRECTORY FILES
    "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/include/rtt_rostopic"
    "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/include/rtt_rosservice"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_roscomm/cmake" TYPE PROGRAM FILES "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/cmake/create_boost_header.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_roscomm/src" TYPE DIRECTORY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/src/templates")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rtt_roscomm" TYPE DIRECTORY FILES "/home/tpokorsk/ros-orocos-workspace/underlay/src/rtt_ros_integration/rtt_roscomm/rtt_roscomm_pkg_template")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

