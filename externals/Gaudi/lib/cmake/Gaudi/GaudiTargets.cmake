# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.21)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget Gaudi::GaudiPluginService Gaudi::listcomponents Gaudi::Test_GaudiPluginService_UseCasesLib Gaudi::Test_GaudiPluginService_LegacyUseCasesLib Gaudi::GaudiKernel Gaudi::profile_Property Gaudi::PathResolver_test Gaudi::genconf Gaudi::instructionsetLevel Gaudi::JOS_benchmark Gaudi::JOS_memory_use Gaudi::GaudiUtilsLib Gaudi::testXMLFileCatalogWrite Gaudi::testXMLFileCatalogRead Gaudi::Gaudi Gaudi::GaudiAlgLib Gaudi::GaudiCommonSvcLib Gaudi::GaudiHiveHeaders Gaudi::makeThesis Gaudi::concurrentRun Gaudi::GaudiMPLib Gaudi::GaudiGenProfilingHtml Gaudi::GaudiProfilingHeaders Gaudi::GaudiPythonLib Gaudi::RootCnvLib Gaudi::gaudi_merge Gaudi::extract_event Gaudi::GaudiExamplesLib Gaudi::Allocator Gaudi::testAppMgrStateMachine Gaudi::QueueingEventProcessorExample)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target Gaudi::GaudiPluginService
add_library(Gaudi::GaudiPluginService SHARED IMPORTED)

set_target_properties(Gaudi::GaudiPluginService PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Threads::Threads"
)

# Create imported target Gaudi::listcomponents
add_executable(Gaudi::listcomponents IMPORTED)

# Create imported target Gaudi::Test_GaudiPluginService_UseCasesLib
add_library(Gaudi::Test_GaudiPluginService_UseCasesLib SHARED IMPORTED)

set_target_properties(Gaudi::Test_GaudiPluginService_UseCasesLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
)

# Create imported target Gaudi::Test_GaudiPluginService_LegacyUseCasesLib
add_library(Gaudi::Test_GaudiPluginService_LegacyUseCasesLib SHARED IMPORTED)

set_target_properties(Gaudi::Test_GaudiPluginService_LegacyUseCasesLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
)

# Create imported target Gaudi::GaudiKernel
add_library(Gaudi::GaudiKernel SHARED IMPORTED)

set_target_properties(Gaudi::GaudiKernel PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiPluginService;Boost::headers;Boost::filesystem;Boost::thread;Boost::regex;Boost::system;TBB::tbb;dl;ROOT::Core;cppgsl::cppgsl;fmt::fmt;nlohmann_json::nlohmann_json;/usr/lib64/librt.so"
)

# Create imported target Gaudi::profile_Property
add_executable(Gaudi::profile_Property IMPORTED)

# Create imported target Gaudi::PathResolver_test
add_executable(Gaudi::PathResolver_test IMPORTED)

# Create imported target Gaudi::genconf
add_executable(Gaudi::genconf IMPORTED)
set_property(TARGET Gaudi::genconf PROPERTY ENABLE_EXPORTS 1)

# Create imported target Gaudi::instructionsetLevel
add_executable(Gaudi::instructionsetLevel IMPORTED)

# Create imported target Gaudi::JOS_benchmark
add_executable(Gaudi::JOS_benchmark IMPORTED)

# Create imported target Gaudi::JOS_memory_use
add_executable(Gaudi::JOS_memory_use IMPORTED)

# Create imported target Gaudi::GaudiUtilsLib
add_library(Gaudi::GaudiUtilsLib SHARED IMPORTED)

set_target_properties(Gaudi::GaudiUtilsLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiKernel;ROOT::RIO;ROOT::Hist;ROOT::Thread;ROOT::Matrix;ROOT::MathCore;ROOT::XMLIO;AIDA::aida"
)

# Create imported target Gaudi::testXMLFileCatalogWrite
add_executable(Gaudi::testXMLFileCatalogWrite IMPORTED)

# Create imported target Gaudi::testXMLFileCatalogRead
add_executable(Gaudi::testXMLFileCatalogRead IMPORTED)

# Create imported target Gaudi::Gaudi
add_executable(Gaudi::Gaudi IMPORTED)

# Create imported target Gaudi::GaudiAlgLib
add_library(Gaudi::GaudiAlgLib SHARED IMPORTED)

set_target_properties(Gaudi::GaudiAlgLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiUtilsLib;Boost::headers;Boost::regex;Rangev3::rangev3;AIDA::aida"
)

# Create imported target Gaudi::GaudiCommonSvcLib
add_library(Gaudi::GaudiCommonSvcLib SHARED IMPORTED)

set_target_properties(Gaudi::GaudiCommonSvcLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiKernel;Boost::system;Boost::filesystem;ROOT::Hist;ROOT::RIO;AIDA::aida"
)

# Create imported target Gaudi::GaudiHiveHeaders
add_library(Gaudi::GaudiHiveHeaders INTERFACE IMPORTED)

set_target_properties(Gaudi::GaudiHiveHeaders PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
)

# Create imported target Gaudi::makeThesis
add_executable(Gaudi::makeThesis IMPORTED)

# Create imported target Gaudi::concurrentRun
add_executable(Gaudi::concurrentRun IMPORTED)

# Create imported target Gaudi::GaudiMPLib
add_library(Gaudi::GaudiMPLib SHARED IMPORTED)

set_target_properties(Gaudi::GaudiMPLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiKernel;Python::Python;ROOT::Net;ROOT::RIO;ROOT::Thread"
)

# Create imported target Gaudi::GaudiGenProfilingHtml
add_executable(Gaudi::GaudiGenProfilingHtml IMPORTED)

# Create imported target Gaudi::GaudiProfilingHeaders
add_library(Gaudi::GaudiProfilingHeaders INTERFACE IMPORTED)

set_target_properties(Gaudi::GaudiProfilingHeaders PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
)

# Create imported target Gaudi::GaudiPythonLib
add_library(Gaudi::GaudiPythonLib SHARED IMPORTED)

set_target_properties(Gaudi::GaudiPythonLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiAlgLib;Python::Python;AIDA::aida;CLHEP::CLHEP"
)

# Create imported target Gaudi::RootCnvLib
add_library(Gaudi::RootCnvLib SHARED IMPORTED)

set_target_properties(Gaudi::RootCnvLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiKernel;Gaudi::GaudiUtilsLib;ROOT::RIO;ROOT::Tree;ROOT::TreePlayer;ROOT::MathCore;ROOT::Net;ROOT::Graf3d;ROOT::Graf;ROOT::Gpad"
)

# Create imported target Gaudi::gaudi_merge
add_executable(Gaudi::gaudi_merge IMPORTED)

# Create imported target Gaudi::extract_event
add_executable(Gaudi::extract_event IMPORTED)

# Create imported target Gaudi::GaudiExamplesLib
add_library(Gaudi::GaudiExamplesLib SHARED IMPORTED)

set_target_properties(Gaudi::GaudiExamplesLib PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Gaudi::GaudiKernel"
)

# Create imported target Gaudi::Allocator
add_executable(Gaudi::Allocator IMPORTED)

# Create imported target Gaudi::testAppMgrStateMachine
add_executable(Gaudi::testAppMgrStateMachine IMPORTED)

# Create imported target Gaudi::QueueingEventProcessorExample
add_executable(Gaudi::QueueingEventProcessorExample IMPORTED)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/GaudiTargets-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
