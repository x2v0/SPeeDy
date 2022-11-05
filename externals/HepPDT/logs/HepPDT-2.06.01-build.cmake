


set(ENV{VS_UNICODE_OUTPUT} "")
set(command "${make}")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-build.log"
  ERROR_FILE "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-build.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  file(SHA1 "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-build.log" sha1)
  set(msg "${msg}\nSee also\n  /home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-build.log [${sha1}]\n")
  file(APPEND /home/sftnight/build/workspace/lcg_nightly_pipeline/build/fail-logs.txt "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-build.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "HepPDT-2.06.01 build command succeeded.  See also /home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01-stamp/HepPDT-2.06.01-build.log\n")
  message(STATUS "${msg}")
endif()
