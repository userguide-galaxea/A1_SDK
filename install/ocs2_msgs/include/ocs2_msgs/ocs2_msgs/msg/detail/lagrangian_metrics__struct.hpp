// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/LagrangianMetrics.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__LagrangianMetrics __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__LagrangianMetrics __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LagrangianMetrics_
{
  using Type = LagrangianMetrics_<ContainerAllocator>;

  explicit LagrangianMetrics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0f;
      this->penalty = 0.0f;
    }
  }

  explicit LagrangianMetrics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _constraint_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _constraint_type constraint;

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
  Type & set__constraint(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->constraint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__LagrangianMetrics
    std::shared_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__LagrangianMetrics
    std::shared_ptr<ocs2_msgs::msg::LagrangianMetrics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LagrangianMetrics_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->penalty != other.penalty) {
      return false;
    }
    if (this->constraint != other.constraint) {
      return false;
    }
    return true;
  }
  bool operator!=(const LagrangianMetrics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LagrangianMetrics_

// alias to use template instance with default allocator
using LagrangianMetrics =
  ocs2_msgs::msg::LagrangianMetrics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__STRUCT_HPP_
