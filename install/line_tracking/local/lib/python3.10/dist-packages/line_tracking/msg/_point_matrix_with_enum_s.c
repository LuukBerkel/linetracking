// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
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
#include "line_tracking/msg/detail/point_matrix_with_enum__struct.h"
#include "line_tracking/msg/detail/point_matrix_with_enum__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "line_tracking/msg/detail/point_array__functions.h"
// end nested array functions include
bool line_tracking__msg__point_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * line_tracking__msg__point_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool line_tracking__msg__point_matrix_with_enum__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("line_tracking.msg._point_matrix_with_enum.PointMatrixWithEnum", full_classname_dest, 61) == 0);
  }
  line_tracking__msg__PointMatrixWithEnum * ros_message = _ros_message;
  {  // lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lines'");
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
    if (!line_tracking__msg__PointArray__Sequence__init(&(ros_message->lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create line_tracking__msg__PointArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    line_tracking__msg__PointArray * dest = ros_message->lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!line_tracking__msg__point_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * line_tracking__msg__point_matrix_with_enum__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PointMatrixWithEnum */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("line_tracking.msg._point_matrix_with_enum");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PointMatrixWithEnum");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  line_tracking__msg__PointMatrixWithEnum * ros_message = (line_tracking__msg__PointMatrixWithEnum *)raw_ros_message;
  {  // lines
    PyObject * field = NULL;
    size_t size = ros_message->lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    line_tracking__msg__PointArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lines.data[i]);
      PyObject * pyitem = line_tracking__msg__point_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
