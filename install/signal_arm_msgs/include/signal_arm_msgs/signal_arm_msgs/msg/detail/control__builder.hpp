// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_t_ff
{
public:
  explicit Init_Control_t_ff(::signal_arm_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::Control t_ff(::signal_arm_msgs::msg::Control::_t_ff_type arg)
  {
    msg_.t_ff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::Control msg_;
};

class Init_Control_kd
{
public:
  explicit Init_Control_kd(::signal_arm_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_t_ff kd(::signal_arm_msgs::msg::Control::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_Control_t_ff(msg_);
  }

private:
  ::signal_arm_msgs::msg::Control msg_;
};

class Init_Control_kp
{
public:
  explicit Init_Control_kp(::signal_arm_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_kd kp(::signal_arm_msgs::msg::Control::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_Control_kd(msg_);
  }

private:
  ::signal_arm_msgs::msg::Control msg_;
};

class Init_Control_v_des
{
public:
  explicit Init_Control_v_des(::signal_arm_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_kp v_des(::signal_arm_msgs::msg::Control::_v_des_type arg)
  {
    msg_.v_des = std::move(arg);
    return Init_Control_kp(msg_);
  }

private:
  ::signal_arm_msgs::msg::Control msg_;
};

class Init_Control_p_des
{
public:
  Init_Control_p_des()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_v_des p_des(::signal_arm_msgs::msg::Control::_p_des_type arg)
  {
    msg_.p_des = std::move(arg);
    return Init_Control_v_des(msg_);
  }

private:
  ::signal_arm_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::Control>()
{
  return signal_arm_msgs::msg::builder::Init_Control_p_des();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
