// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcTargetTrajectories_input_trajectory
{
public:
  explicit Init_MpcTargetTrajectories_input_trajectory(::ocs2_msgs::msg::MpcTargetTrajectories & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::MpcTargetTrajectories input_trajectory(::ocs2_msgs::msg::MpcTargetTrajectories::_input_trajectory_type arg)
  {
    msg_.input_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcTargetTrajectories msg_;
};

class Init_MpcTargetTrajectories_state_trajectory
{
public:
  explicit Init_MpcTargetTrajectories_state_trajectory(::ocs2_msgs::msg::MpcTargetTrajectories & msg)
  : msg_(msg)
  {}
  Init_MpcTargetTrajectories_input_trajectory state_trajectory(::ocs2_msgs::msg::MpcTargetTrajectories::_state_trajectory_type arg)
  {
    msg_.state_trajectory = std::move(arg);
    return Init_MpcTargetTrajectories_input_trajectory(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcTargetTrajectories msg_;
};

class Init_MpcTargetTrajectories_time_trajectory
{
public:
  Init_MpcTargetTrajectories_time_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcTargetTrajectories_state_trajectory time_trajectory(::ocs2_msgs::msg::MpcTargetTrajectories::_time_trajectory_type arg)
  {
    msg_.time_trajectory = std::move(arg);
    return Init_MpcTargetTrajectories_state_trajectory(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcTargetTrajectories msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::MpcTargetTrajectories>()
{
  return ocs2_msgs::msg::builder::Init_MpcTargetTrajectories_time_trajectory();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__BUILDER_HPP_
