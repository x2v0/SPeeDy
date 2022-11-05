# - Geant4 CMake Configuration File for External Projects
# This file is configured by Geant4 for use by an external project
# This file is configured by Geant4's CMake system and SHOULD NOT BE EDITED
#
# It defines the following variables
#  Geant4_INCLUDE_DIRS - include directories for Geant4
#  Geant4_DEFINITIONS  - compile definitions needed to use Geant4
#  Geant4_LIBRARIES    - libraries to link against
#  Geant4_BUILD_TYPE   - Build type (e.g. "Release") used to build this
#                        install. Only set if Geant4 was installed using
#                        a single mode tool (e.g. make, ninja).
#  Geant4_CXX_FLAGS    - Recommended CXX flags for the compiler used to
#                        build the Geant4 libraries.
#  Geant4_CXX_FLAGS_<CONFIG> - Recommended CXX flags for build mode CONFIG.
#  Geant4_USE_FILE     - path to a CMake module which may be included to
#                        help setup CMake variables
#  Geant4_CXXSTD       - C++ Standard used to compile Geant4, e.g. c++98
#  Geant4_TLS_MODEL    - Thread Local Storage model used. Only set if
#                        the build used an explicit model.
#
# You may supply a version number through find_package which will be checked
# against the version of this build. Standard CMake logic is used so that
# the EXACT flag may be passed, and otherwise this build will report itself
# as compatible with the requested version if:
#
#  VERSION_OF_THIS_BUILD >= VERSION_REQUESTED
#
# By default only the core (or kernel) of Geant4 is activated by this
# module. You can specify additional components of Geant4 through the
# COMPONENTS argument to find_package. By default, all core libraries of
# Geant4 are appended to the Geant4_LIBRARIES variable. Specifying
# additional components will enable a check on the existence of these
# components, with the following per component variables being set:
#
#  Geant4_${COMPONENT}_FOUND    TRUE is the Geant4 library "component" was
#                               found
#
#  Geant4_${COMPONENT}_LIBRARY  Contains the library for the specified
#                               "component" IF the component is a library.
#
# In Geant4, components can be optional subcomponents of an always
# available library. In that case there will be no
# Geant4_{COMPONENT}_LIBRARY variable. These non-library components are
# generally activated by compile definitions, and in these cases the
# appropriate definition will be added to the Geant4_DEFINITIONS component.
#
# If you use the REQUIRED and/or COMPONENTS arguments of find_package to
# specify components, then the module will issue a FATAL_ERROR if the
# found Geant4 does not have the requested component(s). Any components
# specified through the OPTIONAL_COMPONENTS argument will be enabled
# only if the found Geant4 supports them, with no error being raised if
# they are not supported.
#
# The components available generally correspond to configurations of
# the Geant4 libraries or optional extras that Geant4 can be built with.
#
# Library Configuration
# ---------------------
#  static            (Static libraries available. Using this component
#                     when static libraries are available will result in
#                     Geant4_LIBRARIES being populated with the static
#                     versions of the Geant4 libraries. It does not, and cannot,
#                     guarantee the use of static third party libraries.)
#  multithreaded     (Libraries are multithread capable)
#
#  usolids           (Geant4 solids are replaced with USolids equivalents)
#
#  smartstack        (G4event library G4StackManager uses G4SmartTrackStack)
#
#  php_as_hp         (G4processes library ParticleHP built as HP)
#
# Optional Components
# -------------------
#  gdml              (GDML support)
#  g3tog4            (Geant3 geometry call list reader library)
#  freetype          (G4analysis library has freetype support)
#  hdf5              (G4analysis library has HDF5 support)
#
#  ui_tcsh           (TCsh Style Application Command Line Interface)
#  ui_win32          (WIN32 Style Application Command Line Interface)
#
#  motif             (Motif-X11/OpenGL Graphical User Interface)
#  qt                (Qt5/OpenGL Graphical User Interface)
#
#  vis_opengl_x11    (OpenGL visualization with X11 interface)
#  vis_opengl_win32  (OpenGL visualization with X11 interface)
#  vis_raytracer_x11 (RayTracer visualization with X11 interface)
#  vis_openinventor  (OpenInventor visualization)
#
#  vis_toolssg_x11_gles     (ToolsSG visualization with X11 windowing and GLES rendering)
#  vis_toolssg_xt_gles      (ToolsSG visualization with Xt windowing and GLES rendering)
#  vis_toolssg_qt_gles      (ToolsSG visualization with Qt windowing and GLES rendering)
#  vis_toolssg_windows_gles (ToolsSG visualization with Windows windowing and GLES rendering)
#
# In addition, two 'shorthand' components are defined to help activate all
# available User Interface and Visualization drivers:
#
#  ui_all            (All available UI drivers)
#  vis_all           (All available Vis drivers)
#
# These never result in a FATAL_ERROR, even if the REQUIRED find_package
# argument is set. This is because these options do not depend on specific
# components being available.
#
# You can also query whether the Geant4 found uses the builtin or system
# versions of CLHEP, ZLIB, or Expat after calling find_package via the variables
#
#  Geant4_builtin_clhep_FOUND   (TRUE if Geant4 built with internal CLHEP)
#  Geant4_system_clhep_FOUND    (TRUE if Geant4 built with external CLHEP)
#  Geant4_builtin_expat_FOUND   (TRUE if Geant4 built with internal Expat)
#  Geant4_builtin_zlib_FOUND    (TRUE if Geant4 built with internal Zlib)
#
# These are not used via components as they do not, in general, affect
# the use of Geant4 in an application unless you yourself make direct
# calls to these APIs. As the builtin libraries only contain the code
# required directly by the Geant4 toolkit, you may wish to perform a
# configure time check in these cases that the builtin libraries contain
# the calls required. In both cases, the Geant4_INCLUDE_DIRS and
# Geant4_LIBRARIES variables will be populated to use the builtin or
# system APIs as required, and you should use these to ensure you compile
# and link against the same API version.
#
# Environment variables for, and directory paths to, physics datasets
# used by some Geant4 physics processes may be determined from the
# variables
#
#  Geant4_DATASETS               (List of dataset names known to Geant4)
#  Geant4_DATASET_<NAME>_ENVVAR  (Name of environment variable used by
#                                 Geant4 to obtain path to dataset
#                                 <NAME>)
#  Geant4_DATASET_<NAME>_PATH    (Path to dataset <NAME>. NB this may
#                                 point to a non-existent path if Geant4
#                                 was configured not to install data)
#
#-----------------------------------------------------------------------
# Variables used by this module which can change the default behaviour of
# this module. They need to be set prior to the call to find_package
#
#  Geant4_CONFIG_DEBUG    If set, enable extra messaging output which can
#                         be helpful in debugging and identifying problems
#                         with the configuration.
#
#-----------------------------------------------------------------------

