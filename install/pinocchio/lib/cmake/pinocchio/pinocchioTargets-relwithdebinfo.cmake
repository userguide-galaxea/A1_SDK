#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pinocchio::pinocchio" for configuration "RelWithDebInfo"
set_property(TARGET pinocchio::pinocchio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(pinocchio::pinocchio PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "/home/gerunze/ros2_ws/install/pinocchio/lib/libpinocchio.so.2.6.21"
  IMPORTED_SONAME_RELWITHDEBINFO "libpinocchio.so.2.6.21"
  )

list(APPEND _IMPORT_CHECK_TARGETS pinocchio::pinocchio )
list(APPEND _IMPORT_CHECK_FILES_FOR_pinocchio::pinocchio "/home/gerunze/ros2_ws/install/pinocchio/lib/libpinocchio.so.2.6.21" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
