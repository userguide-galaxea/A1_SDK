// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/ArmControl.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__ARM_CONTROL__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__ARM_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/arm_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmControl_mode
{
public:
  explicit Init_ArmControl_mode(::mobiman_msgs::msg::ArmControl & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::ArmControl mode(::mobiman_msgs::msg::ArmControl::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

class Init_ArmControl_t_ff
{
public:
  explicit Init_ArmControl_t_ff(::mobiman_msgs::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_mode t_ff(::mobiman_msgs::msg::ArmControl::_t_ff_type arg)
  {
    msg_.t_ff = std::move(arg);
    return Init_ArmControl_mode(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

class Init_ArmControl_kd
{
public:
  explicit Init_ArmControl_kd(::mobiman_msgs::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_t_ff kd(::mobiman_msgs::msg::ArmControl::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_ArmControl_t_ff(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

class Init_ArmControl_kp
{
public:
  explicit Init_ArmControl_kp(::mobiman_msgs::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_kd kp(::mobiman_msgs::msg::ArmControl::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_ArmControl_kd(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

class Init_ArmControl_v_des
{
public:
  explicit Init_ArmControl_v_des(::mobiman_msgs::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_kp v_des(::mobiman_msgs::msg::ArmControl::_v_des_type arg)
  {
    msg_.v_des = std::move(arg);
    return Init_ArmControl_kp(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

class Init_ArmControl_p_des
{
public:
  explicit Init_ArmControl_p_des(::mobiman_msgs::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_v_des p_des(::mobiman_msgs::msg::ArmControl::_p_des_type arg)
  {
    msg_.p_des = std::move(arg);
    return Init_ArmControl_v_des(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

class Init_ArmControl_header
{
public:
  Init_ArmControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControl_p_des header(::mobiman_msgs::msg::ArmControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmControl_p_des(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::ArmControl>()
{
  return mobiman_msgs::msg::builder::Init_ArmControl_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__ARM_CONTROL__BUILDER_HPP_
