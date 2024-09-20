// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from signal_arm_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__TRAITS_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "signal_arm_msgs/msg/detail/status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'data'
#include "signal_arm_msgs/msg/detail/status__traits.hpp"

namespace signal_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatusStamped & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusStamped & msg, bool use_flow_style = false)
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

}  // namespace signal_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use signal_arm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const signal_arm_msgs::msg::StatusStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  signal_arm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use signal_arm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const signal_arm_msgs::msg::StatusStamped & msg)
{
  return signal_arm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<signal_arm_msgs::msg::StatusStamped>()
{
  return "signal_arm_msgs::msg::StatusStamped";
}

template<>
inline const char * name<signal_arm_msgs::msg::StatusStamped>()
{
  return "signal_arm_msgs/msg/StatusStamped";
}

template<>
struct has_fixed_size<signal_arm_msgs::msg::StatusStamped>
  : std::integral_constant<bool, has_fixed_size<signal_arm_msgs::msg::Status>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<signal_arm_msgs::msg::StatusStamped>
  : std::integral_constant<bool, has_bounded_size<signal_arm_msgs::msg::Status>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<signal_arm_msgs::msg::StatusStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__TRAITS_HPP_
