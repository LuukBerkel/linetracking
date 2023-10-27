// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_BLOB__STRUCT_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_BLOB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arrays'
#include "line_tracking/msg/detail/point_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__line_tracking__msg__PointBlob __attribute__((deprecated))
#else
# define DEPRECATED__line_tracking__msg__PointBlob __declspec(deprecated)
#endif

namespace line_tracking
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointBlob_
{
  using Type = PointBlob_<ContainerAllocator>;

  explicit PointBlob_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PointBlob_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _arrays_type =
    std::vector<line_tracking::msg::PointArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<line_tracking::msg::PointArray_<ContainerAllocator>>>;
  _arrays_type arrays;

  // setters for named parameter idiom
  Type & set__arrays(
    const std::vector<line_tracking::msg::PointArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<line_tracking::msg::PointArray_<ContainerAllocator>>> & _arg)
  {
    this->arrays = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    line_tracking::msg::PointBlob_<ContainerAllocator> *;
  using ConstRawPtr =
    const line_tracking::msg::PointBlob_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<line_tracking::msg::PointBlob_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<line_tracking::msg::PointBlob_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      line_tracking::msg::PointBlob_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<line_tracking::msg::PointBlob_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      line_tracking::msg::PointBlob_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<line_tracking::msg::PointBlob_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<line_tracking::msg::PointBlob_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<line_tracking::msg::PointBlob_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__line_tracking__msg__PointBlob
    std::shared_ptr<line_tracking::msg::PointBlob_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__line_tracking__msg__PointBlob
    std::shared_ptr<line_tracking::msg::PointBlob_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointBlob_ & other) const
  {
    if (this->arrays != other.arrays) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointBlob_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointBlob_

// alias to use template instance with default allocator
using PointBlob =
  line_tracking::msg::PointBlob_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace line_tracking

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_BLOB__STRUCT_HPP_
