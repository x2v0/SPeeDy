#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "EDM4HEP::edm4hep" for configuration "Release"
set_property(TARGET EDM4HEP::edm4hep APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EDM4HEP::edm4hep PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libedm4hep.so"
  IMPORTED_SONAME_RELEASE "libedm4hep.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS EDM4HEP::edm4hep )
list(APPEND _IMPORT_CHECK_FILES_FOR_EDM4HEP::edm4hep "${_IMPORT_PREFIX}/lib64/libedm4hep.so" )

# Import target "EDM4HEP::edm4hepDict" for configuration "Release"
set_property(TARGET EDM4HEP::edm4hepDict APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EDM4HEP::edm4hepDict PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libedm4hepDict.so"
  IMPORTED_SONAME_RELEASE "libedm4hepDict.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS EDM4HEP::edm4hepDict )
list(APPEND _IMPORT_CHECK_FILES_FOR_EDM4HEP::edm4hepDict "${_IMPORT_PREFIX}/lib64/libedm4hepDict.so" )

# Import target "EDM4HEP::edm4hepSioBlocks" for configuration "Release"
set_property(TARGET EDM4HEP::edm4hepSioBlocks APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EDM4HEP::edm4hepSioBlocks PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libedm4hepSioBlocks.so"
  IMPORTED_SONAME_RELEASE "libedm4hepSioBlocks.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS EDM4HEP::edm4hepSioBlocks )
list(APPEND _IMPORT_CHECK_FILES_FOR_EDM4HEP::edm4hepSioBlocks "${_IMPORT_PREFIX}/lib64/libedm4hepSioBlocks.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
