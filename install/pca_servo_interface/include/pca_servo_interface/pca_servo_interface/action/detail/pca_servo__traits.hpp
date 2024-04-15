// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pca_servo_interface:action/PCAServo.idl
// generated code does not contain a copyright notice

#ifndef PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__TRAITS_HPP_
#define PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pca_servo_interface/action/detail/pca_servo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_Goal & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_Goal>()
{
  return "pca_servo_interface::action::PCAServo_Goal";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_Goal>()
{
  return "pca_servo_interface/action/PCAServo_Goal";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_Result & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_Result>()
{
  return "pca_servo_interface::action::PCAServo_Result";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_Result>()
{
  return "pca_servo_interface/action/PCAServo_Result";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_Feedback & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_Feedback>()
{
  return "pca_servo_interface::action::PCAServo_Feedback";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_Feedback>()
{
  return "pca_servo_interface/action/PCAServo_Feedback";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pca_servo_interface/action/detail/pca_servo__traits.hpp"

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_SendGoal_Request & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_SendGoal_Request>()
{
  return "pca_servo_interface::action::PCAServo_SendGoal_Request";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_SendGoal_Request>()
{
  return "pca_servo_interface/action/PCAServo_SendGoal_Request";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pca_servo_interface::action::PCAServo_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pca_servo_interface::action::PCAServo_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_SendGoal_Response & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_SendGoal_Response>()
{
  return "pca_servo_interface::action::PCAServo_SendGoal_Response";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_SendGoal_Response>()
{
  return "pca_servo_interface/action/PCAServo_SendGoal_Response";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_SendGoal>()
{
  return "pca_servo_interface::action::PCAServo_SendGoal";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_SendGoal>()
{
  return "pca_servo_interface/action/PCAServo_SendGoal";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pca_servo_interface::action::PCAServo_SendGoal_Request>::value &&
    has_fixed_size<pca_servo_interface::action::PCAServo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pca_servo_interface::action::PCAServo_SendGoal_Request>::value &&
    has_bounded_size<pca_servo_interface::action::PCAServo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pca_servo_interface::action::PCAServo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pca_servo_interface::action::PCAServo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pca_servo_interface::action::PCAServo_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_GetResult_Request & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_GetResult_Request>()
{
  return "pca_servo_interface::action::PCAServo_GetResult_Request";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_GetResult_Request>()
{
  return "pca_servo_interface/action/PCAServo_GetResult_Request";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pca_servo_interface/action/detail/pca_servo__traits.hpp"

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_GetResult_Response & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_GetResult_Response>()
{
  return "pca_servo_interface::action::PCAServo_GetResult_Response";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_GetResult_Response>()
{
  return "pca_servo_interface/action/PCAServo_GetResult_Response";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pca_servo_interface::action::PCAServo_Result>::value> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pca_servo_interface::action::PCAServo_Result>::value> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_GetResult>()
{
  return "pca_servo_interface::action::PCAServo_GetResult";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_GetResult>()
{
  return "pca_servo_interface/action/PCAServo_GetResult";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pca_servo_interface::action::PCAServo_GetResult_Request>::value &&
    has_fixed_size<pca_servo_interface::action::PCAServo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pca_servo_interface::action::PCAServo_GetResult_Request>::value &&
    has_bounded_size<pca_servo_interface::action::PCAServo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pca_servo_interface::action::PCAServo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pca_servo_interface::action::PCAServo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pca_servo_interface::action::PCAServo_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pca_servo_interface/action/detail/pca_servo__traits.hpp"

namespace pca_servo_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const PCAServo_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCAServo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCAServo_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pca_servo_interface

namespace rosidl_generator_traits
{

[[deprecated("use pca_servo_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pca_servo_interface::action::PCAServo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pca_servo_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pca_servo_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const pca_servo_interface::action::PCAServo_FeedbackMessage & msg)
{
  return pca_servo_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<pca_servo_interface::action::PCAServo_FeedbackMessage>()
{
  return "pca_servo_interface::action::PCAServo_FeedbackMessage";
}

template<>
inline const char * name<pca_servo_interface::action::PCAServo_FeedbackMessage>()
{
  return "pca_servo_interface/action/PCAServo_FeedbackMessage";
}

template<>
struct has_fixed_size<pca_servo_interface::action::PCAServo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pca_servo_interface::action::PCAServo_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pca_servo_interface::action::PCAServo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pca_servo_interface::action::PCAServo_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pca_servo_interface::action::PCAServo_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pca_servo_interface::action::PCAServo>
  : std::true_type
{
};

template<>
struct is_action_goal<pca_servo_interface::action::PCAServo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pca_servo_interface::action::PCAServo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pca_servo_interface::action::PCAServo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__TRAITS_HPP_
