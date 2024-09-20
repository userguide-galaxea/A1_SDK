#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_mpc::ocs2_mpc" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_mpc::ocs2_mpc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_mpc::ocs2_mpc PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_mpc.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_mpc.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_mpc::ocs2_mpc )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_mpc::ocs2_mpc "${_IMPORT_PREFIX}/lib/libocs2_mpc.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
