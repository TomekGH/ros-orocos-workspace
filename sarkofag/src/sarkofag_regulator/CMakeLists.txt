cmake_minimum_required(VERSION 2.8.3)

add_definitions(-DOROCOS_TARGET=gnulinux)

project(sarkofag_regulator)

find_package(catkin REQUIRED COMPONENTS rtt_ros)

find_package(OROCOS-RTT REQUIRED)
include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

catkin_package(
  DEPENDS rtt 
  CATKIN_DEPENDS rtt_ros 
)

add_definitions(-DRTT_COMPONENT)
orocos_component(${PROJECT_NAME} src/SarkofagRegulator.cpp src/Regulator.cpp)
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})

orocos_generate_package()

