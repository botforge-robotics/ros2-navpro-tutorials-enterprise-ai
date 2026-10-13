// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navpro_enterprise_interfaces:action/ExecuteMission.idl
// generated code does not contain a copyright notice
#include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `mission_json`
#include "rosidl_runtime_c/string_functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_Goal__init(navpro_enterprise_interfaces__action__ExecuteMission_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(msg);
    return false;
  }
  // mission_json
  if (!rosidl_runtime_c__String__init(&msg->mission_json)) {
    navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(navpro_enterprise_interfaces__action__ExecuteMission_Goal * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // mission_json
  rosidl_runtime_c__String__fini(&msg->mission_json);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Goal__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_Goal * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // mission_json
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_json), &(rhs->mission_json)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Goal__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_Goal * input,
  navpro_enterprise_interfaces__action__ExecuteMission_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // mission_json
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_json), &(output->mission_json)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_Goal *
navpro_enterprise_interfaces__action__ExecuteMission_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Goal * msg = (navpro_enterprise_interfaces__action__ExecuteMission_Goal *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Goal__destroy(navpro_enterprise_interfaces__action__ExecuteMission_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_Goal *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_Goal * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `execution_summary`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_Result__init(navpro_enterprise_interfaces__action__ExecuteMission_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // completed_nodes_count
  // execution_summary
  if (!rosidl_runtime_c__String__init(&msg->execution_summary)) {
    navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(navpro_enterprise_interfaces__action__ExecuteMission_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // completed_nodes_count
  // execution_summary
  rosidl_runtime_c__String__fini(&msg->execution_summary);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Result__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_Result * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // completed_nodes_count
  if (lhs->completed_nodes_count != rhs->completed_nodes_count) {
    return false;
  }
  // execution_summary
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->execution_summary), &(rhs->execution_summary)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Result__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_Result * input,
  navpro_enterprise_interfaces__action__ExecuteMission_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // completed_nodes_count
  output->completed_nodes_count = input->completed_nodes_count;
  // execution_summary
  if (!rosidl_runtime_c__String__copy(
      &(input->execution_summary), &(output->execution_summary)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_Result *
navpro_enterprise_interfaces__action__ExecuteMission_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Result * msg = (navpro_enterprise_interfaces__action__ExecuteMission_Result *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Result__destroy(navpro_enterprise_interfaces__action__ExecuteMission_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_Result *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_Result * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `active_node_name`
// Member `active_node_status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__init(navpro_enterprise_interfaces__action__ExecuteMission_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_node_index
  // total_nodes_count
  // active_node_name
  if (!rosidl_runtime_c__String__init(&msg->active_node_name)) {
    navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(msg);
    return false;
  }
  // active_node_status
  if (!rosidl_runtime_c__String__init(&msg->active_node_status)) {
    navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(msg);
    return false;
  }
  // percent_complete
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(navpro_enterprise_interfaces__action__ExecuteMission_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_node_index
  // total_nodes_count
  // active_node_name
  rosidl_runtime_c__String__fini(&msg->active_node_name);
  // active_node_status
  rosidl_runtime_c__String__fini(&msg->active_node_status);
  // percent_complete
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_Feedback * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_node_index
  if (lhs->current_node_index != rhs->current_node_index) {
    return false;
  }
  // total_nodes_count
  if (lhs->total_nodes_count != rhs->total_nodes_count) {
    return false;
  }
  // active_node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_node_name), &(rhs->active_node_name)))
  {
    return false;
  }
  // active_node_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_node_status), &(rhs->active_node_status)))
  {
    return false;
  }
  // percent_complete
  if (lhs->percent_complete != rhs->percent_complete) {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_Feedback * input,
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_node_index
  output->current_node_index = input->current_node_index;
  // total_nodes_count
  output->total_nodes_count = input->total_nodes_count;
  // active_node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->active_node_name), &(output->active_node_name)))
  {
    return false;
  }
  // active_node_status
  if (!rosidl_runtime_c__String__copy(
      &(input->active_node_status), &(output->active_node_status)))
  {
    return false;
  }
  // percent_complete
  output->percent_complete = input->percent_complete;
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_Feedback *
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback * msg = (navpro_enterprise_interfaces__action__ExecuteMission_Feedback *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__destroy(navpro_enterprise_interfaces__action__ExecuteMission_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_Feedback *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_Feedback * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_Feedback__copy(
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
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__init(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Goal__init(&msg->goal)) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  navpro_enterprise_interfaces__action__ExecuteMission_Goal__fini(&msg->goal);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * rhs)
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
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * input,
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * output)
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
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request *
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * msg = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__destroy(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__copy(
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
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__init(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__fini(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * rhs)
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
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * input,
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * output)
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

navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response *
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * msg = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__destroy(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__init(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * input,
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event *
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * msg = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__destroy(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__copy(
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
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__init(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__fini(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * rhs)
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
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * input,
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * output)
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

navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request *
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * msg = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__destroy(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__copy(
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
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__init(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Result__init(&msg->result)) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__fini(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  navpro_enterprise_interfaces__action__ExecuteMission_Result__fini(&msg->result);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * input,
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response *
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * msg = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__destroy(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__init(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__init(&msg->request, 0)) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__init(&msg->response, 0)) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__fini(&msg->request);
  // response
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__fini(&msg->response);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * input,
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event *
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * msg = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__destroy(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__copy(
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
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"

bool
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__init(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Feedback__init(&msg->feedback)) {
    navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback__fini(&msg->feedback);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * rhs)
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
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * input,
  navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * output)
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
  if (!navpro_enterprise_interfaces__action__ExecuteMission_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage *
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * msg = (navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage));
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__destroy(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__init(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__fini(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * array)
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
      navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(&array->data[i]);
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

navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence *
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * array = (navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__destroy(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__are_equal(const navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * lhs, const navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__copy(
  const navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * input,
  navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * data =
      (navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
