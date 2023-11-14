// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from theora_webcams:msg/Status.idl
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
#include "theora_webcams/msg/detail/status__struct.h"
#include "theora_webcams/msg/detail/status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool theora_webcams__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("theora_webcams.msg._status.Status", full_classname_dest, 33) == 0);
  }
  theora_webcams__msg__Status * ros_message = _ros_message;
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->height = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // framerate_numerator
    PyObject * field = PyObject_GetAttrString(_pymsg, "framerate_numerator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framerate_numerator = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // framerate_denominator
    PyObject * field = PyObject_GetAttrString(_pymsg, "framerate_denominator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framerate_denominator = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // exposure
    PyObject * field = PyObject_GetAttrString(_pymsg, "exposure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->exposure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * theora_webcams__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("theora_webcams.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  theora_webcams__msg__Status * ros_message = (theora_webcams__msg__Status *)raw_ros_message;
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // framerate_numerator
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->framerate_numerator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framerate_numerator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // framerate_denominator
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->framerate_denominator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framerate_denominator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exposure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->exposure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exposure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
