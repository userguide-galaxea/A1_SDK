// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__MpcPerformanceIndices __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__MpcPerformanceIndices __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcPerformanceIndices_
{
  using Type = MpcPerformanceIndices_<ContainerAllocator>;

  explicit MpcPerformanceIndices_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_time = 0.0f;
      this->merit = 0.0f;
      this->cost = 0.0f;
      this->dynamics_violation_sse = 0.0f;
      this->equality_constraints_sse = 0.0f;
      this->equality_lagrangian = 0.0f;
      this->inequality_lagrangian = 0.0f;
    }
  }

  explicit MpcPerformanceIndices_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_time = 0.0f;
      this->merit = 0.0f;
      this->cost = 0.0f;
      this->dynamics_violation_sse = 0.0f;
      this->equality_constraints_sse = 0.0f;
      this->equality_lagrangian = 0.0f;
      this->inequality_lagrangian = 0.0f;
    }
  }

  // field types and members
  using _init_time_type =
    float;
  _init_time_type init_time;
  using _merit_type =
    float;
  _merit_type merit;
  using _cost_type =
    float;
  _cost_type cost;
  using _dynamics_violation_sse_type =
    float;
  _dynamics_violation_sse_type dynamics_violation_sse;
  using _equality_constraints_sse_type =
    float;
  _equality_constraints_sse_type equality_constraints_sse;
  using _equality_lagrangian_type =
    float;
  _equality_lagrangian_type equality_lagrangian;
  using _inequality_lagrangian_type =
    float;
  _inequality_lagrangian_type inequality_lagrangian;

  // setters for named parameter idiom
  Type & set__init_time(
    const float & _arg)
  {
    this->init_time = _arg;
    return *this;
  }
  Type & set__merit(
    const float & _arg)
  {
    this->merit = _arg;
    return *this;
  }
  Type & set__cost(
    const float & _arg)
  {
    this->cost = _arg;
    return *this;
  }
  Type & set__dynamics_violation_sse(
    const float & _arg)
  {
    this->dynamics_violation_sse = _arg;
    return *this;
  }
  Type & set__equality_constraints_sse(
    const float & _arg)
  {
    this->equality_constraints_sse = _arg;
    return *this;
  }
  Type & set__equality_lagrangian(
    const float & _arg)
  {
    this->equality_lagrangian = _arg;
    return *this;
  }
  Type & set__inequality_lagrangian(
    const float & _arg)
  {
    this->inequality_lagrangian = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__MpcPerformanceIndices
    std::shared_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__MpcPerformanceIndices
    std::shared_ptr<ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcPerformanceIndices_ & other) const
  {
    if (this->init_time != other.init_time) {
      return false;
    }
    if (this->merit != other.merit) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    if (this->dynamics_violation_sse != other.dynamics_violation_sse) {
      return false;
    }
    if (this->equality_constraints_sse != other.equality_constraints_sse) {
      return false;
    }
    if (this->equality_lagrangian != other.equality_lagrangian) {
      return false;
    }
    if (this->inequality_lagrangian != other.inequality_lagrangian) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcPerformanceIndices_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcPerformanceIndices_

// alias to use template instance with default allocator
using MpcPerformanceIndices =
  ocs2_msgs::msg::MpcPerformanceIndices_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__STRUCT_HPP_
