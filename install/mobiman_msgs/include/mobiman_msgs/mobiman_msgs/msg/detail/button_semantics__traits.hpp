// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:msg/ButtonSemantics.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__TRAITS_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/msg/detail/button_semantics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mobiman_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ButtonSemantics & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: button_status
  {
    out << "button_status: ";
    rosidl_generator_traits::value_to_yaml(msg.button_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ButtonSemantics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: button_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_status: ";
    rosidl_generator_traits::value_to_yaml(msg.button_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ButtonSemantics & msg, bool use_flow_style = false)
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
  const mobiman_msgs::msg::ButtonSemantics & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::msg::ButtonSemantics & msg)
{
  return mobiman_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::msg::ButtonSemantics>()
{
  return "mobiman_msgs::msg::ButtonSemantics";
}

template<>
inline const char * name<mobiman_msgs::msg::ButtonSemantics>()
{
  return "mobiman_msgs/msg/ButtonSemantics";
}

template<>
struct has_fixed_size<mobiman_msgs::msg::ButtonSemantics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mobiman_msgs::msg::ButtonSemantics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mobiman_msgs::msg::ButtonSemantics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__TRAITS_HPP_
