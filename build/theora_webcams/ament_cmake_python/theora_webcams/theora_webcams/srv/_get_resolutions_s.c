// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from theora_webcams:srv/GetResolutions.idl
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
#include "theora_webcams/srv/detail/get_resolutions__struct.h"
#include "theora_webcams/srv/detail/get_resolutions__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool theora_webcams__srv__get_resolutions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("theora_webcams.srv._get_resolutions.GetResolutions_Request", full_classname_dest, 58) == 0);
  }
  theora_webcams__srv__GetResolutions_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * theora_webcams__srv__get_resolutions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetResolutions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("theora_webcams.srv._get_resolutions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetResolutions_Request");
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
// #include "theora_webcams/srv/detail/get_resolutions__struct.h"
// already included above
// #include "theora_webcams/srv/detail/get_resolutions__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "theora_webcams/msg/detail/resolution__functions.h"
// end nested array functions include
bool theora_webcams__msg__resolution__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * theora_webcams__msg__resolution__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool theora_webcams__srv__get_resolutions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("theora_webcams.srv._get_resolutions.GetResolutions_Response", full_classname_dest, 59) == 0);
  }
  theora_webcams__srv__GetResolutions_Response * ros_message = _ros_message;
  {  // resolutions
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolutions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'resolutions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!theora_webcams__msg__Resolution__Sequence__init(&(ros_message->resolutions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create theora_webcams__msg__Resolution__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    theora_webcams__msg__Resolution * dest = ros_message->resolutions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!theora_webcams__msg__resolution__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * theora_webcams__srv__get_resolutions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetResolutions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("theora_webcams.srv._get_resolutions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetResolutions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  theora_webcams__srv__GetResolutions_Response * ros_message = (theora_webcams__srv__GetResolutions_Response *)raw_ros_message;
  {  // resolutions
    PyObject * field = NULL;
    size_t size = ros_message->resolutions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    theora_webcams__msg__Resolution * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->resolutions.data[i]);
      PyObject * pyitem = theora_webcams__msg__resolution__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolutions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
