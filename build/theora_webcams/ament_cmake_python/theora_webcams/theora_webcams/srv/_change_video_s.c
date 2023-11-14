// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from theora_webcams:srv/ChangeVideo.idl
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
#include "theora_webcams/srv/detail/change_video__struct.h"
#include "theora_webcams/srv/detail/change_video__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool theora_webcams__srv__change_video__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("theora_webcams.srv._change_video.ChangeVideo_Request", full_classname_dest, 52) == 0);
  }
  theora_webcams__srv__ChangeVideo_Request * ros_message = _ros_message;
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
  {  // fps_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "fps_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fps_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fps_den
    PyObject * field = PyObject_GetAttrString(_pymsg, "fps_den");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fps_den = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_restart
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_restart");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_restart = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * theora_webcams__srv__change_video__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChangeVideo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("theora_webcams.srv._change_video");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeVideo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  theora_webcams__srv__ChangeVideo_Request * ros_message = (theora_webcams__srv__ChangeVideo_Request *)raw_ros_message;
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
  {  // fps_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fps_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fps_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fps_den
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fps_den);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fps_den", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_restart
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_restart ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_restart", field);
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
// #include "theora_webcams/srv/detail/change_video__struct.h"
// already included above
// #include "theora_webcams/srv/detail/change_video__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool theora_webcams__srv__change_video__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("theora_webcams.srv._change_video.ChangeVideo_Response", full_classname_dest, 53) == 0);
  }
  theora_webcams__srv__ChangeVideo_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * theora_webcams__srv__change_video__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChangeVideo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("theora_webcams.srv._change_video");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeVideo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  theora_webcams__srv__ChangeVideo_Response * ros_message = (theora_webcams__srv__ChangeVideo_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
