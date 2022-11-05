


set(ENV{PATH} "/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt/bin:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt/bin:$ENV{PATH}")
set(ENV{CMAKE_PREFIX_PATH} "/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt:$ENV{CMAKE_PREFIX_PATH}")
set(ENV{PKG_CONFIG_PATH} "/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt/lib64/pkgconfig:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt/lib/pkgconfig:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt/lib64/pkgconfig:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt/lib/pkgconfig:$ENV{PKG_CONFIG_PATH}:/usr/lib64/pkgconfig")
set(ENV{PYTHONPATH} "/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt/lib/python3.9/site-packages:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt/lib/python3.9/site-packages:$ENV{PYTHONPATH}:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/Python/3.9.6/x86_64-centos7-gcc11-opt/lib/python3.9/site-packages")
set(ENV{LD_LIBRARY_PATH} "/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt/lib64:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/libffi/3.2.1/x86_64-centos7-gcc11-opt/lib:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt/lib64:/build/jenkins/workspace/lcg_nightly_pipeline/install/dev4/sqlite/3320300/x86_64-centos7-gcc11-opt/lib:$ENV{LD_LIBRARY_PATH}")
set(ENV{VS_UNICODE_OUTPUT} "")
set(command "${make}")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6-stamp/Python-3.9.6-build.log"
  ERROR_FILE "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6-stamp/Python-3.9.6-build.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  file(SHA1 "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6-stamp/Python-3.9.6-build.log" sha1)
  set(msg "${msg}\nSee also\n  /build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6-stamp/Python-3.9.6-build.log [${sha1}]\n")
  file(APPEND /build/jenkins/workspace/lcg_nightly_pipeline/build/fail-logs.txt "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6-stamp/Python-3.9.6-build.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "Python-3.9.6 build command succeeded.  See also /build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6-stamp/Python-3.9.6-build.log\n")
  message(STATUS "${msg}")
endif()
