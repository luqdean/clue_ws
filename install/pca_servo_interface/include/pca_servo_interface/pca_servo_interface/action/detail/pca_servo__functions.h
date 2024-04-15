// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pca_servo_interface:action/PCAServo.idl
// generated code does not contain a copyright notice

#ifndef PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__FUNCTIONS_H_
#define PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pca_servo_interface/msg/rosidl_generator_c__visibility_control.h"

#include "pca_servo_interface/action/detail/pca_servo__struct.h"

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_Goal
 * )) before or use
 * pca_servo_interface__action__PCAServo_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Goal__init(pca_servo_interface__action__PCAServo_Goal * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Goal__fini(pca_servo_interface__action__PCAServo_Goal * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_Goal *
pca_servo_interface__action__PCAServo_Goal__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Goal__destroy(pca_servo_interface__action__PCAServo_Goal * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Goal__are_equal(const pca_servo_interface__action__PCAServo_Goal * lhs, const pca_servo_interface__action__PCAServo_Goal * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Goal__copy(
  const pca_servo_interface__action__PCAServo_Goal * input,
  pca_servo_interface__action__PCAServo_Goal * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Goal__Sequence__init(pca_servo_interface__action__PCAServo_Goal__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Goal__Sequence__fini(pca_servo_interface__action__PCAServo_Goal__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_Goal__Sequence *
pca_servo_interface__action__PCAServo_Goal__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Goal__Sequence__destroy(pca_servo_interface__action__PCAServo_Goal__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Goal__Sequence__are_equal(const pca_servo_interface__action__PCAServo_Goal__Sequence * lhs, const pca_servo_interface__action__PCAServo_Goal__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Goal__Sequence__copy(
  const pca_servo_interface__action__PCAServo_Goal__Sequence * input,
  pca_servo_interface__action__PCAServo_Goal__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_Result
 * )) before or use
 * pca_servo_interface__action__PCAServo_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Result__init(pca_servo_interface__action__PCAServo_Result * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Result__fini(pca_servo_interface__action__PCAServo_Result * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_Result *
pca_servo_interface__action__PCAServo_Result__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Result__destroy(pca_servo_interface__action__PCAServo_Result * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Result__are_equal(const pca_servo_interface__action__PCAServo_Result * lhs, const pca_servo_interface__action__PCAServo_Result * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Result__copy(
  const pca_servo_interface__action__PCAServo_Result * input,
  pca_servo_interface__action__PCAServo_Result * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Result__Sequence__init(pca_servo_interface__action__PCAServo_Result__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Result__Sequence__fini(pca_servo_interface__action__PCAServo_Result__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_Result__Sequence *
pca_servo_interface__action__PCAServo_Result__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Result__Sequence__destroy(pca_servo_interface__action__PCAServo_Result__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Result__Sequence__are_equal(const pca_servo_interface__action__PCAServo_Result__Sequence * lhs, const pca_servo_interface__action__PCAServo_Result__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Result__Sequence__copy(
  const pca_servo_interface__action__PCAServo_Result__Sequence * input,
  pca_servo_interface__action__PCAServo_Result__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_Feedback
 * )) before or use
 * pca_servo_interface__action__PCAServo_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Feedback__init(pca_servo_interface__action__PCAServo_Feedback * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Feedback__fini(pca_servo_interface__action__PCAServo_Feedback * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_Feedback *
pca_servo_interface__action__PCAServo_Feedback__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Feedback__destroy(pca_servo_interface__action__PCAServo_Feedback * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Feedback__are_equal(const pca_servo_interface__action__PCAServo_Feedback * lhs, const pca_servo_interface__action__PCAServo_Feedback * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Feedback__copy(
  const pca_servo_interface__action__PCAServo_Feedback * input,
  pca_servo_interface__action__PCAServo_Feedback * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Feedback__Sequence__init(pca_servo_interface__action__PCAServo_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Feedback__Sequence__fini(pca_servo_interface__action__PCAServo_Feedback__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_Feedback__Sequence *
pca_servo_interface__action__PCAServo_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_Feedback__Sequence__destroy(pca_servo_interface__action__PCAServo_Feedback__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Feedback__Sequence__are_equal(const pca_servo_interface__action__PCAServo_Feedback__Sequence * lhs, const pca_servo_interface__action__PCAServo_Feedback__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_Feedback__Sequence__copy(
  const pca_servo_interface__action__PCAServo_Feedback__Sequence * input,
  pca_servo_interface__action__PCAServo_Feedback__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_SendGoal_Request
 * )) before or use
 * pca_servo_interface__action__PCAServo_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Request__init(pca_servo_interface__action__PCAServo_SendGoal_Request * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Request__fini(pca_servo_interface__action__PCAServo_SendGoal_Request * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_SendGoal_Request *
pca_servo_interface__action__PCAServo_SendGoal_Request__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Request__destroy(pca_servo_interface__action__PCAServo_SendGoal_Request * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Request__are_equal(const pca_servo_interface__action__PCAServo_SendGoal_Request * lhs, const pca_servo_interface__action__PCAServo_SendGoal_Request * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Request__copy(
  const pca_servo_interface__action__PCAServo_SendGoal_Request * input,
  pca_servo_interface__action__PCAServo_SendGoal_Request * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__init(pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__fini(pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence *
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__destroy(pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__are_equal(const pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * lhs, const pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence__copy(
  const pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * input,
  pca_servo_interface__action__PCAServo_SendGoal_Request__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_SendGoal_Response
 * )) before or use
 * pca_servo_interface__action__PCAServo_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Response__init(pca_servo_interface__action__PCAServo_SendGoal_Response * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Response__fini(pca_servo_interface__action__PCAServo_SendGoal_Response * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_SendGoal_Response *
pca_servo_interface__action__PCAServo_SendGoal_Response__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Response__destroy(pca_servo_interface__action__PCAServo_SendGoal_Response * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Response__are_equal(const pca_servo_interface__action__PCAServo_SendGoal_Response * lhs, const pca_servo_interface__action__PCAServo_SendGoal_Response * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Response__copy(
  const pca_servo_interface__action__PCAServo_SendGoal_Response * input,
  pca_servo_interface__action__PCAServo_SendGoal_Response * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__init(pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__fini(pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence *
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__destroy(pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__are_equal(const pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * lhs, const pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence__copy(
  const pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * input,
  pca_servo_interface__action__PCAServo_SendGoal_Response__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_GetResult_Request
 * )) before or use
 * pca_servo_interface__action__PCAServo_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Request__init(pca_servo_interface__action__PCAServo_GetResult_Request * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Request__fini(pca_servo_interface__action__PCAServo_GetResult_Request * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_GetResult_Request *
pca_servo_interface__action__PCAServo_GetResult_Request__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Request__destroy(pca_servo_interface__action__PCAServo_GetResult_Request * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Request__are_equal(const pca_servo_interface__action__PCAServo_GetResult_Request * lhs, const pca_servo_interface__action__PCAServo_GetResult_Request * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Request__copy(
  const pca_servo_interface__action__PCAServo_GetResult_Request * input,
  pca_servo_interface__action__PCAServo_GetResult_Request * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__init(pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__fini(pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence *
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__destroy(pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__are_equal(const pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * lhs, const pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Request__Sequence__copy(
  const pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * input,
  pca_servo_interface__action__PCAServo_GetResult_Request__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_GetResult_Response
 * )) before or use
 * pca_servo_interface__action__PCAServo_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Response__init(pca_servo_interface__action__PCAServo_GetResult_Response * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Response__fini(pca_servo_interface__action__PCAServo_GetResult_Response * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_GetResult_Response *
pca_servo_interface__action__PCAServo_GetResult_Response__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Response__destroy(pca_servo_interface__action__PCAServo_GetResult_Response * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Response__are_equal(const pca_servo_interface__action__PCAServo_GetResult_Response * lhs, const pca_servo_interface__action__PCAServo_GetResult_Response * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Response__copy(
  const pca_servo_interface__action__PCAServo_GetResult_Response * input,
  pca_servo_interface__action__PCAServo_GetResult_Response * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__init(pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__fini(pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence *
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__destroy(pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__are_equal(const pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * lhs, const pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_GetResult_Response__Sequence__copy(
  const pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * input,
  pca_servo_interface__action__PCAServo_GetResult_Response__Sequence * output);

/// Initialize action/PCAServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pca_servo_interface__action__PCAServo_FeedbackMessage
 * )) before or use
 * pca_servo_interface__action__PCAServo_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_FeedbackMessage__init(pca_servo_interface__action__PCAServo_FeedbackMessage * msg);

/// Finalize action/PCAServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_FeedbackMessage__fini(pca_servo_interface__action__PCAServo_FeedbackMessage * msg);

/// Create action/PCAServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pca_servo_interface__action__PCAServo_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_FeedbackMessage *
pca_servo_interface__action__PCAServo_FeedbackMessage__create();

/// Destroy action/PCAServo message.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_FeedbackMessage__destroy(pca_servo_interface__action__PCAServo_FeedbackMessage * msg);

/// Check for action/PCAServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_FeedbackMessage__are_equal(const pca_servo_interface__action__PCAServo_FeedbackMessage * lhs, const pca_servo_interface__action__PCAServo_FeedbackMessage * rhs);

/// Copy a action/PCAServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_FeedbackMessage__copy(
  const pca_servo_interface__action__PCAServo_FeedbackMessage * input,
  pca_servo_interface__action__PCAServo_FeedbackMessage * output);

/// Initialize array of action/PCAServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * pca_servo_interface__action__PCAServo_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__init(pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__fini(pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * array);

/// Create array of action/PCAServo messages.
/**
 * It allocates the memory for the array and calls
 * pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence *
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PCAServo messages.
/**
 * It calls
 * pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
void
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__destroy(pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * array);

/// Check for action/PCAServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__are_equal(const pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * lhs, const pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/PCAServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pca_servo_interface
bool
pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence__copy(
  const pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * input,
  pca_servo_interface__action__PCAServo_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PCA_SERVO_INTERFACE__ACTION__DETAIL__PCA_SERVO__FUNCTIONS_H_
