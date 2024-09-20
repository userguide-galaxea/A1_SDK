// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/Multiplier.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MULTIPLIER__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__MULTIPLIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__Multiplier __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__Multiplier __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Multiplier_
{
  using Type = Multiplier_<ContainerAllocator>;

  explicit Multiplier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->penalty = 0.0f;
    }
  }

  explicit Multiplier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->penalty = 0.0f;
    }
  }

  // field types and members
  using _time_type =
    float;
  _time_type time;
  using _penalty_type =
    float;
  _penalty_type penalty;
  using _lagrangian_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _lagrangian_type lagrangian;

  // setters for named parameter idiom
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__penalty(
    const float & _arg)
  {
    this->penalty = _arg;
    return *this;
  }
  Type & set__lagrangian(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->lagrangian = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::Multiplier_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::Multiplier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::Multiplier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::Multiplier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__Multiplier
    std::shared_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__Multiplier
    std::shared_ptr<ocs2_msgs::msg::Multiplier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Multiplier_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->penalty != other.penalty) {
      return false;
    }
    if (this->lagrangian != other.lagrangian) {
      return false;
    }
    return true;
  }
  bool operator!=(const Multiplier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Multiplier_

// alias to use template instance with default allocator
using Multiplier =
  ocs2_msgs::msg::Multiplier_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MULTIPLIER__STRUCT_HPP_
