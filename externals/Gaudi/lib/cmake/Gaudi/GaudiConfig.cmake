#[========================================================================[.rst:
GaudiConfig.cmake
--------------------------

Imported Targets
^^^^^^^^^^^^^^^^

The following targets will be imported:
* Shared libraries
  * ``Gaudi::GaudiAlgLib``
  * ``Gaudi::GaudiCommonSvcLib``
  * ``Gaudi::GaudiExamplesLib``
  * ``Gaudi::GaudiKernel``
  * ``Gaudi::GaudiMPLib``
  * ``Gaudi::GaudiPluginService``
  * ``Gaudi::GaudiPythonLib``
  * ``Gaudi::GaudiUtilsLib``
  * ``Gaudi::RootCnvLib``
* Header only libraries
  * ``Gaudi::GaudiHiveHeaders``
  * ``Gaudi::GaudiProfilingHeaders``
* Executable
  * ``Gaudi::Allocator``
  * ``Gaudi::concurrentRun``
  * ``Gaudi::extract_event``
  * ``Gaudi::gaudi_merge``
  * ``Gaudi::Gaudi``
  * ``Gaudi::GaudiGenProfilingHtml``
  * ``Gaudi::genconf``
  * ``Gaudi::instructionsetLevel``
  * ``Gaudi::listcomponents``
  * ``Gaudi::makeThesis``
  * ``Gaudi::profile_Property``
* Tests
  * ``Gaudi::AsyncEventProcessorExample``
  * ``Gaudi::countersUnitTest``
  * ``Gaudi::PathResolver_test``
  * ``Gaudi::Test_GaudiPluginService_LegacyUseCasesLib``
  * ``Gaudi::Test_GaudiPluginService_UseCasesLib``
  * ``Gaudi::testAppMgrStateMachine``
  * ``Gaudi::testXMLFileCatalogRead``
  * ``Gaudi::testXMLFileCatalogWrite``

Imported functions, options and variables
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

* ``GAUDI_CXX_STANDARD``: The C++ standard used to compile Gaudi. (cached)
* See GaudiToolbox.cmake for the functions and options (if included)

Dependencies
^^^^^^^^^^^^

See GaudiDependencies.cmake

Variables to modify the configuration
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Set this variable to TRUE before calling find_package(Gaudi) if needed

* ``GAUDI_NO_TOOLBOX``: do not include GaudiToolBox.cmake (default is to include)

Advice
^^^^^^

Remember to let CMake handle the transitivity of dependencies and use the
imported targets stated earlier.

#]========================================================================]

cmake_policy(PUSH)
cmake_policy(VERSION 3.15)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was GaudiConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

# Set the C++ standard used to build Gaudi
set(GAUDI_CXX_STANDARD 17 CACHE INTERNAL "Version of C++ used to compile Gaudi")

list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/modules) # Find*.cmake
list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}) # other modules

set_and_check(Gaudi_BINARY_DIR ${PACKAGE_PREFIX_DIR}/bin)
set_and_check(Gaudi_INCLUDE_DIR ${PACKAGE_PREFIX_DIR}/include)
set_and_check(Gaudi_LIBRARY_DIR ${PACKAGE_PREFIX_DIR}/lib)
set_and_check(Gaudi_PLUGINS_DIR ${PACKAGE_PREFIX_DIR}/lib)
set_and_check(Gaudi_PYTHON_DIR ${PACKAGE_PREFIX_DIR}/python)

if(NOT GAUDI_NO_TOOLBOX)
    # Import the functions
    include(GaudiToolbox)

    _gaudi_runtime_prepend(path ${Gaudi_BINARY_DIR})
    _gaudi_runtime_prepend(ld_library_path ${Gaudi_LIBRARY_DIR})
    if(NOT Gaudi_LIBRARY_DIR STREQUAL Gaudi_PLUGINS_DIR)
        _gaudi_runtime_prepend(ld_library_path ${Gaudi_PLUGINS_DIR})
    endif()
    _gaudi_runtime_prepend(root_include_path ${Gaudi_INCLUDE_DIR})
    _gaudi_runtime_prepend(pythonpath ${Gaudi_PYTHON_DIR})
endif()

# Enable optional dependencies
set(GAUDI_USE_PYTHON_MAJOR 3)
set(GAUDI_USE_AIDA ON)
set(GAUDI_USE_HEPPDT ON)
set(GAUDI_USE_CLHEP ON)
set(GAUDI_USE_GPERFTOOLS ON)
set(GAUDI_USE_INTELAMPLIFIER OFF)
set(GAUDI_USE_JEMALLOC ON)
set(GAUDI_USE_UNWIND ON)
set(GAUDI_USE_XERCESC ON)
set(GAUDI_USE_CPPUNIT ON)
set(GAUDI_USE_DOXYGEN ON)


# Find the dependencies
if(Gaudi_FIND_QUIETLY)
    set(GAUDI_DEPENDENCIES_FIND_QUIETLY TRUE)
endif()
include(GaudiDependencies)

# Import the targets
include("${CMAKE_CURRENT_LIST_DIR}/GaudiTargets.cmake")

# Tell we have successfully found Gaudi
if(NOT Gaudi_FIND_QUIETLY)
    message(STATUS "Found Gaudi: ${CMAKE_CURRENT_LIST_DIR} (found version 36.7)")
endif()

# Hide this file location to non-advanced users
mark_as_advanced(Gaudi_DIR)

cmake_policy(POP)
