// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pca_servo_interface:action/PCAServo.idl
// generated code does not contain a copyright notice

#ifndef PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__STRUCT_H_
#define PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_Goal
{
  int16_t direction;
} pca_servo_interface__action__PCAServo_Goal;

// Struct for a sequence of pca_servo_interface__action__PCAServo_Goal.
typedef struct pca_servo_interface__action__PCAServo_Goal__Sequence
{
  pca_servo_interface__action__PCAServo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_Result
{
  int32_t value;
} pca_servo_interface__action__PCAServo_Result;

// Struct for a sequence of pca_servo_interface__action__PCAServo_Result.
typedef struct pca_servo_interface__action__PCAServo_Result__Sequence
{
  pca_servo_interface__action__PCAServo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_Feedback
{
  int32_t feedback;
} pca_servo_interface__action__PCAServo_Feedback;

// Struct for a sequence of pca_servo_interface__action__PCAServo_Feedback.
typedef struct pca_servo_interface__action__PCAServo_Feedback__Sequence
{
  pca_servo_interface__action__PCAServo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pca_servo_interface/action/detail/pca_servo__struct.h"

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pca_servo_interface__action__PCAServo_Goal goal;
} pca_servo_interface__action__PCAServo_SendGoal_Request;

// Struct for a sequence of pca_servo_interface__action__PCAServo_SendGoal_Request.
typedef struct pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence
{
  pca_servo_interface__action__PCAServo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pca_servo_interface__action__PCAServo_SendGoal_Response;

// Struct for a sequence of pca_servo_interface__action__PCAServo_SendGoal_Response.
typedef struct pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence
{
  pca_servo_interface__action__PCAServo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pca_servo_interface__action__PCAServo_GetResult_Request;

// Struct for a sequence of pca_servo_interface__action__PCAServo_GetResult_Request.
typedef struct pca_servo_interface__action__PCAServo_GetResult_Request__Sequence
{
  pca_servo_interface__action__PCAServo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pca_servo_interface/action/detail/pca_servo__struct.h"

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_GetResult_Response
{
  int8_t status;
  pca_servo_interface__action__PCAServo_Result result;
} pca_servo_interface__action__PCAServo_GetResult_Response;

// Struct for a sequence of pca_servo_interface__action__PCAServo_GetResult_Response.
typedef struct pca_servo_interface__action__PCAServo_GetResult_Response__Sequence
{
  pca_servo_interface__action__PCAServo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pca_servo_interface/action/detail/pca_servo__struct.h"

/// Struct defined in action/PCAServo in the package pca_servo_interface.
typedef struct pca_servo_interface__action__PCAServo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pca_servo_interface__action__PCAServo_Feedback feedback;
} pca_servo_interface__action__PCAServo_FeedbackMessage;

// Struct for a sequence of pca_servo_interface__action__PCAServo_FeedbackMessage.
typedef struct pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence
{
  pca_servo_interface__action__PCAServo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__STRUCT_H_