#-----------------------------------------------------------------------
# DEBUG : print out the variables passed via find_package arguments
#
if(Geant4_CONFIG_DEBUG)
  message(STATUS "G4CFG_DEBUG : Geant4_VERSION         = ${Geant4_VERSION}")
  message(STATUS "G4CFG_DEBUG : Geant4_FIND_VERSION    = ${Geant4_FIND_VERSION}")
  message(STATUS "G4CFG_DEBUG : Geant4_FIND_REQUIRED   = ${Geant4_FIND_REQUIRED}")
  message(STATUS "G4CFG_DEBUG : Geant4_FIND_COMPONENTS = ${Geant4_FIND_COMPONENTS}")

  foreach(_cpt ${Geant4_FIND_COMPONENTS})
    message(STATUS "G4CFG_DEBUG : Geant4_FIND_REQUIRED_${_cpt} = ${Geant4_FIND_REQUIRED_${_cpt}}")
  endforeach()

  message(STATUS "G4CFG_DEBUG : Geant4_LIBDEPS_LOADED = ${Geant4_LIBDEPS_LOADED}")
endif()

#-----------------------------------------------------------------------
# Check that consumers use the minimum needed CMake version
# Geant4 uses cxx_std_EP to define the standard it was built against
# 3.8 and above support EP=17. 3.12 and above add 20. 3.20 and above add 23.
# We continue to support the earlier version whilst checking for consumers using 20
cmake_policy(VERSION 3.8...3.18)
if(CMAKE_VERSION VERSION_LESS 3.8)
  message(FATAL_ERROR "Projects consuming Geant4Config require CMake 3.8 or newer")
endif()

if(("17" GREATER_EQUAL 23) AND (CMAKE_VERSION VERSION_LESS 3.20))
  message(FATAL_ERROR "Projects consuming Geant4Config require CMake 3.20 or newer (for C++23 support)")
endif()

if(("17" GREATER_EQUAL 20) AND (CMAKE_VERSION VERSION_LESS 3.12))
  message(FATAL_ERROR "Projects consuming Geant4Config require CMake 3.12 or newer (for C++20 support)")
endif()

# - Help find dependencies
include(CMakeFindDependencyMacro)

#-----------------------------------------------------------------------
# Locate ourselves, since all other config files should have been
# installed alongside us...
#
get_filename_component(_geant4_thisdir "${CMAKE_CURRENT_LIST_FILE}" PATH)

