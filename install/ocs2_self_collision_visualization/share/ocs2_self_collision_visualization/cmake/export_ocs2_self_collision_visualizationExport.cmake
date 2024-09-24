# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget ocs2_self_collision_visualization::ocs2_self_collision_visualization)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target ocs2_self_collision_visualization::ocs2_self_collision_visualization
add_library(ocs2_self_collision_visualization::ocs2_self_collision_visualization SHARED IMPORTED)

set_target_properties(ocs2_self_collision_visualization::ocs2_self_collision_visualization PROPERTIES
  INTERFACE_COMPILE_OPTIONS "-pthread;-Wfatal-errors;-Wl,--no-as-needed;-fPIC;-DBOOST_ALL_DYN_LINK;-fopenmp;-DPINOCCHIO_WITH_HPP_FCL;-Wno-ignored-attributes;-Wno-invalid-partial-specialization;-DPINOCCHIO_URDFDOM_TYPEDEF_SHARED_PTR;-DPINOCCHIO_URDFDOM_USE_STD_SHARED_PTR"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gerunze/ros2_ws/install/hpp-fcl/include;/home/gerunze/ros2_ws/install/pinocchio/include;${_IMPORT_PREFIX}/include/ocs2_self_collision_visualization"
  INTERFACE_LINK_LIBRARIES "ocs2_core::ocs2_core;ocs2_robotic_tools::ocs2_robotic_tools;ocs2_pinocchio_interface::ocs2_pinocchio_interface;ocs2_self_collision::ocs2_self_collision;ocs2_ros_interfaces::ocs2_ros_interfaces;rclcpp::rclcpp;std_msgs::std_msgs__rosidl_generator_c;std_msgs::std_msgs__rosidl_typesupport_fastrtps_c;std_msgs::std_msgs__rosidl_generator_cpp;std_msgs::std_msgs__rosidl_typesupport_fastrtps_cpp;std_msgs::std_msgs__rosidl_typesupport_introspection_c;std_msgs::std_msgs__rosidl_typesupport_c;std_msgs::std_msgs__rosidl_typesupport_introspection_cpp;std_msgs::std_msgs__rosidl_typesupport_cpp;std_msgs::std_msgs__rosidl_generator_py;geometry_msgs::geometry_msgs__rosidl_generator_c;geometry_msgs::geometry_msgs__rosidl_typesupport_fastrtps_c;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_c;geometry_msgs::geometry_msgs__rosidl_typesupport_c;geometry_msgs::geometry_msgs__rosidl_generator_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_fastrtps_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_cpp;geometry_msgs::geometry_msgs__rosidl_generator_py;visualization_msgs::visualization_msgs__rosidl_generator_c;visualization_msgs::visualization_msgs__rosidl_typesupport_fastrtps_c;visualization_msgs::visualization_msgs__rosidl_generator_cpp;visualization_msgs::visualization_msgs__rosidl_typesupport_fastrtps_cpp;visualization_msgs::visualization_msgs__rosidl_typesupport_introspection_c;visualization_msgs::visualization_msgs__rosidl_typesupport_c;visualization_msgs::visualization_msgs__rosidl_typesupport_introspection_cpp;visualization_msgs::visualization_msgs__rosidl_typesupport_cpp;visualization_msgs::visualization_msgs__rosidl_generator_py;/home/gerunze/ros2_ws/install/hpp-fcl/lib/libhpp-fcl.so;/home/gerunze/ros2_ws/install/pinocchio/lib/libpinocchio.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_serialization.so;/usr/lib/x86_64-linux-gnu/libboost_system.so"
)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/export_ocs2_self_collision_visualizationExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
