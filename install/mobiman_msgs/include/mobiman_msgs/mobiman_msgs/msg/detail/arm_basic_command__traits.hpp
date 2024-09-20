// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:msg/ArmBasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__TRAITS_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/msg/detail/arm_basic_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'jpos'
#include "mobiman_msgs/msg/detail/joint_position__traits.hpp"
// Member 'jspeed'
#include "mobiman_msgs/msg/detail/joint_speed__traits.hpp"

namespace mobiman_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmBasicCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: jpos
  {
    out << "jpos: ";
    to_flow_style_yaml(msg.jpos, out);
    out << ", ";
  }

  // member: jspeed
  {
    out << "jspeed: ";
    to_flow_style_yaml(msg.jspeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmBasicCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: jpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jpos:\n";
    to_block_style_yaml(msg.jpos, out, indentation + 2);
  }

  // member: jspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jspeed:\n";
    to_block_style_yaml(msg.jspeed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmBasicCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mobiman_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mobiman_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mobiman_msgs::msg::ArmBasicCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::msg::ArmBasicCommand & msg)
{
  return mobiman_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::msg::ArmBasicCommand>()
{
  return "mobiman_msgs::msg::ArmBasicCommand";
}

template<>
inline const char * name<mobiman_msgs::msg::ArmBasicCommand>()
{
  return "mobiman_msgs/msg/ArmBasicCommand";
}

template<>
struct has_fixed_size<mobiman_msgs::msg::ArmBasicCommand>
  : std::integral_constant<bool, has_fixed_size<mobiman_msgs::msg::JointPosition>::value && has_fixed_size<mobiman_msgs::msg::JointSpeed>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobiman_msgs::msg::ArmBasicCommand>
  : std::integral_constant<bool, has_bounded_size<mobiman_msgs::msg::JointPosition>::value && has_bounded_size<mobiman_msgs::msg::JointSpeed>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobiman_msgs::msg::ArmBasicCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__TRAITS_HPP_
