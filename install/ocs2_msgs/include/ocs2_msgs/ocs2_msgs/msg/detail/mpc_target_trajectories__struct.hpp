// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state_trajectory'
#include "ocs2_msgs/msg/detail/mpc_state__struct.hpp"
// Member 'input_trajectory'
#include "ocs2_msgs/msg/detail/mpc_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__MpcTargetTrajectories __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__MpcTargetTrajectories __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcTargetTrajectories_
{
  using Type = MpcTargetTrajectories_<ContainerAllocator>;

  explicit MpcTargetTrajectories_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MpcTargetTrajectories_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _time_trajectory_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _time_trajectory_type time_trajectory;
  using _state_trajectory_type =
    std::vector<ocs2_msgs::msg::MpcState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::MpcState_<ContainerAllocator>>>;
  _state_trajectory_type state_trajectory;
  using _input_trajectory_type =
    std::vector<ocs2_msgs::msg::MpcInput_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::MpcInput_<ContainerAllocator>>>;
  _input_trajectory_type input_trajectory;

  // setters for named parameter idiom
  Type & set__time_trajectory(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->time_trajectory = _arg;
    return *this;
  }
  Type & set__state_trajectory(
    const std::vector<ocs2_msgs::msg::MpcState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::MpcState_<ContainerAllocator>>> & _arg)
  {
    this->state_trajectory = _arg;
    return *this;
  }
  Type & set__input_trajectory(
    const std::vector<ocs2_msgs::msg::MpcInput_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::MpcInput_<ContainerAllocator>>> & _arg)
  {
    this->input_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__MpcTargetTrajectories
    std::shared_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__MpcTargetTrajectories
    std::shared_ptr<ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcTargetTrajectories_ & other) const
  {
    if (this->time_trajectory != other.time_trajectory) {
      return false;
    }
    if (this->state_trajectory != other.state_trajectory) {
      return false;
    }
    if (this->input_trajectory != other.input_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcTargetTrajectories_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcTargetTrajectories_

// alias to use template instance with default allocator
using MpcTargetTrajectories =
  ocs2_msgs::msg::MpcTargetTrajectories_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__STRUCT_HPP_
