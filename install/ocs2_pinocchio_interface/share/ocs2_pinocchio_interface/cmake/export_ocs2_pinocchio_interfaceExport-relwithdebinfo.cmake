#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_pinocchio_interface::ocs2_pinocchio_interface" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_pinocchio_interface::ocs2_pinocchio_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_pinocchio_interface::ocs2_pinocchio_interface PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_pinocchio_interface.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_pinocchio_interface.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_pinocchio_interface::ocs2_pinocchio_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_pinocchio_interface::ocs2_pinocchio_interface "${_IMPORT_PREFIX}/lib/libocs2_pinocchio_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
