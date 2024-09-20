#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_ddp::ocs2_ddp" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_ddp::ocs2_ddp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_ddp::ocs2_ddp PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_ddp.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_ddp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_ddp::ocs2_ddp )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_ddp::ocs2_ddp "${_IMPORT_PREFIX}/lib/libocs2_ddp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
