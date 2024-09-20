// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/MpcObservation.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "ocs2_msgs/msg/detail/mpc_state__struct.hpp"
// Member 'input'
#include "ocs2_msgs/msg/detail/mpc_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__MpcObservation __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__MpcObservation __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcObservation_
{
  using Type = MpcObservation_<ContainerAllocator>;

  explicit MpcObservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init),
    input(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->mode = 0;
    }
  }

  explicit MpcObservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init),
    input(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->mode = 0;
    }
  }

  // field types and members
  using _time_type =
    double;
  _time_type time;
  using _state_type =
    ocs2_msgs::msg::MpcState_<ContainerAllocator>;
  _state_type state;
  using _input_type =
    ocs2_msgs::msg::MpcInput_<ContainerAllocator>;
  _input_type input;
  using _mode_type =
    int8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__state(
    const ocs2_msgs::msg::MpcState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__input(
    const ocs2_msgs::msg::MpcInput_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::MpcObservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::MpcObservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcObservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcObservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__MpcObservation
    std::shared_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__MpcObservation
    std::shared_ptr<ocs2_msgs::msg::MpcObservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcObservation_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->input != other.input) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcObservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcObservation_

// alias to use template instance with default allocator
using MpcObservation =
  ocs2_msgs::msg::MpcObservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__STRUCT_HPP_
