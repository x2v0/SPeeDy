#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ActsPluginDigitization" for configuration "Release"
set_property(TARGET ActsPluginDigitization APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ActsPluginDigitization PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libActsPluginDigitization.so"
  IMPORTED_SONAME_RELEASE "libActsPluginDigitization.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ActsPluginDigitization )
list(APPEND _IMPORT_CHECK_FILES_FOR_ActsPluginDigitization "${_IMPORT_PREFIX}/lib64/libActsPluginDigitization.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
