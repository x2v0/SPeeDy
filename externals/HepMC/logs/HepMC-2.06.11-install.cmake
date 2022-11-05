


set(ENV{VS_UNICODE_OUTPUT} "")
set(command "${make};install")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-install.log"
  ERROR_FILE "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-install.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  file(SHA1 "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-install.log" sha1)
  set(msg "${msg}\nSee also\n  /build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-install.log [${sha1}]\n")
  file(APPEND /build/jenkins/workspace/lcg_nightly_pipeline/build/fail-logs.txt "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-install.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "HepMC-2.06.11 install command succeeded.  See also /build/jenkins/workspace/lcg_nightly_pipeline/build/externals/HepMC-2.06.11/src/HepMC-2.06.11-stamp/HepMC-2.06.11-install.log\n")
  message(STATUS "${msg}")
endif()
