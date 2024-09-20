// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobiman_msgs:msg/Button3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__STRUCT_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'button_semantics'
#include "mobiman_msgs/msg/detail/button_semantics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobiman_msgs__msg__Button3d __attribute__((deprecated))
#else
# define DEPRECATED__mobiman_msgs__msg__Button3d __declspec(deprecated)
#endif

namespace mobiman_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Button3d_
{
  using Type = Button3d_<ContainerAllocator>;

  explicit Button3d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    button_semantics(_init)
  {
    (void)_init;
  }

  explicit Button3d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    button_semantics(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _button_semantics_type =
    mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator>;
  _button_semantics_type button_semantics;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__button_semantics(
    const mobiman_msgs::msg::ButtonSemantics_<ContainerAllocator> & _arg)
  {
    this->button_semantics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobiman_msgs::msg::Button3d_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobiman_msgs::msg::Button3d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::Button3d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobiman_msgs::msg::Button3d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobiman_msgs__msg__Button3d
    std::shared_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobiman_msgs__msg__Button3d
    std::shared_ptr<mobiman_msgs::msg::Button3d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Button3d_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->button_semantics != other.button_semantics) {
      return false;
    }
    return true;
  }
  bool operator!=(const Button3d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Button3d_

// alias to use template instance with default allocator
using Button3d =
  mobiman_msgs::msg::Button3d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__STRUCT_HPP_
