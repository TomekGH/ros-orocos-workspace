cmake_minimum_required(VERSION 2.8.3)

add_definitions(-DOROCOS_TARGET=gnulinux)

project(sarkofag_servo)

find_package(catkin REQUIRED COMPONENTS rtt_ros roscpp rospy std_msgs genmsg)

find_package(OROCOS-RTT REQUIRED)
include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

catkin_package(
  DEPENDS rtt 
  CATKIN_DEPENDS rtt_ros 
)

add_definitions(-DRTT_COMPONENT)
orocos_component(${PROJECT_NAME} src/SarkofagServo.cpp src/hi_moxa.cpp src/nf/nfv2.c src/serialcomm/serialcomm.cpp src/Regulator.cpp)
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})

orocos_generate_package()

install(FILES 
  sarkofag.launch 
  sarkofag.ops 
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})


