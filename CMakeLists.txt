cmake_minimum_required(VERSION 2.8.3)
project(clem_planners)

find_package(catkin REQUIRED COMPONENTS
  nav_core
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_library(clem_global_planner_lib src/clem_global.cpp)
