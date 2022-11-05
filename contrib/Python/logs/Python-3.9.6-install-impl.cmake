set(ENV{VS_UNICODE_OUTPUT} "")
set(command "/build/jenkins/workspace/lcg_nightly_pipeline/lcgcmake/cmake/scripts/make_verbose;${make};-j1;install")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/build/jenkins/workspace/lcg_nightly_pipeline/lcgcmake/externals/Python_postinstall.sh;/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/Python/3.9.6/x86_64-centos7-gcc11-opt")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;chdir;/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/Python/3.9.6/x86_64-centos7-gcc11-opt/bin;/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;create_symlink;python3;python")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;chdir;/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/Python/3.9.6/x86_64-centos7-gcc11-opt/bin;/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;create_symlink;python3-config;python-config")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;chdir;/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/Python/3.9.6/x86_64-centos7-gcc11-opt/bin;/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;create_symlink;pydoc3;pydoc")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.18.3/Linux-x86_64/bin/cmake;-E;copy;/build/jenkins/workspace/lcg_nightly_pipeline/lcgcmake/externals/sitecustomize.py;/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/Python/3.9.6/x86_64-centos7-gcc11-opt/lib/python3.9/site-packages/")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()