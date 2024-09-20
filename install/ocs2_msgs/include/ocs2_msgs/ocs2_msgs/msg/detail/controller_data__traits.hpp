// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__TRAITS_HPP_
#define OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/msg/detail/controller_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ocs2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerData & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerData & msg, bool use_flow_style = false)
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

}  // namespace ocs2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ocs2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocs2_msgs::msg::ControllerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::msg::ControllerData & msg)
{
  return ocs2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::msg::ControllerData>()
{
  return "ocs2_msgs::msg::ControllerData";
}

template<>
inline const char * name<ocs2_msgs::msg::ControllerData>()
{
  return "ocs2_msgs/msg/ControllerData";
}

template<>
struct has_fixed_size<ocs2_msgs::msg::ControllerData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ocs2_msgs::msg::ControllerData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ocs2_msgs::msg::ControllerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__TRAITS_HPP_