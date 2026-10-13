// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__struct.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool navpro_enterprise_interfaces__msg__fleet_telemetry__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("navpro_enterprise_interfaces.msg._fleet_telemetry.FleetTelemetry", full_classname_dest, 64) == 0);
  }
  navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // battery_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_percentage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estop_engaged
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop_engaged");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->estop_engaged = (Py_True == field);
    Py_DECREF(field);
  }
  {  // operational_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "operational_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->operational_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // current_mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_mission_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_mission_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * navpro_enterprise_interfaces__msg__fleet_telemetry__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FleetTelemetry */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("navpro_enterprise_interfaces.msg._fleet_telemetry");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FleetTelemetry");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message = (navpro_enterprise_interfaces__msg__FleetTelemetry *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_id.data,
      strlen(ros_message->robot_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop_engaged
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->estop_engaged ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop_engaged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operational_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->operational_status.data,
      strlen(ros_message->operational_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "operational_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_mission_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_mission_id.data,
      strlen(ros_message->current_mission_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
