// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from signal_arm_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'data'
#include "signal_arm_msgs/msg/detail/status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__signal_arm_msgs__msg__StatusStamped __attribute__((deprecated))
#else
# define DEPRECATED__signal_arm_msgs__msg__StatusStamped __declspec(deprecated)
#endif

namespace signal_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusStamped_
{
  using Type = StatusStamped_<ContainerAllocator>;

  explicit StatusStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    data(_init)
  {
    (void)_init;
  }

  explicit StatusStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    signal_arm_msgs::msg::Status_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const signal_arm_msgs::msg::Status_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_arm_msgs::msg::StatusStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_arm_msgs::msg::StatusStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::StatusStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::StatusStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_arm_msgs__msg__StatusStamped
    std::shared_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_arm_msgs__msg__StatusStamped
    std::shared_ptr<signal_arm_msgs::msg::StatusStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusStamped_

// alias to use template instance with default allocator
using StatusStamped =
  signal_arm_msgs::msg::StatusStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_HPP_
