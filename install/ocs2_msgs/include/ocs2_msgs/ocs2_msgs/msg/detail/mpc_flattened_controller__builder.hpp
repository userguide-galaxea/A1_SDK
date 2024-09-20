// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mpc_flattened_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcFlattenedController_performance_indices
{
public:
  explicit Init_MpcFlattenedController_performance_indices(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::MpcFlattenedController performance_indices(::ocs2_msgs::msg::MpcFlattenedController::_performance_indices_type arg)
  {
    msg_.performance_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_data
{
public:
  explicit Init_MpcFlattenedController_data(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_performance_indices data(::ocs2_msgs::msg::MpcFlattenedController::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_MpcFlattenedController_performance_indices(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_mode_schedule
{
public:
  explicit Init_MpcFlattenedController_mode_schedule(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_data mode_schedule(::ocs2_msgs::msg::MpcFlattenedController::_mode_schedule_type arg)
  {
    msg_.mode_schedule = std::move(arg);
    return Init_MpcFlattenedController_data(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_post_event_indices
{
public:
  explicit Init_MpcFlattenedController_post_event_indices(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_mode_schedule post_event_indices(::ocs2_msgs::msg::MpcFlattenedController::_post_event_indices_type arg)
  {
    msg_.post_event_indices = std::move(arg);
    return Init_MpcFlattenedController_mode_schedule(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_time_trajectory
{
public:
  explicit Init_MpcFlattenedController_time_trajectory(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_post_event_indices time_trajectory(::ocs2_msgs::msg::MpcFlattenedController::_time_trajectory_type arg)
  {
    msg_.time_trajectory = std::move(arg);
    return Init_MpcFlattenedController_post_event_indices(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_input_trajectory
{
public:
  explicit Init_MpcFlattenedController_input_trajectory(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_time_trajectory input_trajectory(::ocs2_msgs::msg::MpcFlattenedController::_input_trajectory_type arg)
  {
    msg_.input_trajectory = std::move(arg);
    return Init_MpcFlattenedController_time_trajectory(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_state_trajectory
{
public:
  explicit Init_MpcFlattenedController_state_trajectory(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_input_trajectory state_trajectory(::ocs2_msgs::msg::MpcFlattenedController::_state_trajectory_type arg)
  {
    msg_.state_trajectory = std::move(arg);
    return Init_MpcFlattenedController_input_trajectory(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_plan_target_trajectories
{
public:
  explicit Init_MpcFlattenedController_plan_target_trajectories(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_state_trajectory plan_target_trajectories(::ocs2_msgs::msg::MpcFlattenedController::_plan_target_trajectories_type arg)
  {
    msg_.plan_target_trajectories = std::move(arg);
    return Init_MpcFlattenedController_state_trajectory(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_init_observation
{
public:
  explicit Init_MpcFlattenedController_init_observation(::ocs2_msgs::msg::MpcFlattenedController & msg)
  : msg_(msg)
  {}
  Init_MpcFlattenedController_plan_target_trajectories init_observation(::ocs2_msgs::msg::MpcFlattenedController::_init_observation_type arg)
  {
    msg_.init_observation = std::move(arg);
    return Init_MpcFlattenedController_plan_target_trajectories(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

class Init_MpcFlattenedController_controller_type
{
public:
  Init_MpcFlattenedController_controller_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcFlattenedController_init_observation controller_type(::ocs2_msgs::msg::MpcFlattenedController::_controller_type_type arg)
  {
    msg_.controller_type = std::move(arg);
    return Init_MpcFlattenedController_init_observation(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcFlattenedController msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::MpcFlattenedController>()
{
  return ocs2_msgs::msg::builder::Init_MpcFlattenedController_controller_type();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__BUILDER_HPP_
