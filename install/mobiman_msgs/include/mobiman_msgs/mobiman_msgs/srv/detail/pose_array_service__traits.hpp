// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobiman_msgs:srv/PoseArrayService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__TRAITS_HPP_
#define MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobiman_msgs/srv/detail/pose_array_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace mobiman_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseArrayService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: poses
  {
    out << "poses: ";
    to_flow_style_yaml(msg.poses, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseArrayService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poses:\n";
    to_block_style_yaml(msg.poses, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseArrayService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mobiman_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mobiman_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mobiman_msgs::srv::PoseArrayService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::srv::PoseArrayService_Request & msg)
{
  return mobiman_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::srv::PoseArrayService_Request>()
{
  return "mobiman_msgs::srv::PoseArrayService_Request";
}

template<>
inline const char * name<mobiman_msgs::srv::PoseArrayService_Request>()
{
  return "mobiman_msgs/srv/PoseArrayService_Request";
}

template<>
struct has_fixed_size<mobiman_msgs::srv::PoseArrayService_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct has_bounded_size<mobiman_msgs::srv::PoseArrayService_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct is_message<mobiman_msgs::srv::PoseArrayService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mobiman_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseArrayService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseArrayService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseArrayService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mobiman_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mobiman_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mobiman_msgs::srv::PoseArrayService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobiman_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobiman_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mobiman_msgs::srv::PoseArrayService_Response & msg)
{
  return mobiman_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mobiman_msgs::srv::PoseArrayService_Response>()
{
  return "mobiman_msgs::srv::PoseArrayService_Response";
}

template<>
inline const char * name<mobiman_msgs::srv::PoseArrayService_Response>()
{
  return "mobiman_msgs/srv/PoseArrayService_Response";
}

template<>
struct has_fixed_size<mobiman_msgs::srv::PoseArrayService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mobiman_msgs::srv::PoseArrayService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mobiman_msgs::srv::PoseArrayService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mobiman_msgs::srv::PoseArrayService>()
{
  return "mobiman_msgs::srv::PoseArrayService";
}

template<>
inline const char * name<mobiman_msgs::srv::PoseArrayService>()
{
  return "mobiman_msgs/srv/PoseArrayService";
}

template<>
struct has_fixed_size<mobiman_msgs::srv::PoseArrayService>
  : std::integral_constant<
    bool,
    has_fixed_size<mobiman_msgs::srv::PoseArrayService_Request>::value &&
    has_fixed_size<mobiman_msgs::srv::PoseArrayService_Response>::value
  >
{
};

template<>
struct has_bounded_size<mobiman_msgs::srv::PoseArrayService>
  : std::integral_constant<
    bool,
    has_bounded_size<mobiman_msgs::srv::PoseArrayService_Request>::value &&
    has_bounded_size<mobiman_msgs::srv::PoseArrayService_Response>::value
  >
{
};

template<>
struct is_service<mobiman_msgs::srv::PoseArrayService>
  : std::true_type
{
};

template<>
struct is_service_request<mobiman_msgs::srv::PoseArrayService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mobiman_msgs::srv::PoseArrayService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__TRAITS_HPP_
