// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from marker_interfacing:msg/GeodeticMarker.idl
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
#include "marker_interfacing/msg/detail/geodetic_marker__struct.h"
#include "marker_interfacing/msg/detail/geodetic_marker__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geographic_msgs__msg__geo_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geographic_msgs__msg__geo_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool marker_interfacing__msg__geodetic_marker__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("marker_interfacing.msg._geodetic_marker.GeodeticMarker", full_classname_dest, 54) == 0);
  }
  marker_interfacing__msg__GeodeticMarker * ros_message = _ros_message;
  {  // gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps");
    if (!field) {
      return false;
    }
    if (!geographic_msgs__msg__geo_point__convert_from_py(field, &ros_message->gps)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // waypoint_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoint_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->waypoint_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // marker_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "marker_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->marker_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // aruco_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "aruco_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aruco_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aruco_id_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aruco_id_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aruco_id_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // marker_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "marker_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->marker_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * marker_interfacing__msg__geodetic_marker__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GeodeticMarker */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("marker_interfacing.msg._geodetic_marker");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GeodeticMarker");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  marker_interfacing__msg__GeodeticMarker * ros_message = (marker_interfacing__msg__GeodeticMarker *)raw_ros_message;
  {  // gps
    PyObject * field = NULL;
    field = geographic_msgs__msg__geo_point__convert_to_py(&ros_message->gps);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoint_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->waypoint_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoint_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // marker_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->marker_type.data,
      strlen(ros_message->marker_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "marker_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aruco_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aruco_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aruco_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aruco_id_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aruco_id_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aruco_id_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // marker_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->marker_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "marker_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
