// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
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
#include "ocs2_msgs/msg/detail/mpc_performance_indices__struct.h"
#include "ocs2_msgs/msg/detail/mpc_performance_indices__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ocs2_msgs__msg__mpc_performance_indices__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("ocs2_msgs.msg._mpc_performance_indices.MpcPerformanceIndices", full_classname_dest, 60) == 0);
  }
  ocs2_msgs__msg__MpcPerformanceIndices * ros_message = _ros_message;
  {  // init_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // merit
    PyObject * field = PyObject_GetAttrString(_pymsg, "merit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->merit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "cost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cost = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dynamics_violation_sse
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamics_violation_sse");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dynamics_violation_sse = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // equality_constraints_sse
    PyObject * field = PyObject_GetAttrString(_pymsg, "equality_constraints_sse");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->equality_constraints_sse = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // equality_lagrangian
    PyObject * field = PyObject_GetAttrString(_pymsg, "equality_lagrangian");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->equality_lagrangian = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inequality_lagrangian
    PyObject * field = PyObject_GetAttrString(_pymsg, "inequality_lagrangian");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inequality_lagrangian = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ocs2_msgs__msg__mpc_performance_indices__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MpcPerformanceIndices */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ocs2_msgs.msg._mpc_performance_indices");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MpcPerformanceIndices");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ocs2_msgs__msg__MpcPerformanceIndices * ros_message = (ocs2_msgs__msg__MpcPerformanceIndices *)raw_ros_message;
  {  // init_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // merit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->merit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "merit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamics_violation_sse
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dynamics_violation_sse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamics_violation_sse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // equality_constraints_sse
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->equality_constraints_sse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "equality_constraints_sse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // equality_lagrangian
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->equality_lagrangian);
    {
      int rc = PyObject_SetAttrString(_pymessage, "equality_lagrangian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inequality_lagrangian
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inequality_lagrangian);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inequality_lagrangian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
