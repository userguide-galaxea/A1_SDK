// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
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
#include "ocs2_msgs/msg/detail/mpc_flattened_controller__struct.h"
#include "ocs2_msgs/msg/detail/mpc_flattened_controller__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ocs2_msgs/msg/detail/controller_data__functions.h"
#include "ocs2_msgs/msg/detail/mpc_input__functions.h"
#include "ocs2_msgs/msg/detail/mpc_state__functions.h"
// end nested array functions include
bool ocs2_msgs__msg__mpc_observation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__mpc_observation__convert_to_py(void * raw_ros_message);
bool ocs2_msgs__msg__mpc_target_trajectories__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__mpc_target_trajectories__convert_to_py(void * raw_ros_message);
bool ocs2_msgs__msg__mpc_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__mpc_state__convert_to_py(void * raw_ros_message);
bool ocs2_msgs__msg__mpc_input__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__mpc_input__convert_to_py(void * raw_ros_message);
bool ocs2_msgs__msg__mode_schedule__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__mode_schedule__convert_to_py(void * raw_ros_message);
bool ocs2_msgs__msg__controller_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__controller_data__convert_to_py(void * raw_ros_message);
bool ocs2_msgs__msg__mpc_performance_indices__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ocs2_msgs__msg__mpc_performance_indices__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ocs2_msgs__msg__mpc_flattened_controller__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("ocs2_msgs.msg._mpc_flattened_controller.MpcFlattenedController", full_classname_dest, 62) == 0);
  }
  ocs2_msgs__msg__MpcFlattenedController * ros_message = _ros_message;
  {  // controller_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->controller_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // init_observation
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_observation");
    if (!field) {
      return false;
    }
    if (!ocs2_msgs__msg__mpc_observation__convert_from_py(field, &ros_message->init_observation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plan_target_trajectories
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_target_trajectories");
    if (!field) {
      return false;
    }
    if (!ocs2_msgs__msg__mpc_target_trajectories__convert_from_py(field, &ros_message->plan_target_trajectories)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // state_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_trajectory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'state_trajectory'");
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
    if (!ocs2_msgs__msg__MpcState__Sequence__init(&(ros_message->state_trajectory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ocs2_msgs__msg__MpcState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ocs2_msgs__msg__MpcState * dest = ros_message->state_trajectory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ocs2_msgs__msg__mpc_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // input_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_trajectory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'input_trajectory'");
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
    if (!ocs2_msgs__msg__MpcInput__Sequence__init(&(ros_message->input_trajectory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ocs2_msgs__msg__MpcInput__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ocs2_msgs__msg__MpcInput * dest = ros_message->input_trajectory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ocs2_msgs__msg__mpc_input__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // time_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_trajectory");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->time_trajectory), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->time_trajectory.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_trajectory'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->time_trajectory), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->time_trajectory.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // post_event_indices
    PyObject * field = PyObject_GetAttrString(_pymsg, "post_event_indices");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint16_t);
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->post_event_indices), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->post_event_indices.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'post_event_indices'");
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
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->post_event_indices), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->post_event_indices.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint16_t tmp = (uint16_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // mode_schedule
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_schedule");
    if (!field) {
      return false;
    }
    if (!ocs2_msgs__msg__mode_schedule__convert_from_py(field, &ros_message->mode_schedule)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'data'");
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
    if (!ocs2_msgs__msg__ControllerData__Sequence__init(&(ros_message->data), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ocs2_msgs__msg__ControllerData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ocs2_msgs__msg__ControllerData * dest = ros_message->data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ocs2_msgs__msg__controller_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // performance_indices
    PyObject * field = PyObject_GetAttrString(_pymsg, "performance_indices");
    if (!field) {
      return false;
    }
    if (!ocs2_msgs__msg__mpc_performance_indices__convert_from_py(field, &ros_message->performance_indices)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ocs2_msgs__msg__mpc_flattened_controller__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MpcFlattenedController */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ocs2_msgs.msg._mpc_flattened_controller");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MpcFlattenedController");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ocs2_msgs__msg__MpcFlattenedController * ros_message = (ocs2_msgs__msg__MpcFlattenedController *)raw_ros_message;
  {  // controller_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->controller_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_observation
    PyObject * field = NULL;
    field = ocs2_msgs__msg__mpc_observation__convert_to_py(&ros_message->init_observation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_observation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_target_trajectories
    PyObject * field = NULL;
    field = ocs2_msgs__msg__mpc_target_trajectories__convert_to_py(&ros_message->plan_target_trajectories);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_target_trajectories", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_trajectory
    PyObject * field = NULL;
    size_t size = ros_message->state_trajectory.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ocs2_msgs__msg__MpcState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->state_trajectory.data[i]);
      PyObject * pyitem = ocs2_msgs__msg__mpc_state__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "state_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_trajectory
    PyObject * field = NULL;
    size_t size = ros_message->input_trajectory.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ocs2_msgs__msg__MpcInput * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->input_trajectory.data[i]);
      PyObject * pyitem = ocs2_msgs__msg__mpc_input__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "input_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_trajectory
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "time_trajectory");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->time_trajectory.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->time_trajectory.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->time_trajectory.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // post_event_indices
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "post_event_indices");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint16_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->post_event_indices.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint16_t * src = &(ros_message->post_event_indices.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->post_event_indices.size * sizeof(uint16_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // mode_schedule
    PyObject * field = NULL;
    field = ocs2_msgs__msg__mode_schedule__convert_to_py(&ros_message->mode_schedule);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_schedule", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    size_t size = ros_message->data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ocs2_msgs__msg__ControllerData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->data.data[i]);
      PyObject * pyitem = ocs2_msgs__msg__controller_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // performance_indices
    PyObject * field = NULL;
    field = ocs2_msgs__msg__mpc_performance_indices__convert_to_py(&ros_message->performance_indices);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "performance_indices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
