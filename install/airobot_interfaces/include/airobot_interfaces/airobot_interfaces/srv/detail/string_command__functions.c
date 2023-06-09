// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from airobot_interfaces:srv/StringCommand.idl
// generated code does not contain a copyright notice
#include "airobot_interfaces/srv/detail/string_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
airobot_interfaces__srv__StringCommand_Request__init(airobot_interfaces__srv__StringCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    airobot_interfaces__srv__StringCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
airobot_interfaces__srv__StringCommand_Request__fini(airobot_interfaces__srv__StringCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
airobot_interfaces__srv__StringCommand_Request__are_equal(const airobot_interfaces__srv__StringCommand_Request * lhs, const airobot_interfaces__srv__StringCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
airobot_interfaces__srv__StringCommand_Request__copy(
  const airobot_interfaces__srv__StringCommand_Request * input,
  airobot_interfaces__srv__StringCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

airobot_interfaces__srv__StringCommand_Request *
airobot_interfaces__srv__StringCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  airobot_interfaces__srv__StringCommand_Request * msg = (airobot_interfaces__srv__StringCommand_Request *)allocator.allocate(sizeof(airobot_interfaces__srv__StringCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(airobot_interfaces__srv__StringCommand_Request));
  bool success = airobot_interfaces__srv__StringCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
airobot_interfaces__srv__StringCommand_Request__destroy(airobot_interfaces__srv__StringCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    airobot_interfaces__srv__StringCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
airobot_interfaces__srv__StringCommand_Request__Sequence__init(airobot_interfaces__srv__StringCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  airobot_interfaces__srv__StringCommand_Request * data = NULL;

  if (size) {
    data = (airobot_interfaces__srv__StringCommand_Request *)allocator.zero_allocate(size, sizeof(airobot_interfaces__srv__StringCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = airobot_interfaces__srv__StringCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        airobot_interfaces__srv__StringCommand_Request__fini(&data[i - 1]);
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
airobot_interfaces__srv__StringCommand_Request__Sequence__fini(airobot_interfaces__srv__StringCommand_Request__Sequence * array)
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
      airobot_interfaces__srv__StringCommand_Request__fini(&array->data[i]);
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

airobot_interfaces__srv__StringCommand_Request__Sequence *
airobot_interfaces__srv__StringCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  airobot_interfaces__srv__StringCommand_Request__Sequence * array = (airobot_interfaces__srv__StringCommand_Request__Sequence *)allocator.allocate(sizeof(airobot_interfaces__srv__StringCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = airobot_interfaces__srv__StringCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
airobot_interfaces__srv__StringCommand_Request__Sequence__destroy(airobot_interfaces__srv__StringCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    airobot_interfaces__srv__StringCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
airobot_interfaces__srv__StringCommand_Request__Sequence__are_equal(const airobot_interfaces__srv__StringCommand_Request__Sequence * lhs, const airobot_interfaces__srv__StringCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!airobot_interfaces__srv__StringCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
airobot_interfaces__srv__StringCommand_Request__Sequence__copy(
  const airobot_interfaces__srv__StringCommand_Request__Sequence * input,
  airobot_interfaces__srv__StringCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(airobot_interfaces__srv__StringCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    airobot_interfaces__srv__StringCommand_Request * data =
      (airobot_interfaces__srv__StringCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!airobot_interfaces__srv__StringCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          airobot_interfaces__srv__StringCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!airobot_interfaces__srv__StringCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `answer`
// Member `answer_gender`
// Member `answer_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
airobot_interfaces__srv__StringCommand_Response__init(airobot_interfaces__srv__StringCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__init(&msg->answer)) {
    airobot_interfaces__srv__StringCommand_Response__fini(msg);
    return false;
  }
  // answer_gender
  if (!rosidl_runtime_c__String__init(&msg->answer_gender)) {
    airobot_interfaces__srv__StringCommand_Response__fini(msg);
    return false;
  }
  // answer_name
  if (!rosidl_runtime_c__String__init(&msg->answer_name)) {
    airobot_interfaces__srv__StringCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
airobot_interfaces__srv__StringCommand_Response__fini(airobot_interfaces__srv__StringCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // answer
  rosidl_runtime_c__String__fini(&msg->answer);
  // answer_gender
  rosidl_runtime_c__String__fini(&msg->answer_gender);
  // answer_name
  rosidl_runtime_c__String__fini(&msg->answer_name);
}

bool
airobot_interfaces__srv__StringCommand_Response__are_equal(const airobot_interfaces__srv__StringCommand_Response * lhs, const airobot_interfaces__srv__StringCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer), &(rhs->answer)))
  {
    return false;
  }
  // answer_gender
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer_gender), &(rhs->answer_gender)))
  {
    return false;
  }
  // answer_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer_name), &(rhs->answer_name)))
  {
    return false;
  }
  return true;
}

bool
airobot_interfaces__srv__StringCommand_Response__copy(
  const airobot_interfaces__srv__StringCommand_Response * input,
  airobot_interfaces__srv__StringCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__copy(
      &(input->answer), &(output->answer)))
  {
    return false;
  }
  // answer_gender
  if (!rosidl_runtime_c__String__copy(
      &(input->answer_gender), &(output->answer_gender)))
  {
    return false;
  }
  // answer_name
  if (!rosidl_runtime_c__String__copy(
      &(input->answer_name), &(output->answer_name)))
  {
    return false;
  }
  return true;
}

airobot_interfaces__srv__StringCommand_Response *
airobot_interfaces__srv__StringCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  airobot_interfaces__srv__StringCommand_Response * msg = (airobot_interfaces__srv__StringCommand_Response *)allocator.allocate(sizeof(airobot_interfaces__srv__StringCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(airobot_interfaces__srv__StringCommand_Response));
  bool success = airobot_interfaces__srv__StringCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
airobot_interfaces__srv__StringCommand_Response__destroy(airobot_interfaces__srv__StringCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    airobot_interfaces__srv__StringCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
airobot_interfaces__srv__StringCommand_Response__Sequence__init(airobot_interfaces__srv__StringCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  airobot_interfaces__srv__StringCommand_Response * data = NULL;

  if (size) {
    data = (airobot_interfaces__srv__StringCommand_Response *)allocator.zero_allocate(size, sizeof(airobot_interfaces__srv__StringCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = airobot_interfaces__srv__StringCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        airobot_interfaces__srv__StringCommand_Response__fini(&data[i - 1]);
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
airobot_interfaces__srv__StringCommand_Response__Sequence__fini(airobot_interfaces__srv__StringCommand_Response__Sequence * array)
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
      airobot_interfaces__srv__StringCommand_Response__fini(&array->data[i]);
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

airobot_interfaces__srv__StringCommand_Response__Sequence *
airobot_interfaces__srv__StringCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  airobot_interfaces__srv__StringCommand_Response__Sequence * array = (airobot_interfaces__srv__StringCommand_Response__Sequence *)allocator.allocate(sizeof(airobot_interfaces__srv__StringCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = airobot_interfaces__srv__StringCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
airobot_interfaces__srv__StringCommand_Response__Sequence__destroy(airobot_interfaces__srv__StringCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    airobot_interfaces__srv__StringCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
airobot_interfaces__srv__StringCommand_Response__Sequence__are_equal(const airobot_interfaces__srv__StringCommand_Response__Sequence * lhs, const airobot_interfaces__srv__StringCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!airobot_interfaces__srv__StringCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
airobot_interfaces__srv__StringCommand_Response__Sequence__copy(
  const airobot_interfaces__srv__StringCommand_Response__Sequence * input,
  airobot_interfaces__srv__StringCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(airobot_interfaces__srv__StringCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    airobot_interfaces__srv__StringCommand_Response * data =
      (airobot_interfaces__srv__StringCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!airobot_interfaces__srv__StringCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          airobot_interfaces__srv__StringCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!airobot_interfaces__srv__StringCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
