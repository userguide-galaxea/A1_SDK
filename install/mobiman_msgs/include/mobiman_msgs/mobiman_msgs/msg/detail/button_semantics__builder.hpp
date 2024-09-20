// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/ButtonSemantics.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/button_semantics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_ButtonSemantics_button_status
{
public:
  explicit Init_ButtonSemantics_button_status(::mobiman_msgs::msg::ButtonSemantics & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::ButtonSemantics button_status(::mobiman_msgs::msg::ButtonSemantics::_button_status_type arg)
  {
    msg_.button_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::ButtonSemantics msg_;
};

class Init_ButtonSemantics_name
{
public:
  Init_ButtonSemantics_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonSemantics_button_status name(::mobiman_msgs::msg::ButtonSemantics::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ButtonSemantics_button_status(msg_);
  }

private:
  ::mobiman_msgs::msg::ButtonSemantics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::ButtonSemantics>()
{
  return mobiman_msgs::msg::builder::Init_ButtonSemantics_name();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__BUILDER_HPP_
