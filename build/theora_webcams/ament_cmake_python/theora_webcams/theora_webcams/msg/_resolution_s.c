// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from theora_webcams:msg/Resolution.idl
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
#include "theora_webcams/msg/detail/resolution__struct.h"
#include "theora_webcams/msg/detail/resolution__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "theora_webcams/msg/detail/framerate__functions.h"
// end nested array functions include
bool theora_webcams__msg__framerate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * theora_webcams__msg__framerate__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool theora_webcams__msg__resolution__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("theora_webcams.msg._resolution.Resolution", full_classname_dest, 41) == 0);
  }
  theora_webcams__msg__Resolution * ros_message = _ros_message;
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
  {  // framerates
    PyObject * field = PyObject_GetAttrString(_pymsg, "framerates");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'framerates'");
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
    if (!theora_webcams__msg__Framerate__Sequence__init(&(ros_message->framerates), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create theora_webcams__msg__Framerate__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    theora_webcams__msg__Framerate * dest = ros_message->framerates.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!theora_webcams__msg__framerate__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * theora_webcams__msg__resolution__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Resolution */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("theora_webcams.msg._resolution");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Resolution");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  theora_webcams__msg__Resolution * ros_message = (theora_webcams__msg__Resolution *)raw_ros_message;
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
  {  // framerates
    PyObject * field = NULL;
    size_t size = ros_message->framerates.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    theora_webcams__msg__Framerate * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->framerates.data[i]);
      PyObject * pyitem = theora_webcams__msg__framerate__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "framerates", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}