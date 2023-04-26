// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from happymini_msgs:srv/BagLocalization.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__FUNCTIONS_H_
#define HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "happymini_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "happymini_msgs/srv/detail/bag_localization__struct.h"

/// Initialize srv/BagLocalization message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymini_msgs__srv__BagLocalization_Request
 * )) before or use
 * happymini_msgs__srv__BagLocalization_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Request__init(happymini_msgs__srv__BagLocalization_Request * msg);

/// Finalize srv/BagLocalization message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Request__fini(happymini_msgs__srv__BagLocalization_Request * msg);

/// Create srv/BagLocalization message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymini_msgs__srv__BagLocalization_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
happymini_msgs__srv__BagLocalization_Request *
happymini_msgs__srv__BagLocalization_Request__create();

/// Destroy srv/BagLocalization message.
/**
 * It calls
 * happymini_msgs__srv__BagLocalization_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Request__destroy(happymini_msgs__srv__BagLocalization_Request * msg);

/// Check for srv/BagLocalization message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Request__are_equal(const happymini_msgs__srv__BagLocalization_Request * lhs, const happymini_msgs__srv__BagLocalization_Request * rhs);

/// Copy a srv/BagLocalization message.
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
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Request__copy(
  const happymini_msgs__srv__BagLocalization_Request * input,
  happymini_msgs__srv__BagLocalization_Request * output);

/// Initialize array of srv/BagLocalization messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymini_msgs__srv__BagLocalization_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Request__Sequence__init(happymini_msgs__srv__BagLocalization_Request__Sequence * array, size_t size);

/// Finalize array of srv/BagLocalization messages.
/**
 * It calls
 * happymini_msgs__srv__BagLocalization_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Request__Sequence__fini(happymini_msgs__srv__BagLocalization_Request__Sequence * array);

/// Create array of srv/BagLocalization messages.
/**
 * It allocates the memory for the array and calls
 * happymini_msgs__srv__BagLocalization_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
happymini_msgs__srv__BagLocalization_Request__Sequence *
happymini_msgs__srv__BagLocalization_Request__Sequence__create(size_t size);

/// Destroy array of srv/BagLocalization messages.
/**
 * It calls
 * happymini_msgs__srv__BagLocalization_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Request__Sequence__destroy(happymini_msgs__srv__BagLocalization_Request__Sequence * array);

/// Check for srv/BagLocalization message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Request__Sequence__are_equal(const happymini_msgs__srv__BagLocalization_Request__Sequence * lhs, const happymini_msgs__srv__BagLocalization_Request__Sequence * rhs);

/// Copy an array of srv/BagLocalization messages.
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
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Request__Sequence__copy(
  const happymini_msgs__srv__BagLocalization_Request__Sequence * input,
  happymini_msgs__srv__BagLocalization_Request__Sequence * output);

/// Initialize srv/BagLocalization message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * happymini_msgs__srv__BagLocalization_Response
 * )) before or use
 * happymini_msgs__srv__BagLocalization_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Response__init(happymini_msgs__srv__BagLocalization_Response * msg);

/// Finalize srv/BagLocalization message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Response__fini(happymini_msgs__srv__BagLocalization_Response * msg);

/// Create srv/BagLocalization message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * happymini_msgs__srv__BagLocalization_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
happymini_msgs__srv__BagLocalization_Response *
happymini_msgs__srv__BagLocalization_Response__create();

/// Destroy srv/BagLocalization message.
/**
 * It calls
 * happymini_msgs__srv__BagLocalization_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Response__destroy(happymini_msgs__srv__BagLocalization_Response * msg);

/// Check for srv/BagLocalization message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Response__are_equal(const happymini_msgs__srv__BagLocalization_Response * lhs, const happymini_msgs__srv__BagLocalization_Response * rhs);

/// Copy a srv/BagLocalization message.
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
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Response__copy(
  const happymini_msgs__srv__BagLocalization_Response * input,
  happymini_msgs__srv__BagLocalization_Response * output);

/// Initialize array of srv/BagLocalization messages.
/**
 * It allocates the memory for the number of elements and calls
 * happymini_msgs__srv__BagLocalization_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Response__Sequence__init(happymini_msgs__srv__BagLocalization_Response__Sequence * array, size_t size);

/// Finalize array of srv/BagLocalization messages.
/**
 * It calls
 * happymini_msgs__srv__BagLocalization_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Response__Sequence__fini(happymini_msgs__srv__BagLocalization_Response__Sequence * array);

/// Create array of srv/BagLocalization messages.
/**
 * It allocates the memory for the array and calls
 * happymini_msgs__srv__BagLocalization_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
happymini_msgs__srv__BagLocalization_Response__Sequence *
happymini_msgs__srv__BagLocalization_Response__Sequence__create(size_t size);

/// Destroy array of srv/BagLocalization messages.
/**
 * It calls
 * happymini_msgs__srv__BagLocalization_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
void
happymini_msgs__srv__BagLocalization_Response__Sequence__destroy(happymini_msgs__srv__BagLocalization_Response__Sequence * array);

/// Check for srv/BagLocalization message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Response__Sequence__are_equal(const happymini_msgs__srv__BagLocalization_Response__Sequence * lhs, const happymini_msgs__srv__BagLocalization_Response__Sequence * rhs);

/// Copy an array of srv/BagLocalization messages.
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
ROSIDL_GENERATOR_C_PUBLIC_happymini_msgs
bool
happymini_msgs__srv__BagLocalization_Response__Sequence__copy(
  const happymini_msgs__srv__BagLocalization_Response__Sequence * input,
  happymini_msgs__srv__BagLocalization_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMINI_MSGS__SRV__DETAIL__BAG_LOCALIZATION__FUNCTIONS_H_
