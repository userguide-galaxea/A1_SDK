#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_msgs::ocs2_msgs__rosidl_generator_c" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_msgs::ocs2_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_msgs::ocs2_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_msgs::ocs2_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_msgs::ocs2_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libocs2_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
