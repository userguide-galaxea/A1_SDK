#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_self_collision::ocs2_self_collision" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_self_collision::ocs2_self_collision APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_self_collision::ocs2_self_collision PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_self_collision.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_self_collision.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_self_collision::ocs2_self_collision )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_self_collision::ocs2_self_collision "${_IMPORT_PREFIX}/lib/libocs2_self_collision.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
