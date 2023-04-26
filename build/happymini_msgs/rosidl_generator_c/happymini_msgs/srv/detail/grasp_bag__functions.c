// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from happymini_msgs:srv/GraspBag.idl
// generated code does not contain a copyright notice
#include "happymini_msgs/srv/detail/grasp_bag__functions.h"

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
happymini_msgs__srv__GraspBag_Request__init(happymini_msgs__srv__GraspBag_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_right
  if (!rosidl_runtime_c__String__init(&msg->left_right)) {
    happymini_msgs__srv__GraspBag_Request__fini(msg);
    return false;
  }
  // coordinate
  if (!rosidl_runtime_c__double__Sequence__init(&msg->coordinate, 0)) {
    happymini_msgs__srv__GraspBag_Request__fini(msg);
    return false;
  }
  return true;
}

void
happymini_msgs__srv__GraspBag_Request__fini(happymini_msgs__srv__GraspBag_Request * msg)
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
happymini_msgs__srv__GraspBag_Request__are_equal(const happymini_msgs__srv__GraspBag_Request * lhs, const happymini_msgs__srv__GraspBag_Request * rhs)
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
happymini_msgs__srv__GraspBag_Request__copy(
  const happymini_msgs__srv__GraspBag_Request * input,
  happymini_msgs__srv__GraspBag_Request * output)
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

happymini_msgs__srv__GraspBag_Request *
happymini_msgs__srv__GraspBag_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__srv__GraspBag_Request * msg = (happymini_msgs__srv__GraspBag_Request *)allocator.allocate(sizeof(happymini_msgs__srv__GraspBag_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__srv__GraspBag_Request));
  bool success = happymini_msgs__srv__GraspBag_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__srv__GraspBag_Request__destroy(happymini_msgs__srv__GraspBag_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__srv__GraspBag_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__srv__GraspBag_Request__Sequence__init(happymini_msgs__srv__GraspBag_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__srv__GraspBag_Request * data = NULL;

  if (size) {
    data = (happymini_msgs__srv__GraspBag_Request *)allocator.zero_allocate(size, sizeof(happymini_msgs__srv__GraspBag_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__srv__GraspBag_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__srv__GraspBag_Request__fini(&data[i - 1]);
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
happymini_msgs__srv__GraspBag_Request__Sequence__fini(happymini_msgs__srv__GraspBag_Request__Sequence * array)
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
      happymini_msgs__srv__GraspBag_Request__fini(&array->data[i]);
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

happymini_msgs__srv__GraspBag_Request__Sequence *
happymini_msgs__srv__GraspBag_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__srv__GraspBag_Request__Sequence * array = (happymini_msgs__srv__GraspBag_Request__Sequence *)allocator.allocate(sizeof(happymini_msgs__srv__GraspBag_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__srv__GraspBag_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__srv__GraspBag_Request__Sequence__destroy(happymini_msgs__srv__GraspBag_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__srv__GraspBag_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__srv__GraspBag_Request__Sequence__are_equal(const happymini_msgs__srv__GraspBag_Request__Sequence * lhs, const happymini_msgs__srv__GraspBag_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__srv__GraspBag_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__srv__GraspBag_Request__Sequence__copy(
  const happymini_msgs__srv__GraspBag_Request__Sequence * input,
  happymini_msgs__srv__GraspBag_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__srv__GraspBag_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__srv__GraspBag_Request * data =
      (happymini_msgs__srv__GraspBag_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__srv__GraspBag_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__srv__GraspBag_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__srv__GraspBag_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
happymini_msgs__srv__GraspBag_Response__init(happymini_msgs__srv__GraspBag_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
happymini_msgs__srv__GraspBag_Response__fini(happymini_msgs__srv__GraspBag_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
happymini_msgs__srv__GraspBag_Response__are_equal(const happymini_msgs__srv__GraspBag_Response * lhs, const happymini_msgs__srv__GraspBag_Response * rhs)
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
happymini_msgs__srv__GraspBag_Response__copy(
  const happymini_msgs__srv__GraspBag_Response * input,
  happymini_msgs__srv__GraspBag_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

happymini_msgs__srv__GraspBag_Response *
happymini_msgs__srv__GraspBag_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__srv__GraspBag_Response * msg = (happymini_msgs__srv__GraspBag_Response *)allocator.allocate(sizeof(happymini_msgs__srv__GraspBag_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(happymini_msgs__srv__GraspBag_Response));
  bool success = happymini_msgs__srv__GraspBag_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
happymini_msgs__srv__GraspBag_Response__destroy(happymini_msgs__srv__GraspBag_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    happymini_msgs__srv__GraspBag_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
happymini_msgs__srv__GraspBag_Response__Sequence__init(happymini_msgs__srv__GraspBag_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__srv__GraspBag_Response * data = NULL;

  if (size) {
    data = (happymini_msgs__srv__GraspBag_Response *)allocator.zero_allocate(size, sizeof(happymini_msgs__srv__GraspBag_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = happymini_msgs__srv__GraspBag_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        happymini_msgs__srv__GraspBag_Response__fini(&data[i - 1]);
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
happymini_msgs__srv__GraspBag_Response__Sequence__fini(happymini_msgs__srv__GraspBag_Response__Sequence * array)
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
      happymini_msgs__srv__GraspBag_Response__fini(&array->data[i]);
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

happymini_msgs__srv__GraspBag_Response__Sequence *
happymini_msgs__srv__GraspBag_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  happymini_msgs__srv__GraspBag_Response__Sequence * array = (happymini_msgs__srv__GraspBag_Response__Sequence *)allocator.allocate(sizeof(happymini_msgs__srv__GraspBag_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = happymini_msgs__srv__GraspBag_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
happymini_msgs__srv__GraspBag_Response__Sequence__destroy(happymini_msgs__srv__GraspBag_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    happymini_msgs__srv__GraspBag_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
happymini_msgs__srv__GraspBag_Response__Sequence__are_equal(const happymini_msgs__srv__GraspBag_Response__Sequence * lhs, const happymini_msgs__srv__GraspBag_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!happymini_msgs__srv__GraspBag_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
happymini_msgs__srv__GraspBag_Response__Sequence__copy(
  const happymini_msgs__srv__GraspBag_Response__Sequence * input,
  happymini_msgs__srv__GraspBag_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(happymini_msgs__srv__GraspBag_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    happymini_msgs__srv__GraspBag_Response * data =
      (happymini_msgs__srv__GraspBag_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!happymini_msgs__srv__GraspBag_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          happymini_msgs__srv__GraspBag_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!happymini_msgs__srv__GraspBag_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
