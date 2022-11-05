# - Config file for the EDM4HEP package

# - Define exported version
set(EDM4HEP_VERSION "")

# - Init CMakePackageConfigHelpers

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was EDM4HEPConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# - Create relocatable paths to headers.
# NOTE: Do not strictly need paths as all usage requirements are encoded in
# the imported targets created later.
set_and_check(EDM4HEP_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")

include(CMakeFindDependencyMacro)
find_dependency(podio REQUIRED)

# - Include the targets file to create the imported targets that a client can
# link to (libraries) or execute (programs)
include("${CMAKE_CURRENT_LIST_DIR}/EDM4HEPTargets.cmake")

# print the default "Found:" message and check library location
include(FindPackageHandleStandardArgs)
get_property(TEST_EDM4HEP_LIBRARY TARGET EDM4HEP::edm4hep PROPERTY LOCATION)
find_package_handle_standard_args(EDM4HEP DEFAULT_MSG CMAKE_CURRENT_LIST_FILE TEST_EDM4HEP_LIBRARY)
