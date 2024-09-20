// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__JointPosition __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__JointPosition __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointPosition_
{
  using Type = JointPosition_<ContainerAllocator>;

  explicit JointPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pos_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _pos_type pos;

  // setters for named parameter idiom
  Type & set__pos(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::JointPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::JointPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::JointPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::JointPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__JointPosition
    std::shared_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__JointPosition
    std::shared_ptr<mobiman_msgs::msg::JointPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointPosition_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointPosition_

// alias to use template instance with default allocator
using JointPosition =
  mobiman_msgs::msg::JointPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION__STRUCT_HPP_