#-----------------------------------------------------------------------
# Provide *recommended* compiler flags used by this build of Geant4
# Don't mess with the actual CMAKE_CXX_FLAGS!!!
# It's up to the user what to do with these
#
set(Geant4_CXX_FLAGS "-W -Wall -pedantic -Wno-non-virtual-dtor -Wno-long-long -Wwrite-strings -Wpointer-arith -Woverloaded-virtual -Wno-variadic-macros -Wshadow -pipe -pthread -ftls-model=global-dynamic -std=c++17")
set(Geant4_EXE_LINKER_FLAGS "")
set(Geant4_CXX_FLAGS_DEBUG "-g")
set(Geant4_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG")
set(Geant4_CXX_FLAGS_RELEASE "-O3 -DNDEBUG -fno-trapping-math -ftree-vectorize -fno-math-errno")
set(Geant4_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
set(Geant4_BUILD_TYPE "Release")

# - Provide variable indicating C++ Standard we were compiled against
set(Geant4_CXX_STANDARD "17")

#-----------------------------------------------------------------------
# Set the base compile definitions required to use Geant4 if the variable
# does not exist (we do this to ensure multiple calls to find_package
# don't overwrite previous invocations)
# Components may append to this, but should prefer usage requirements
# via INTERFACE_COMPILE_DEFINITIONS
if(NOT Geant4_DEFINITIONS)
  set(Geant4_DEFINITIONS )
endif()

#-----------------------------------------------------------------------
# Configure the path to the Geant4 headers, using a relative path if
# possible. This is only known at CMake time, so we expand a CMake
# supplied variable.
#

# Geant4 configured for the install with relative paths, so use these
get_filename_component(Geant4_INCLUDE_DIR "${_geant4_thisdir}/../../include/Geant4" ABSOLUTE)
  
set(Geant4_INCLUDE_DIRS "${Geant4_INCLUDE_DIR}")

# Push our own module path onto the CMake one to help refind dependencies
# - Popped at end of this module
list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_CURRENT_LIST_DIR}/Modules")

#-----------------------------------------------------------------------
# Data Resources
# NB: Because data paths can be "forward declared" these offer no
# guarantee of data existence. They only provide a hint.
#
set(Geant4_DATASET_DESCRIPTIONS "G4NDL|G4NEUTRONHPDATA|/cvmfs/geant4.cern.ch/share/data/G4NDL4.6|G4NDL.4.6.tar.gz|d07e43499f607e01f2c1ce06d7a09f3e;G4EMLOW|G4LEDATA|/cvmfs/geant4.cern.ch/share/data/G4EMLOW8.0|G4EMLOW.8.0.tar.gz|6795805f39ac73a71333276756004d99;PhotonEvaporation|G4LEVELGAMMADATA|/cvmfs/geant4.cern.ch/share/data/PhotonEvaporation5.7|G4PhotonEvaporation.5.7.tar.gz|81ff27deb23af4aa225423e6b3a06b39;RadioactiveDecay|G4RADIOACTIVEDATA|/cvmfs/geant4.cern.ch/share/data/RadioactiveDecay5.6|G4RadioactiveDecay.5.6.tar.gz|acc1dbeb87b6b708b2874ced729a3a8f;G4PARTICLEXS|G4PARTICLEXSDATA|/cvmfs/geant4.cern.ch/share/data/G4PARTICLEXS4.0|G4PARTICLEXS.4.0.tar.gz|d82a4d171d50f55864e28b6cd6f433c0;G4PII|G4PIIDATA|/cvmfs/geant4.cern.ch/share/data/G4PII1.3|G4PII.1.3.tar.gz|05f2471dbcdf1a2b17cbff84e8e83b37;RealSurface|G4REALSURFACEDATA|/cvmfs/geant4.cern.ch/share/data/RealSurface2.2|G4RealSurface.2.2.tar.gz|ea8f1cfa8d8aafd64b71fb30b3e8a6d9;G4SAIDDATA|G4SAIDXSDATA|/cvmfs/geant4.cern.ch/share/data/G4SAIDDATA2.0|G4SAIDDATA.2.0.tar.gz|d5d4e9541120c274aeed038c621d39da;G4ABLA|G4ABLADATA|/cvmfs/geant4.cern.ch/share/data/G4ABLA3.1|G4ABLA.3.1.tar.gz|180f1f5d937733b207f8d5677f76296e;G4INCL|G4INCLDATA|/cvmfs/geant4.cern.ch/share/data/G4INCL1.0|G4INCL.1.0.tar.gz|85fe937b6df46d41814f07175d3f5b51;G4ENSDFSTATE|G4ENSDFSTATEDATA|/cvmfs/geant4.cern.ch/share/data/G4ENSDFSTATE2.3|G4ENSDFSTATE.2.3.tar.gz|6f18fce8f217e7aaeaa3711be9b2c7bf")

foreach(_g4dataset_tuple ${Geant4_DATASET_DESCRIPTIONS})
  # Format is NAME|ENVVAR|PATH
  string(REPLACE "|" ";" _g4dataset_tuple "${_g4dataset_tuple}")
  list(GET _g4dataset_tuple 0 _g4dataset_name)
  list(APPEND Geant4_DATASETS ${_g4dataset_name})
  list(GET _g4dataset_tuple 1 Geant4_DATASET_${_g4dataset_name}_ENVVAR)
  list(GET _g4dataset_tuple 2 Geant4_DATASET_${_g4dataset_name}_PATH)
endforeach()
unset(Geant4_DATASET_DESCRIPTIONS)

#-----------------------------------------------------------------------
# Setup components.
#-----------------------------------------------------------------------
# Many components are simply present as parts of libraries or always built
# but require additional compile definitions.
#
# Optionally import build-time package settings to provide hard values
# for find_package to work with
include("${CMAKE_CURRENT_LIST_DIR}/Geant4PackageCache.cmake" OPTIONAL)

# Builtin/External packages
set(Geant4_system_clhep_FOUND ON)

if(Geant4_system_clhep_FOUND)
  set(Geant4_builtin_clhep_FOUND FALSE)
  find_dependency(CLHEP 2.4.5.1 EXACT CONFIG)
else()
  set(Geant4_builtin_clhep_FOUND TRUE)
endif()

set(Geant4_builtin_expat_FOUND TRUE)
if(NOT Geant4_builtin_expat_FOUND)
  find_dependency(EXPAT )
  include("${CMAKE_CURRENT_LIST_DIR}/G4EXPATShim.cmake")
endif()

set(Geant4_builtin_zlib_FOUND TRUE)
if(NOT Geant4_builtin_zlib_FOUND)
  find_dependency(ZLIB )
endif()

set(Geant4_system_ptl_FOUND OFF)
if(Geant4_system_ptl_FOUND)
  set(Geant4_builtin_ptl_FOUND FALSE)
  find_dependency(PTL )
else()
  # We know exactly where PTL is
  set(Geant4_builtin_ptl_FOUND TRUE)
  if(CMAKE_VERSION VERSION_GREATER 3.8.9999)
    find_dependency(PTL  NO_DEFAULT_PATH PATHS "${_geant4_thisdir}/PTL")
  else()
    find_package(PTL  REQUIRED NO_DEFAULT_PATH PATHS "${_geant4_thisdir}/PTL")
  endif()
endif()

# - Multithreading
set(Geant4_multithreaded_FOUND ON)
if(Geant4_multithreaded_FOUND)
  # - Define variable to indicate TLS model used
  set(Geant4_TLS_MODEL "global-dynamic")
  if(Geant4_TLS_MODEL STREQUAL "auto")
    unset(Geant4_TLS_MODEL)
  endif()
endif()

# - GDML
set(Geant4_gdml_FOUND ON)
if(Geant4_gdml_FOUND)
  find_dependency(XercesC 3.2.3)
endif()

# - Smart track stack
set(Geant4_smartstack_FOUND OFF)

# - ParticleHP as HP
set(Geant4_php_as_hp_FOUND OFF)

# - TBB
set(Geant4_TBB_FOUND OFF)
if(Geant4_TBB_FOUND)
  find_dependency(TBB )
endif()

# - TiMemory
set(Geant4_timemory_FOUND OFF)
if(Geant4_timemory_FOUND)
  set(_geant4_use_timemory_library ON)
  set(timemory_DIR "" CACHE PATH "timemory installation for Geant4")
  if(NOT TARGET )
    add_library( INTERFACE IMPORTED)
    set(timemory_FIND_COMPONENTS_INTERFACE )
    find_package(timemory  REQUIRED QUIET
        COMPONENTS )
  endif()
  set(timemory_LIBRARIES )
endif()

# - G3toG4
set(Geant4_g3tog4_FOUND ON)
if(Geant4_g3tog4_FOUND)
  if(Geant4_FIND_REQUIRED_g3tog4)
    set(_geant4_use_g3tog4_library ON)
  endif()
endif()

# - VecGeom
set(Geant4_usolids_FOUND ON)
if(Geant4_usolids_FOUND)
  find_dependency(VecGeom 1.1.18)
  include("${CMAKE_CURRENT_LIST_DIR}/G4VecGeomShim.cmake")
endif()

# - Freetype
set(Geant4_freetype_FOUND OFF)
if(Geant4_freetype_FOUND)
  find_dependency(Freetype 2.10.0)
  include("${CMAKE_CURRENT_LIST_DIR}/G4FreetypeShim.cmake")
endif()

# - HDF5
set(Geant4_hdf5_FOUND OFF)
if(Geant4_hdf5_FOUND)
  find_dependency(HDF5 )
  include("${CMAKE_CURRENT_LIST_DIR}/G4HDF5Shim.cmake")
endif()

#-----------------------------------------------------------------------
# UI/VIS
#
# Prefer Legacy GL when using CMake >= 3.10
set(OpenGL_GL_PREFERENCE_SAVE "${OpenGL_GL_PREFERENCE}")
set(OpenGL_GL_PREFERENCE "LEGACY")

# - Helper variables for ui/vis_all components
if("ui_all" IN_LIST Geant4_FIND_COMPONENTS)
  set(Geant4_ui_all_FOUND TRUE)
endif()

if("vis_all" IN_LIST Geant4_FIND_COMPONENTS)
  set(Geant4_vis_all_FOUND TRUE)
endif()

# - UI : TCSH
set(Geant4_ui_tcsh_FOUND 1)
if(Geant4_ui_tcsh_FOUND)
  if(("ui_tcsh" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_ui_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4UI_USE_TCSH)
  endif()
endif()

# - UI : win32
set(Geant4_ui_win32_FOUND )
if(Geant4_ui_win32_FOUND)
  if(("ui_win32" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_ui_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4UI_USE_WIN32)
  endif()
endif()

#-----------------------------------------------------------------------
# Components which requires slightly more complex setup
#
# - Visualization : RayTracerX
set(Geant4_vis_raytracer_x11_FOUND ON)
if(Geant4_vis_raytracer_x11_FOUND)
  find_dependency(X11)
  include("${CMAKE_CURRENT_LIST_DIR}/G4X11Shim.cmake")

  if(("vis_raytracer_x11" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_RAYTRACERX)
  endif()
endif()

# - Qt (UI and Vis!)
set(Geant4_qt_FOUND ON)
set(Geant4_qt3d_FOUND ON)
if(Geant4_qt_FOUND)
  # Must always refind Qt5 to recreate imported targets. Because these
  # are in the public interface, always need linking.
  find_dependency(Qt5Core REQUIRED)
  find_dependency(Qt5Gui REQUIRED)
  find_dependency(Qt5Widgets REQUIRED)
  find_dependency(Qt5OpenGL REQUIRED)
  find_dependency(Qt5PrintSupport REQUIRED)

  if(Geant4_qt3d_FOUND)
    find_dependency(Qt53DCore 5.15.0 REQUIRED)
    find_dependency(Qt53DExtras 5.15.0 REQUIRED)
    find_dependency(Qt53DRender 5.15.0 REQUIRED)
  endif()

  # Also require OpenGL
  find_dependency(OpenGL)

  # Qt must be activated both directly and for OpenInventor
  if(("qt" IN_LIST Geant4_FIND_COMPONENTS)
     OR ("vis_openinventor" IN_LIST Geant4_FIND_COMPONENTS)
     OR ("vis_toolssg_qt_gles" IN_LIST Geant4_FIND_COMPONENTS)
     OR Geant4_ui_all_FOUND OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4UI_USE_QT -DG4VIS_USE_OPENGLQT)
    set(_geant4_use_opengl_library ON)
    # Qt3D is always on if available
    set(_geant4_use_qt3D_library ${Geant4_qt3d_FOUND})
  endif()
endif()

# - Motif (UI and Vis!)
set(Geant4_motif_FOUND ON)
if(Geant4_motif_FOUND)
  find_dependency(X11)
  include("${CMAKE_CURRENT_LIST_DIR}/G4X11Shim.cmake")
  find_dependency(Motif)
  include("${CMAKE_CURRENT_LIST_DIR}/G4MotifShim.cmake")
  if(APPLE)
    find_dependency(XQuartzGL)
  else()
    find_dependency(OpenGL)
  endif()

  # Motif can be activated both directly and for OpenInventor
  if(("motif" IN_LIST Geant4_FIND_COMPONENTS)
     OR ("vis_openinventor" IN_LIST Geant4_FIND_COMPONENTS)
     OR ("vis_toolssg_xt_gles" IN_LIST Geant4_FIND_COMPONENTS)
     OR Geant4_ui_all_FOUND OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4UI_USE_XM -DG4VIS_USE_OPENGLXM)
    set(_geant4_use_opengl_library ON)
  endif()
endif()

# - OpenGL X11
set(Geant4_vis_opengl_x11_FOUND ON)
if(Geant4_vis_opengl_x11_FOUND)
  find_dependency(X11)
  include("${CMAKE_CURRENT_LIST_DIR}/G4X11Shim.cmake")
  if(APPLE)
    find_dependency(XQuartzGL)
  else()
    find_dependency(OpenGL)
  endif()

  if(("vis_opengl_x11" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_OPENGLX)
    set(_geant4_use_opengl_library ON)
  endif()
endif()

# - OpenGL Win32
set(Geant4_vis_opengl_win32_FOUND )
if(Geant4_vis_opengl_win32_FOUND)
  find_dependency(OpenGL)
  if(("vis_opengl_win32" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_OPENGLWIN32)
    set(_geant4_use_opengl_library ON)
  endif()
endif()

# - OpenInventor
set(Geant4_vis_openinventor_FOUND OFF)
set(Geant4_vis_openinventor_qt_FOUND OFF)
if(Geant4_vis_openinventor_FOUND)
  find_dependency(Coin)

  if(Geant4_vis_openinventor_qt_FOUND)
    # Qt dependency handled by Geant4_vis_qt_FOUND earlier,
    # always ON if Inventor_QT is
    find_dependency(SoQt)
  else()
    if(WIN32)
      find_dependency(SoWin)
    else()
      # Motif/X11/GL dependency handled by Geant4_motif_FOUND earlier,
      # always ON if Inventor/Xt is.
      find_dependency(SoXt)
    endif()
  endif()

  if(("vis_openinventor" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    if(Geant4_vis_openinventor_qt_FOUND)
      list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_OI -DG4VIS_USE_OIQT)
    else()
      if(WIN32)
        list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_OI -DG4VIS_USE_OIWIN32)
      else()
        list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_OI -DG4VIS_USE_OIX)
      endif()
    endif()

    set(_geant4_use_inventor_library ON)
  endif()
endif()

# - ToolsSG X11/GLES
set(Geant4_vis_toolssg_x11_gles_FOUND OFF)
if(Geant4_vis_toolssg_x11_gles_FOUND)
  find_dependency(X11)
  include("${CMAKE_CURRENT_LIST_DIR}/G4X11Shim.cmake")
  if(APPLE)
    find_dependency(XQuartzGL)
  else()
    find_dependency(OpenGL)
  endif()

  if(("vis_toolssg_x11_gles" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_TOOLSSG_X11_GLES)
    set(_geant4_use_toolssg_library ON)
  endif()
endif()

# - ToolsSG Windows/GLES
set(Geant4_vis_toolssg_windows_gles_FOUND )
if(Geant4_vis_toolssg_windows_gles_FOUND)
  find_dependency(OpenGL)
  if(("vis_toolssg_windows_gles" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_TOOLSSG_WINDOWS_GLES)
    set(_geant4_use_toolssg_library ON)
  endif()
endif()

# - ToolsSG Xt/GLES
set(Geant4_vis_toolssg_xt_gles_FOUND OFF)
if(Geant4_vis_toolssg_xt_gles_FOUND)
  find_dependency(X11)
  include("${CMAKE_CURRENT_LIST_DIR}/G4X11Shim.cmake")
  if(APPLE)
    find_dependency(XQuartzGL)
  else()
    find_dependency(OpenGL)
  endif()

  if(("vis_toolssg_xt_gles" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_TOOLSSG_XT_GLES)
    set(_geant4_use_toolssg_library ON)
  endif()
endif()

# - ToolsSG Qt/GLES
set(Geant4_vis_toolssg_qt_gles_FOUND OFF)
if(Geant4_vis_toolssg_qt_gles_FOUND)
  find_dependency(OpenGL)
  if(("vis_toolssg_qt_gles" IN_LIST Geant4_FIND_COMPONENTS) OR Geant4_vis_all_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_TOOLSSG_QT_GLES)
    set(_geant4_use_toolssg_library ON)
  endif()
endif()

# Reset any OpenGL Preference
set(OpenGL_GL_PREFERENCE "${OpenGL_GL_PREFERENCE_SAVE}")

set(Geant4_vis_Vtk_FOUND OFF)
if(Geant4_vis_Vtk_FOUND)
  find_dependency(VTK)
  list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_VTK)
  set(_geant4_use_vtk_library ON)

  if(Geant4_qt_FOUND)
    list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_VTK_QT)
  endif()
endif()

#-----------------------------------------------------------------------
# Include the files listing all the imported targets and configuring
# Intel/MSVC Compile Features
# (Not needed if used in the same Geant4 project, or if we have run before)
# This is always installed in the same location as us...
#
if(NOT CMAKE_PROJECT_NAME STREQUAL Geant4)
  include("${_geant4_thisdir}/Modules/IntelCompileFeatures.cmake")
  include("${_geant4_thisdir}/Modules/MSVCCompileFeatures.cmake")

  if(NOT Geant4_LIBDEPS_LOADED)
    include("${_geant4_thisdir}/Geant4LibraryDepends.cmake")
    set(Geant4_LIBDEPS_LOADED 1)
  endif()
endif()

#-----------------------------------------------------------------------
# Now perform final configuration of libraries...
# We provide FOUND variables for presence of shared and static
# User can supply "static" component to force use of static libraries, if
# available.
set(Geant4_shared_FOUND ON)
set(Geant4_static_FOUND OFF)

# - Default setting : shared if available, static otherwise
if(Geant4_shared_FOUND)
  set(_geant4_lib_use_suffix "")
else()
  set(_geant4_lib_use_suffix "-static")
endif()

if(("static" IN_LIST Geant4_FIND_COMPONENTS) AND Geant4_static_FOUND)
  set(_geant4_lib_use_suffix "-static")
endif()

# The list of libraries probably should be autogenerated, but we hard code
# for now. We don't have to divide the list of shared libraries, but we
# do so for consistency with the way we'll need to do it for static.
# - Always on Vis Components
set(_geant4_internal_libraries
  Geant4::G4Tree${_geant4_lib_use_suffix}
  Geant4::G4FR${_geant4_lib_use_suffix}
  Geant4::G4GMocren${_geant4_lib_use_suffix}
  Geant4::G4visHepRep${_geant4_lib_use_suffix}
  Geant4::G4RayTracer${_geant4_lib_use_suffix}
  Geant4::G4VRML${_geant4_lib_use_suffix})

# - G4OpenGL if it's requested.
if(_geant4_use_opengl_library)
  list(APPEND _geant4_internal_libraries
    Geant4::G4OpenGL${_geant4_lib_use_suffix}
    Geant4::G4gl2ps${_geant4_lib_use_suffix})
  list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_OPENGL)
endif()

# - Qt3D if it's requested.
if(_geant4_use_qt3D_library)
  list(APPEND _geant4_internal_libraries Geant4::G4visQt3D${_geant4_lib_use_suffix})
  list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_QT3D)
endif()

# - G4OpenInventor if it's requested.
if(_geant4_use_inventor_library)
  list(APPEND _geant4_internal_libraries Geant4::G4OpenInventor${_geant4_lib_use_suffix})
endif()

# - G4ToolsSG if it's requested.
if(_geant4_use_toolssg_library)
  list(APPEND _geant4_internal_libraries Geant4::G4ToolsSG${_geant4_lib_use_suffix})
  list(APPEND Geant4_DEFINITIONS -DG4VIS_USE_TOOLSSG)
endif()

if(_geant4_use_vtk_library)
  list(APPEND _geant4_internal_libraries Geant4::G4visVtk${_geant4_lib_use_suffix})
endif()

# - G3toG4 if it's requested
if(_geant4_use_g3tog4_library)
  set(_geant4_g3tog4_library Geant4::G3toG4${_geant4_lib_use_suffix})
endif()

# - link to timemory library if activated
if(_geant4_use_timemory_library)
  list(APPEND _geant4_internal_libraries ${timemory_LIBRARIES})
endif()

# - Factory registration mechanism in physics_lists requires whole
# archive to be linked when using static libs, so requires wrapping
# with suitable compiler dependent flags
# 2016-05-24: use an alternate means of forcing linking of references for
# static builds.  --whole-archive never was implemented for _WIN32
# (appears not to even be possible)
# In order re-implement whole-archive, switch Geant4_FORCE_WHOLE_ARCHIVE ON
set(_geant4_physicslists_library Geant4::G4physicslists${_geant4_lib_use_suffix})

set(Geant4_FORCE_WHOLE_ARCHIVE OFF)
if( Geant4_FORCE_WHOLE_ARCHIVE )
if(_geant4_lib_use_suffix STREQUAL "-static")
  # - Use CMAKE_CXX_COMPILER_ID, which should be reliable enough...
  # Though the GNU/Clang/Intel compilers/linkers *should* use identical
  # flags,keep their sections separate until behaviour confirmed
  #
  if(CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    set(_geant4_physicslists_library -Wl,--whole-archive Geant4::G4physicslists${_geant4_lib_use_suffix} -Wl,--no-whole-archive)
  elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(_geant4_physicslists_library -Wl,-force_load Geant4::G4physicslists${_geant4_lib_use_suffix})
  elseif(CMAKE_CXX_COMPILER_ID MATCHES "Intel")
    set(_geant4_physicslists_library -Wl,--whole-archive Geant4::G4physicslists${_geant4_lib_use_suffix} -Wl,--no-whole-archive)
  else()
    # Needs determination of other compiler options.
    # NB: MSVC has /OPT:NOREF, but may apply globally...
    # reading up on this ... doesn't seem that it applies for subtle reasons
    # only real way is to actually reference the static variables
    set(_geant4_physicslists_library Geant4::G4physicslists${_geant4_lib_use_suffix})
  endif()
endif()
endif()

# - 'Kernel' libraries
list(APPEND _geant4_internal_libraries
  Geant4::G4vis_management${_geant4_lib_use_suffix}
  Geant4::G4modeling${_geant4_lib_use_suffix}
  Geant4::G4interfaces${_geant4_lib_use_suffix}
  Geant4::G4persistency${_geant4_lib_use_suffix}
  ${_geant4_g3tog4_library}
  Geant4::G4analysis${_geant4_lib_use_suffix}
  Geant4::G4error_propagation${_geant4_lib_use_suffix}
  Geant4::G4readout${_geant4_lib_use_suffix}
  ${_geant4_physicslists_library}
  Geant4::G4run${_geant4_lib_use_suffix}
  Geant4::G4event${_geant4_lib_use_suffix}
  Geant4::G4tasking${_geant4_lib_use_suffix}
  Geant4::G4tracking${_geant4_lib_use_suffix}
  Geant4::G4parmodels${_geant4_lib_use_suffix}
  Geant4::G4processes${_geant4_lib_use_suffix}
  Geant4::G4digits_hits${_geant4_lib_use_suffix}
  Geant4::G4track${_geant4_lib_use_suffix}
  Geant4::G4particles${_geant4_lib_use_suffix}
  Geant4::G4geometry${_geant4_lib_use_suffix}
  Geant4::G4materials${_geant4_lib_use_suffix}
  Geant4::G4graphics_reps${_geant4_lib_use_suffix}
  Geant4::G4intercoms${_geant4_lib_use_suffix}
  Geant4::G4global${_geant4_lib_use_suffix}
  Geant4::G4tools${_geant4_lib_use_suffix}
  )

# - Any externals built by Geant4
foreach(_extlib G4expat;G4zlib;G4ptl)
  list(APPEND
    _geant4_internal_libraries
    Geant4::${_extlib}${_geant4_lib_use_suffix}
    )
endforeach()

# - Now set them to Geant4_LIBRARIES
set(Geant4_LIBRARIES ${_geant4_internal_libraries})

#-----------------------------------------------------------------------
# Remove any duplicates from the Geant4_{DEFINITIONS,INCLUDE_DIRS,LIBRARIES}
# variables so that multiple passes append things correctly
#
if(Geant4_DEFINITIONS)
  list(REMOVE_DUPLICATES Geant4_DEFINITIONS)
endif()
# -  Create an interface target to export the selected definitions as
#    usage requirements
if(NOT TARGET Geant4::G4UIVisDefinitions)
  add_library(Geant4::G4UIVisDefinitions INTERFACE IMPORTED)
endif()
string(REGEX REPLACE "^\-D|;-D" ";" G4UIVIS_COMPILE_DEFINITIONS "${Geant4_DEFINITIONS}")
set_target_properties(Geant4::G4UIVisDefinitions PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "${G4UIVIS_COMPILE_DEFINITIONS}")
unset(G4UIVIS_COMPILE_DEFINITIONS)

list(APPEND Geant4_LIBRARIES Geant4::G4UIVisDefinitions)

if(Geant4_INCLUDE_DIRS)
  list(REMOVE_DUPLICATES Geant4_INCLUDE_DIRS)
endif()

if(Geant4_LIBRARIES)
  list(REMOVE_DUPLICATES Geant4_LIBRARIES)
endif()

#-----------------------------------------------------------------------
# Point the user to the UseGeant4.cmake file which they may wish to include
# to help them with setting up Geant4
#
set(Geant4_USE_FILE "${_geant4_thisdir}/UseGeant4.cmake")

#-----------------------------------------------------------------------
# Pop our custom module path from the CMake one
list(REMOVE_AT CMAKE_MODULE_PATH 0)

#-----------------------------------------------------------------------
# Check FOUNDness of required components.
foreach(_comp ${Geant4_FIND_COMPONENTS})
  if(NOT Geant4_${_comp}_FOUND)
    if(Geant4_FIND_REQUIRED_${_comp})
      message(WARNING "Geant4 required component '${_comp}' not found")
      set(Geant4_FOUND FALSE)
    endif()
  endif()
endforeach()

#-----------------------------------------------------------------------
# Reporting via FindPackageHandleStandardArgs "CONFIG_MODE" to give a better message on being found
include(FindPackageHandleStandardArgs)
set(${CMAKE_FIND_PACKAGE_NAME}_CONFIG "${CMAKE_CURRENT_LIST_FILE}")
find_package_handle_standard_args(Geant4 CONFIG_MODE)
