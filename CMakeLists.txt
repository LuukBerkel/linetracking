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
find_package(GSL REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED) 

# generating ros2 custom messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/PointBlob.msg"
  "msg/PointArray.msg"
  DEPENDENCIES std_msgs
  DEPENDENCIES geometry_msgs
)
ament_export_dependencies(rosidl_default_runtime)

# dependencies for the compressed viewer
add_executable(compressed_viewer src/compress_viewer/compressed_viewer.cpp)
ament_target_dependencies(compressed_viewer  rclcpp sensor_msgs geometry_msgs cv_bridge)
target_link_libraries(compressed_viewer opencv_core opencv_imgproc opencv_highgui)

# dependencies for the line detection
include_directories(src/line_detection/include)
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
add_executable(line_detection src/line_detection/line_detection.cpp src/line_detection/param_parser.cpp src/line_detection/vision_process.cpp)
ament_target_dependencies(line_detection rclcpp sensor_msgs geometry_msgs cv_bridge)
target_link_libraries(line_detection gsl yaml-cpp opencv_core opencv_imgproc opencv_highgui "${cpp_typesupport_target}")

# dependencies for lane follower
include_directories(src/lane_follower/include)
add_executable(lane_follower src/lane_follower/lane_follower.cpp src/lane_follower/lane_math.cpp)
ament_target_dependencies(lane_follower rclcpp sensor_msgs geometry_msgs)
target_link_libraries(lane_follower "${cpp_typesupport_target}")

install(TARGETS
  compressed_viewer
  line_detection
  lane_follower
  DESTINATION lib/${PROJECT_NAME})
ament_package()