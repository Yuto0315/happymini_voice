// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from happymini_msgs:action/GraspBag.idl
// generated code does not contain a copyright notice
#include "happymini_msgs/action/detail/grasp_bag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left_right`
#include "rosidl_runtime_c/string_functions.h"
// Member `coordinate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
happymini_msgs__action__GraspBag_Goal__init(happymini_msgs__action__GraspBag_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // left_right
  if (!rosidl_runtime_c__String__init(&msg->left_right)) {
    happymini_msgs__action__GraspBag_Goal__fini(msg);
    return false;
  }
  // coordinate
  if (!rosidl_runtime_c__double__Sequence__init(&msg->coordinate, 0)) {
    happymini_msgs__action__GraspBag_Goal__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_Goal__fini(happymini_msgs__action__GraspBag_Goal * msg)
{
  if (!msg) {
    return;
  }
  // left_right
  rosidl_runtime_c__String__fini(&msg->left_right);
  // coordinate
  rosidl_runtime_c__double__Sequence__fini(&msg->coordinate);
}

bool
happymini_msgs__action__GraspBag_Goal__are_equal(const happymini_msgs__action__GraspBag_Goal * lhs, const happymini_msgs__action__GraspBag_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_right
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->left_right), &(rhs->left_right)))
  {
    return false;
  }
  // coordinate
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->coordinate), &(rhs->coordinate)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_Goal__copy(
  const happymini_msgs__action__GraspBag_Goal * input,
  happymini_msgs__action__GraspBag_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // left_right
  if (!rosidl_runtime_c__String__copy(
      &(input->left_right), &(output->left_right)))
  {
    return false;
  }
  // coordinate
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->coordinate), &(output->coordinate)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_Goal *
happymini_msgs__action__GraspBag_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Goal * msg = (happymini_msgs__action__GraspBag_Goal *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_Goal));
  bool success = happymini_msgs__action__GraspBag_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_Goal__destroy(happymini_msgs__action__GraspBag_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_Goal__Sequence__init(happymini_msgs__action__GraspBag_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Goal * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_Goal *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_Goal__Sequence__fini(happymini_msgs__action__GraspBag_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_Goal__Sequence *
happymini_msgs__action__GraspBag_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Goal__Sequence * array = (happymini_msgs__action__GraspBag_Goal__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_Goal__Sequence__destroy(happymini_msgs__action__GraspBag_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_Goal__Sequence__are_equal(const happymini_msgs__action__GraspBag_Goal__Sequence * lhs, const happymini_msgs__action__GraspBag_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_Goal__Sequence__copy(
  const happymini_msgs__action__GraspBag_Goal__Sequence * input,
  happymini_msgs__action__GraspBag_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_Goal * data =
      (happymini_msgs__action__GraspBag_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
happymini_msgs__action__GraspBag_Result__init(happymini_msgs__action__GraspBag_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
happymini_msgs__action__GraspBag_Result__fini(happymini_msgs__action__GraspBag_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
happymini_msgs__action__GraspBag_Result__are_equal(const happymini_msgs__action__GraspBag_Result * lhs, const happymini_msgs__action__GraspBag_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_Result__copy(
  const happymini_msgs__action__GraspBag_Result * input,
  happymini_msgs__action__GraspBag_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

happymini_msgs__action__GraspBag_Result *
happymini_msgs__action__GraspBag_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Result * msg = (happymini_msgs__action__GraspBag_Result *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_Result));
  bool success = happymini_msgs__action__GraspBag_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_Result__destroy(happymini_msgs__action__GraspBag_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_Result__Sequence__init(happymini_msgs__action__GraspBag_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Result * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_Result *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_Result__Sequence__fini(happymini_msgs__action__GraspBag_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_Result__Sequence *
happymini_msgs__action__GraspBag_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Result__Sequence * array = (happymini_msgs__action__GraspBag_Result__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_Result__Sequence__destroy(happymini_msgs__action__GraspBag_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_Result__Sequence__are_equal(const happymini_msgs__action__GraspBag_Result__Sequence * lhs, const happymini_msgs__action__GraspBag_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_Result__Sequence__copy(
  const happymini_msgs__action__GraspBag_Result__Sequence * input,
  happymini_msgs__action__GraspBag_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_Result * data =
      (happymini_msgs__action__GraspBag_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
happymini_msgs__action__GraspBag_Feedback__init(happymini_msgs__action__GraspBag_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    happymini_msgs__action__GraspBag_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_Feedback__fini(happymini_msgs__action__GraspBag_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
happymini_msgs__action__GraspBag_Feedback__are_equal(const happymini_msgs__action__GraspBag_Feedback * lhs, const happymini_msgs__action__GraspBag_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_Feedback__copy(
  const happymini_msgs__action__GraspBag_Feedback * input,
  happymini_msgs__action__GraspBag_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_Feedback *
happymini_msgs__action__GraspBag_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Feedback * msg = (happymini_msgs__action__GraspBag_Feedback *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_Feedback));
  bool success = happymini_msgs__action__GraspBag_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_Feedback__destroy(happymini_msgs__action__GraspBag_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_Feedback__Sequence__init(happymini_msgs__action__GraspBag_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Feedback * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_Feedback *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_Feedback__Sequence__fini(happymini_msgs__action__GraspBag_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_Feedback__Sequence *
happymini_msgs__action__GraspBag_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_Feedback__Sequence * array = (happymini_msgs__action__GraspBag_Feedback__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_Feedback__Sequence__destroy(happymini_msgs__action__GraspBag_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_Feedback__Sequence__are_equal(const happymini_msgs__action__GraspBag_Feedback__Sequence * lhs, const happymini_msgs__action__GraspBag_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_Feedback__Sequence__copy(
  const happymini_msgs__action__GraspBag_Feedback__Sequence * input,
  happymini_msgs__action__GraspBag_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_Feedback * data =
      (happymini_msgs__action__GraspBag_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"

bool
happymini_msgs__action__GraspBag_SendGoal_Request__init(happymini_msgs__action__GraspBag_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    happymini_msgs__action__GraspBag_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!happymini_msgs__action__GraspBag_Goal__init(&msg->goal)) {
    happymini_msgs__action__GraspBag_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_SendGoal_Request__fini(happymini_msgs__action__GraspBag_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  happymini_msgs__action__GraspBag_Goal__fini(&msg->goal);
}

bool
happymini_msgs__action__GraspBag_SendGoal_Request__are_equal(const happymini_msgs__action__GraspBag_SendGoal_Request * lhs, const happymini_msgs__action__GraspBag_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!happymini_msgs__action__GraspBag_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_SendGoal_Request__copy(
  const happymini_msgs__action__GraspBag_SendGoal_Request * input,
  happymini_msgs__action__GraspBag_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!happymini_msgs__action__GraspBag_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_SendGoal_Request *
happymini_msgs__action__GraspBag_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_SendGoal_Request * msg = (happymini_msgs__action__GraspBag_SendGoal_Request *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_SendGoal_Request));
  bool success = happymini_msgs__action__GraspBag_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_SendGoal_Request__destroy(happymini_msgs__action__GraspBag_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__init(happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_SendGoal_Request * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_SendGoal_Request *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__fini(happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_SendGoal_Request__Sequence *
happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * array = (happymini_msgs__action__GraspBag_SendGoal_Request__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__destroy(happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__are_equal(const happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * lhs, const happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_SendGoal_Request__Sequence__copy(
  const happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * input,
  happymini_msgs__action__GraspBag_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_SendGoal_Request * data =
      (happymini_msgs__action__GraspBag_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
happymini_msgs__action__GraspBag_SendGoal_Response__init(happymini_msgs__action__GraspBag_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    happymini_msgs__action__GraspBag_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_SendGoal_Response__fini(happymini_msgs__action__GraspBag_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
happymini_msgs__action__GraspBag_SendGoal_Response__are_equal(const happymini_msgs__action__GraspBag_SendGoal_Response * lhs, const happymini_msgs__action__GraspBag_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_SendGoal_Response__copy(
  const happymini_msgs__action__GraspBag_SendGoal_Response * input,
  happymini_msgs__action__GraspBag_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_SendGoal_Response *
happymini_msgs__action__GraspBag_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_SendGoal_Response * msg = (happymini_msgs__action__GraspBag_SendGoal_Response *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_SendGoal_Response));
  bool success = happymini_msgs__action__GraspBag_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_SendGoal_Response__destroy(happymini_msgs__action__GraspBag_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__init(happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_SendGoal_Response * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_SendGoal_Response *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__fini(happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_SendGoal_Response__Sequence *
happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * array = (happymini_msgs__action__GraspBag_SendGoal_Response__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__destroy(happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__are_equal(const happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * lhs, const happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_SendGoal_Response__Sequence__copy(
  const happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * input,
  happymini_msgs__action__GraspBag_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_SendGoal_Response * data =
      (happymini_msgs__action__GraspBag_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
happymini_msgs__action__GraspBag_GetResult_Request__init(happymini_msgs__action__GraspBag_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    happymini_msgs__action__GraspBag_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_GetResult_Request__fini(happymini_msgs__action__GraspBag_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
happymini_msgs__action__GraspBag_GetResult_Request__are_equal(const happymini_msgs__action__GraspBag_GetResult_Request * lhs, const happymini_msgs__action__GraspBag_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_GetResult_Request__copy(
  const happymini_msgs__action__GraspBag_GetResult_Request * input,
  happymini_msgs__action__GraspBag_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_GetResult_Request *
happymini_msgs__action__GraspBag_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_GetResult_Request * msg = (happymini_msgs__action__GraspBag_GetResult_Request *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_GetResult_Request));
  bool success = happymini_msgs__action__GraspBag_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_GetResult_Request__destroy(happymini_msgs__action__GraspBag_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_GetResult_Request__Sequence__init(happymini_msgs__action__GraspBag_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_GetResult_Request * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_GetResult_Request *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_GetResult_Request__Sequence__fini(happymini_msgs__action__GraspBag_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_GetResult_Request__Sequence *
happymini_msgs__action__GraspBag_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_GetResult_Request__Sequence * array = (happymini_msgs__action__GraspBag_GetResult_Request__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_GetResult_Request__Sequence__destroy(happymini_msgs__action__GraspBag_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_GetResult_Request__Sequence__are_equal(const happymini_msgs__action__GraspBag_GetResult_Request__Sequence * lhs, const happymini_msgs__action__GraspBag_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_GetResult_Request__Sequence__copy(
  const happymini_msgs__action__GraspBag_GetResult_Request__Sequence * input,
  happymini_msgs__action__GraspBag_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_GetResult_Request * data =
      (happymini_msgs__action__GraspBag_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"

bool
happymini_msgs__action__GraspBag_GetResult_Response__init(happymini_msgs__action__GraspBag_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!happymini_msgs__action__GraspBag_Result__init(&msg->result)) {
    happymini_msgs__action__GraspBag_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_GetResult_Response__fini(happymini_msgs__action__GraspBag_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  happymini_msgs__action__GraspBag_Result__fini(&msg->result);
}

bool
happymini_msgs__action__GraspBag_GetResult_Response__are_equal(const happymini_msgs__action__GraspBag_GetResult_Response * lhs, const happymini_msgs__action__GraspBag_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!happymini_msgs__action__GraspBag_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_GetResult_Response__copy(
  const happymini_msgs__action__GraspBag_GetResult_Response * input,
  happymini_msgs__action__GraspBag_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!happymini_msgs__action__GraspBag_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_GetResult_Response *
happymini_msgs__action__GraspBag_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_GetResult_Response * msg = (happymini_msgs__action__GraspBag_GetResult_Response *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_GetResult_Response));
  bool success = happymini_msgs__action__GraspBag_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_GetResult_Response__destroy(happymini_msgs__action__GraspBag_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_GetResult_Response__Sequence__init(happymini_msgs__action__GraspBag_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_GetResult_Response * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_GetResult_Response *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_GetResult_Response__Sequence__fini(happymini_msgs__action__GraspBag_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_GetResult_Response__Sequence *
happymini_msgs__action__GraspBag_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_GetResult_Response__Sequence * array = (happymini_msgs__action__GraspBag_GetResult_Response__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_GetResult_Response__Sequence__destroy(happymini_msgs__action__GraspBag_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_GetResult_Response__Sequence__are_equal(const happymini_msgs__action__GraspBag_GetResult_Response__Sequence * lhs, const happymini_msgs__action__GraspBag_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_GetResult_Response__Sequence__copy(
  const happymini_msgs__action__GraspBag_GetResult_Response__Sequence * input,
  happymini_msgs__action__GraspBag_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_GetResult_Response * data =
      (happymini_msgs__action__GraspBag_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "happymini_msgs/action/detail/grasp_bag__functions.h"

bool
happymini_msgs__action__GraspBag_FeedbackMessage__init(happymini_msgs__action__GraspBag_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    happymini_msgs__action__GraspBag_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!happymini_msgs__action__GraspBag_Feedback__init(&msg->feedback)) {
    happymini_msgs__action__GraspBag_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__action__GraspBag_FeedbackMessage__fini(happymini_msgs__action__GraspBag_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  happymini_msgs__action__GraspBag_Feedback__fini(&msg->feedback);
}

bool
happymini_msgs__action__GraspBag_FeedbackMessage__are_equal(const happymini_msgs__action__GraspBag_FeedbackMessage * lhs, const happymini_msgs__action__GraspBag_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!happymini_msgs__action__GraspBag_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_FeedbackMessage__copy(
  const happymini_msgs__action__GraspBag_FeedbackMessage * input,
  happymini_msgs__action__GraspBag_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!happymini_msgs__action__GraspBag_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

happymini_msgs__action__GraspBag_FeedbackMessage *
happymini_msgs__action__GraspBag_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_FeedbackMessage * msg = (happymini_msgs__action__GraspBag_FeedbackMessage *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__action__GraspBag_FeedbackMessage));
  bool success = happymini_msgs__action__GraspBag_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__action__GraspBag_FeedbackMessage__destroy(happymini_msgs__action__GraspBag_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__action__GraspBag_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__init(happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_FeedbackMessage * data = NULL;

  if (size) {
    data = (happymini_msgs__action__GraspBag_FeedbackMessage *)allocator.zero_allocate(size, sizeof(happymini_msgs__action__GraspBag_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__action__GraspBag_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__action__GraspBag_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__fini(happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      happymini_msgs__action__GraspBag_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

happymini_msgs__action__GraspBag_FeedbackMessage__Sequence *
happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * array = (happymini_msgs__action__GraspBag_FeedbackMessage__Sequence *)allocator.allocate(sizeof(happymini_msgs__action__GraspBag_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__destroy(happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__are_equal(const happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * lhs, const happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__action__GraspBag_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__action__GraspBag_FeedbackMessage__Sequence__copy(
  const happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * input,
  happymini_msgs__action__GraspBag_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__action__GraspBag_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__action__GraspBag_FeedbackMessage * data =
      (happymini_msgs__action__GraspBag_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__action__GraspBag_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__action__GraspBag_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__action__GraspBag_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
