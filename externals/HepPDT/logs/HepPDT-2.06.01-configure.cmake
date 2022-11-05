


set(ENV{VS_UNICODE_OUTPUT} "")
set(command "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT/2.06.01/configure;--prefix;/data/sftnight/build/workspace/lcg_nightly_pipeline/install/devARM/HepPDT/2.06.01/aarch64-centos7-gcc11-opt;CXX=/cvmfs/sft.cern.ch/lcg/releases/gcc/11.2.0-8a51a/aarch64-centos7/bin/g++")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-configure.log"
  ERROR_FILE "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-configure.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  file(SHA1 "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-configure.log" sha1)
  set(msg "${msg}\nSee also\n  /home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-configure.log [${sha1}]\n")
  file(APPEND /home/sftnight/build/workspace/lcg_nightly_pipeline/build/fail-logs.txt "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-configure.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "HepPDT-2.06.01 configure command succeeded.  See also /home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-configure.log\n")
  message(STATUS "${msg}")
endif()
