// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__STRUCT_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'init_observation'
#include "ocs2_msgs/msg/detail/mpc_observation__struct.hpp"
// Member 'plan_target_trajectories'
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.hpp"
// Member 'state_trajectory'
#include "ocs2_msgs/msg/detail/mpc_state__struct.hpp"
// Member 'input_trajectory'
#include "ocs2_msgs/msg/detail/mpc_input__struct.hpp"
// Member 'mode_schedule'
#include "ocs2_msgs/msg/detail/mode_schedule__struct.hpp"
// Member 'data'
#include "ocs2_msgs/msg/detail/controller_data__struct.hpp"
// Member 'performance_indices'
#include "ocs2_msgs/msg/detail/mpc_performance_indices__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ocs2_msgs__msg__MpcFlattenedController __attribute__((deprecated))
#else
# define DEPRECATED__ocs2_msgs__msg__MpcFlattenedController __declspec(deprecated)
#endif

namespace ocs2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MpcFlattenedController_
{
  using Type = MpcFlattenedController_<ContainerAllocator>;

  explicit MpcFlattenedController_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : init_observation(_init),
    plan_target_trajectories(_init),
    mode_schedule(_init),
    performance_indices(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_type = 0;
    }
  }

  explicit MpcFlattenedController_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : init_observation(_alloc, _init),
    plan_target_trajectories(_alloc, _init),
    mode_schedule(_alloc, _init),
    performance_indices(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_type = 0;
    }
  }

  // field types and members
  using _controller_type_type =
    uint8_t;
  _controller_type_type controller_type;
  using _init_observation_type =
    ocs2_msgs::msg::MpcObservation_<ContainerAllocator>;
  _init_observation_type init_observation;
  using _plan_target_trajectories_type =
    ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator>;
  _plan_target_trajectories_type plan_target_trajectories;
  using _state_trajectory_type =
    std::vector<ocs2_msgs::msg::MpcState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::MpcState_<ContainerAllocator>>>;
  _state_trajectory_type state_trajectory;
  using _input_trajectory_type =
    std::vector<ocs2_msgs::msg::MpcInput_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::MpcInput_<ContainerAllocator>>>;
  _input_trajectory_type input_trajectory;
  using _time_trajectory_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _time_trajectory_type time_trajectory;
  using _post_event_indices_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _post_event_indices_type post_event_indices;
  using _mode_schedule_type =
    ocs2_msgs::msg::ModeSchedule_<ContainerAllocator>;
  _mode_schedule_type mode_schedule;
  using _data_type =
    std::vector<ocs2_msgs::msg::ControllerData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::ControllerData_<ContainerAllocator>>>;
  _data_type data;
  using _performance_indices_type =
    ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator>;
  _performance_indices_type performance_indices;

  // setters for named parameter idiom
  Type & set__controller_type(
    const uint8_t & _arg)
  {
    this->controller_type = _arg;
    return *this;
  }
  Type & set__init_observation(
    const ocs2_msgs::msg::MpcObservation_<ContainerAllocator> & _arg)
  {
    this->init_observation = _arg;
    return *this;
  }
  Type & set__plan_target_trajectories(
    const ocs2_msgs::msg::MpcTargetTrajectories_<ContainerAllocator> & _arg)
  {
    this->plan_target_trajectories = _arg;
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
  Type & set__time_trajectory(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->time_trajectory = _arg;
    return *this;
  }
  Type & set__post_event_indices(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->post_event_indices = _arg;
    return *this;
  }
  Type & set__mode_schedule(
    const ocs2_msgs::msg::ModeSchedule_<ContainerAllocator> & _arg)
  {
    this->mode_schedule = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<ocs2_msgs::msg::ControllerData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ocs2_msgs::msg::ControllerData_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__performance_indices(
    const ocs2_msgs::msg::MpcPerformanceIndices_<ContainerAllocator> & _arg)
  {
    this->performance_indices = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROLLER_UNKNOWN =
    0u;
  static constexpr uint8_t CONTROLLER_FEEDFORWARD =
    1u;
  static constexpr uint8_t CONTROLLER_LINEAR =
    2u;

  // pointer types
  using RawPtr =
    ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocs2_msgs__msg__MpcFlattenedController
    std::shared_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocs2_msgs__msg__MpcFlattenedController
    std::shared_ptr<ocs2_msgs::msg::MpcFlattenedController_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MpcFlattenedController_ & other) const
  {
    if (this->controller_type != other.controller_type) {
      return false;
    }
    if (this->init_observation != other.init_observation) {
      return false;
    }
    if (this->plan_target_trajectories != other.plan_target_trajectories) {
      return false;
    }
    if (this->state_trajectory != other.state_trajectory) {
      return false;
    }
    if (this->input_trajectory != other.input_trajectory) {
      return false;
    }
    if (this->time_trajectory != other.time_trajectory) {
      return false;
    }
    if (this->post_event_indices != other.post_event_indices) {
      return false;
    }
    if (this->mode_schedule != other.mode_schedule) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->performance_indices != other.performance_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const MpcFlattenedController_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MpcFlattenedController_

// alias to use template instance with default allocator
using MpcFlattenedController =
  ocs2_msgs::msg::MpcFlattenedController_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MpcFlattenedController_<ContainerAllocator>::CONTROLLER_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MpcFlattenedController_<ContainerAllocator>::CONTROLLER_FEEDFORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MpcFlattenedController_<ContainerAllocator>::CONTROLLER_LINEAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__STRUCT_HPP_
