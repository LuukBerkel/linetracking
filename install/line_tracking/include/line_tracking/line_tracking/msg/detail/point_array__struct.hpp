// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from line_tracking:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__STRUCT_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__line_tracking__msg__PointArray __attribute__((deprecated))
#else
# define DEPRECATED__line_tracking__msg__PointArray __declspec(deprecated)
#endif

namespace line_tracking
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointArray_
{
  using Type = PointArray_<ContainerAllocator>;

  explicit PointArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PointArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    line_tracking::msg::PointArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const line_tracking::msg::PointArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<line_tracking::msg::PointArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<line_tracking::msg::PointArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      line_tracking::msg::PointArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<line_tracking::msg::PointArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      line_tracking::msg::PointArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<line_tracking::msg::PointArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<line_tracking::msg::PointArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<line_tracking::msg::PointArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__line_tracking__msg__PointArray
    std::shared_ptr<line_tracking::msg::PointArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__line_tracking__msg__PointArray
    std::shared_ptr<line_tracking::msg::PointArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointArray_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointArray_

// alias to use template instance with default allocator
using PointArray =
  line_tracking::msg::PointArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace line_tracking

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__STRUCT_HPP_
