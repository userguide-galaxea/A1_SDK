// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/ArmBasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__STRUCT_HPP_

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
// Member 'jpos'
#include "mobiman_msgs/msg/detail/joint_position__struct.hpp"
// Member 'jspeed'
#include "mobiman_msgs/msg/detail/joint_speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__ArmBasicCommand __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__ArmBasicCommand __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmBasicCommand_
{
  using Type = ArmBasicCommand_<ContainerAllocator>;

  explicit ArmBasicCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    jpos(_init),
    jspeed(_init)
  {
    (void)_init;
  }

  explicit ArmBasicCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    jpos(_alloc, _init),
    jspeed(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _jpos_type =
    mobiman_msgs::msg::JointPosition_<ContainerAllocator>;
  _jpos_type jpos;
  using _jspeed_type =
    mobiman_msgs::msg::JointSpeed_<ContainerAllocator>;
  _jspeed_type jspeed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__jpos(
    const mobiman_msgs::msg::JointPosition_<ContainerAllocator> & _arg)
  {
    this->jpos = _arg;
    return *this;
  }
  Type & set__jspeed(
    const mobiman_msgs::msg::JointSpeed_<ContainerAllocator> & _arg)
  {
    this->jspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__ArmBasicCommand
    std::shared_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__ArmBasicCommand
    std::shared_ptr<mobiman_msgs::msg::ArmBasicCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmBasicCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->jpos != other.jpos) {
      return false;
    }
    if (this->jspeed != other.jspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmBasicCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmBasicCommand_

// alias to use template instance with default allocator
using ArmBasicCommand =
  mobiman_msgs::msg::ArmBasicCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__STRUCT_HPP_
