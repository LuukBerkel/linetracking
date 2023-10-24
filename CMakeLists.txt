cmake_minimum_required(VERSION 3.5)
project(line_tracking)

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
find_package(yaml-cpp REQUIRED)

add_executable(compressed_viewer src/compress_viewer/compressed_viewer.cpp)
ament_target_dependencies(compressed_viewer  rclcpp sensor_msgs geometry_msgs cv_bridge)
target_link_libraries(compressed_viewer opencv_core opencv_imgproc opencv_highgui)


include_directories(src/line_detection/include)

# Create the ROS node executable
add_executable(line_detection src/line_detection/line_detection.cpp src/line_detection/param_parser.cpp)
ament_target_dependencies(line_detection  rclcpp sensor_msgs geometry_msgs cv_bridge)
target_link_libraries(line_detection yaml-cpp opencv_core opencv_imgproc opencv_highgui)

install(TARGETS
  compressed_viewer
  line_detection
  DESTINATION lib/${PROJECT_NAME})
ament_package()