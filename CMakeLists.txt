cmake_minimum_required(VERSION 3.5)
project(turtle3_control)

#Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(cv_bridge REQUIRED)

add_executable(compressed_viewer src/compressed_viewer.cpp)
ament_target_dependencies(compressed_viewer rclcpp sensor_msgs geometry_msgs cv_bridge)

target_link_libraries(compressed_viewer opencv_core opencv_imgproc opencv_highgui)

install(TARGETS
  compressed_viewer
  DESTINATION lib/${PROJECT_NAME})
ament_package()