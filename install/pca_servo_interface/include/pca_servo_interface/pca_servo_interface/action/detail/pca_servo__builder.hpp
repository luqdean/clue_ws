// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pca_servo_interface:action/PCAServo.idl
// generated code does not contain a copyright notice

#ifndef PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__BUILDER_HPP_
#define PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pca_servo_interface/action/detail/pca_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_Goal_direction
{
public:
  Init_PCAServo_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pca_servo_interface::action::PCAServo_Goal direction(::pca_servo_interface::action::PCAServo_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_Goal>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_Goal_direction();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_Result_value
{
public:
  Init_PCAServo_Result_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pca_servo_interface::action::PCAServo_Result value(::pca_servo_interface::action::PCAServo_Result::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_Result>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_Result_value();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_Feedback_feedback
{
public:
  Init_PCAServo_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pca_servo_interface::action::PCAServo_Feedback feedback(::pca_servo_interface::action::PCAServo_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_Feedback>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_Feedback_feedback();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_SendGoal_Request_goal
{
public:
  explicit Init_PCAServo_SendGoal_Request_goal(::pca_servo_interface::action::PCAServo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pca_servo_interface::action::PCAServo_SendGoal_Request goal(::pca_servo_interface::action::PCAServo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_SendGoal_Request msg_;
};

class Init_PCAServo_SendGoal_Request_goal_id
{
public:
  Init_PCAServo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PCAServo_SendGoal_Request_goal goal_id(::pca_servo_interface::action::PCAServo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PCAServo_SendGoal_Request_goal(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_SendGoal_Request>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_SendGoal_Request_goal_id();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_SendGoal_Response_stamp
{
public:
  explicit Init_PCAServo_SendGoal_Response_stamp(::pca_servo_interface::action::PCAServo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pca_servo_interface::action::PCAServo_SendGoal_Response stamp(::pca_servo_interface::action::PCAServo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_SendGoal_Response msg_;
};

class Init_PCAServo_SendGoal_Response_accepted
{
public:
  Init_PCAServo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PCAServo_SendGoal_Response_stamp accepted(::pca_servo_interface::action::PCAServo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PCAServo_SendGoal_Response_stamp(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_SendGoal_Response>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_SendGoal_Response_accepted();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_GetResult_Request_goal_id
{
public:
  Init_PCAServo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pca_servo_interface::action::PCAServo_GetResult_Request goal_id(::pca_servo_interface::action::PCAServo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_GetResult_Request>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_GetResult_Request_goal_id();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_GetResult_Response_result
{
public:
  explicit Init_PCAServo_GetResult_Response_result(::pca_servo_interface::action::PCAServo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pca_servo_interface::action::PCAServo_GetResult_Response result(::pca_servo_interface::action::PCAServo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_GetResult_Response msg_;
};

class Init_PCAServo_GetResult_Response_status
{
public:
  Init_PCAServo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PCAServo_GetResult_Response_result status(::pca_servo_interface::action::PCAServo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PCAServo_GetResult_Response_result(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_GetResult_Response>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_GetResult_Response_status();
}

}  // namespace pca_servo_interface


namespace pca_servo_interface
{

namespace action
{

namespace builder
{

class Init_PCAServo_FeedbackMessage_feedback
{
public:
  explicit Init_PCAServo_FeedbackMessage_feedback(::pca_servo_interface::action::PCAServo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pca_servo_interface::action::PCAServo_FeedbackMessage feedback(::pca_servo_interface::action::PCAServo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_FeedbackMessage msg_;
};

class Init_PCAServo_FeedbackMessage_goal_id
{
public:
  Init_PCAServo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PCAServo_FeedbackMessage_feedback goal_id(::pca_servo_interface::action::PCAServo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PCAServo_FeedbackMessage_feedback(msg_);
  }

private:
  ::pca_servo_interface::action::PCAServo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pca_servo_interface::action::PCAServo_FeedbackMessage>()
{
  return pca_servo_interface::action::builder::Init_PCAServo_FeedbackMessage_goal_id();
}

}  // namespace pca_servo_interface

#endif  // PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__BUILDER_HPP_
