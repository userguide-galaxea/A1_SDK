// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from signal_arm_msgs:msg/GripperJointCommand.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__STRUCT_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__signal_arm_msgs__msg__GripperJointCommand __attribute__((deprecated))
#else
# define DEPRECATED__signal_arm_msgs__msg__GripperJointCommand __declspec(deprecated)
#endif

namespace signal_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperJointCommand_
{
  using Type = GripperJointCommand_<ContainerAllocator>;

  explicit GripperJointCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_force = 0.0f;
    }
  }

  explicit GripperJointCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_force = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gripper_force_type =
    float;
  _gripper_force_type gripper_force;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gripper_force(
    const float & _arg)
  {
    this->gripper_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__signal_arm_msgs__msg__GripperJointCommand
    std::shared_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__signal_arm_msgs__msg__GripperJointCommand
    std::shared_ptr<signal_arm_msgs::msg::GripperJointCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperJointCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gripper_force != other.gripper_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperJointCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperJointCommand_

// alias to use template instance with default allocator
using GripperJointCommand =
  signal_arm_msgs::msg::GripperJointCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__STRUCT_HPP_
