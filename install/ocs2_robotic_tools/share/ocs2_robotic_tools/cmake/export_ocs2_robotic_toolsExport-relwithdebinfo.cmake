#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_robotic_tools::ocs2_robotic_tools" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_robotic_tools::ocs2_robotic_tools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_robotic_tools::ocs2_robotic_tools PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_robotic_tools.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_robotic_tools.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_robotic_tools::ocs2_robotic_tools )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_robotic_tools::ocs2_robotic_tools "${_IMPORT_PREFIX}/lib/libocs2_robotic_tools.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
