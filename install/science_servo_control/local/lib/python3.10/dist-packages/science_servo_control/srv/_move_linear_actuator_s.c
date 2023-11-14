// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from science_servo_control:srv/MoveLinearActuator.idl
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
#include "science_servo_control/srv/detail/move_linear_actuator__struct.h"
#include "science_servo_control/srv/detail/move_linear_actuator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool science_servo_control__srv__move_linear_actuator__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("science_servo_control.srv._move_linear_actuator.MoveLinearActuator_Request", full_classname_dest, 74) == 0);
  }
  science_servo_control__srv__MoveLinearActuator_Request * ros_message = _ros_message;
  {  // actuator_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actuator_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_pos = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * science_servo_control__srv__move_linear_actuator__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveLinearActuator_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("science_servo_control.srv._move_linear_actuator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveLinearActuator_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  science_servo_control__srv__MoveLinearActuator_Request * ros_message = (science_servo_control__srv__MoveLinearActuator_Request *)raw_ros_message;
  {  // actuator_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->actuator_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_pos
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "science_servo_control/srv/detail/move_linear_actuator__struct.h"
// already included above
// #include "science_servo_control/srv/detail/move_linear_actuator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool science_servo_control__srv__move_linear_actuator__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("science_servo_control.srv._move_linear_actuator.MoveLinearActuator_Response", full_classname_dest, 75) == 0);
  }
  science_servo_control__srv__MoveLinearActuator_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * science_servo_control__srv__move_linear_actuator__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveLinearActuator_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("science_servo_control.srv._move_linear_actuator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveLinearActuator_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
