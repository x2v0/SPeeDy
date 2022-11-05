


set(ENV{VS_UNICODE_OUTPUT} "")
set(command "/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.17.1/Linux-x86_64/bin/cmake;-DCMAKE_INSTALL_PREFIX=/build/jenkins/workspace/lcg_nightly_pipeline/install/dev3python39/HepMC/2.06.11/x86_64-centos7-gcc11-opt;-Dmomentum:STRING=MEV;-Dlength:STRING=MM;-DCMAKE_BUILD_TYPE=Release;-GUnix Makefiles;/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC/2.06.11")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-configure.log"
  ERROR_FILE "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-configure.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  file(SHA1 "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-configure.log" sha1)
  set(msg "${msg}\nSee also\n  /build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-configure.log [${sha1}]\n")
  file(APPEND /build/jenkins/workspace/lcg_nightly_pipeline/build/fail-logs.txt "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-configure.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "HepMC-2.06.11 configure command succeeded.  See also /build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-configure.log\n")
  message(STATUS "${msg}")
endif()
