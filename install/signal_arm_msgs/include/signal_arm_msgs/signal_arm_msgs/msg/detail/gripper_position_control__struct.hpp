// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from signal_arm_msgs:msg/GripperPositionControl.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__STRUCT_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__signal_arm_msgs__msg__GripperPositionControl __attribute__((deprecated))
#else
# define DEPRECATED__signal_arm_msgs__msg__GripperPositionControl __declspec(deprecated)
#endif

namespace signal_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperPositionControl_
{
  using Type = GripperPositionControl_<ContainerAllocator>;

  explicit GripperPositionControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_stroke = 0.0f;
    }
  }

  explicit GripperPositionControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_stroke = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gripper_stroke_type =
    float;
  _gripper_stroke_type gripper_stroke;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gripper_stroke(
    const float & _arg)
  {
    this->gripper_stroke = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_arm_msgs__msg__GripperPositionControl
    std::shared_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_arm_msgs__msg__GripperPositionControl
    std::shared_ptr<signal_arm_msgs::msg::GripperPositionControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperPositionControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gripper_stroke != other.gripper_stroke) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperPositionControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperPositionControl_

// alias to use template instance with default allocator
using GripperPositionControl =
  signal_arm_msgs::msg::GripperPositionControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__STRUCT_HPP_
