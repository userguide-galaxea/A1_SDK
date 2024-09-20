// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_Mask_instance_description
{
public:
  explicit Init_Mask_instance_description(::mobiman_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::Mask instance_description(::mobiman_msgs::msg::Mask::_instance_description_type arg)
  {
    msg_.instance_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::Mask msg_;
};

class Init_Mask_mask_types
{
public:
  explicit Init_Mask_mask_types(::mobiman_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_instance_description mask_types(::mobiman_msgs::msg::Mask::_mask_types_type arg)
  {
    msg_.mask_types = std::move(arg);
    return Init_Mask_instance_description(msg_);
  }

private:
  ::mobiman_msgs::msg::Mask msg_;
};

class Init_Mask_data
{
public:
  explicit Init_Mask_data(::mobiman_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_mask_types data(::mobiman_msgs::msg::Mask::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Mask_mask_types(msg_);
  }

private:
  ::mobiman_msgs::msg::Mask msg_;
};

class Init_Mask_width
{
public:
  explicit Init_Mask_width(::mobiman_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_data width(::mobiman_msgs::msg::Mask::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Mask_data(msg_);
  }

private:
  ::mobiman_msgs::msg::Mask msg_;
};

class Init_Mask_height
{
public:
  explicit Init_Mask_height(::mobiman_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_width height(::mobiman_msgs::msg::Mask::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Mask_width(msg_);
  }

private:
  ::mobiman_msgs::msg::Mask msg_;
};

class Init_Mask_header
{
public:
  Init_Mask_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mask_height header(::mobiman_msgs::msg::Mask::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mask_height(msg_);
  }

private:
  ::mobiman_msgs::msg::Mask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::Mask>()
{
  return mobiman_msgs::msg::builder::Init_Mask_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
