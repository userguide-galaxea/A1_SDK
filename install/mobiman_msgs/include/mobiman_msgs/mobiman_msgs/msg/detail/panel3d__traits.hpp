// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:msg/Panel3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__TRAITS_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/msg/detail/panel3d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'buttons_3d'
#include "mobiman_msgs/msg/detail/button3d__traits.hpp"

namespace mobiman_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Panel3d & msg,
  std::ostream & out)
{
  out << "{";
  // member: origin
  {
    out << "origin: ";
    to_flow_style_yaml(msg.origin, out);
    out << ", ";
  }

  // member: normal
  {
    out << "normal: ";
    to_flow_style_yaml(msg.normal, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: buttons_3d
  {
    if (msg.buttons_3d.size() == 0) {
      out << "buttons_3d: []";
    } else {
      out << "buttons_3d: [";
      size_t pending_items = msg.buttons_3d.size();
      for (auto item : msg.buttons_3d) {
        to_flow_style_yaml(item, out);
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
  const Panel3d & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin:\n";
    to_block_style_yaml(msg.origin, out, indentation + 2);
  }

  // member: normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal:\n";
    to_block_style_yaml(msg.normal, out, indentation + 2);
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: buttons_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.buttons_3d.size() == 0) {
      out << "buttons_3d: []\n";
    } else {
      out << "buttons_3d:\n";
      for (auto item : msg.buttons_3d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Panel3d & msg, bool use_flow_style = false)
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
  const mobiman_msgs::msg::Panel3d & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::msg::Panel3d & msg)
{
  return mobiman_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::msg::Panel3d>()
{
  return "mobiman_msgs::msg::Panel3d";
}

template<>
inline const char * name<mobiman_msgs::msg::Panel3d>()
{
  return "mobiman_msgs/msg/Panel3d";
}

template<>
struct has_fixed_size<mobiman_msgs::msg::Panel3d>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mobiman_msgs::msg::Panel3d>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mobiman_msgs::msg::Panel3d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__TRAITS_HPP_
