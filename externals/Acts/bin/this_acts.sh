# set up environment variables
# the ${VAR:+:} part adds a double colon only if VAR is not empty
export PATH="/cvmfs/sft-nightlies.cern.ch/lcg/latest/acts/6.0.0-3e853/x86_64-centos7-gcc10-opt/bin${PATH:+:}${PATH}"
export LD_LIBRARY_PATH="/cvmfs/sft-nightlies.cern.ch/lcg/latest/acts/6.0.0-3e853/x86_64-centos7-gcc10-opt/lib64${LD_LIBRARY_PATH:+:}${LD_LIBRARY_PATH}"
export DYLD_LIBRARY_PATH="/cvmfs/sft-nightlies.cern.ch/lcg/latest/acts/6.0.0-3e853/x86_64-centos7-gcc10-opt/lib64${DYLD_LIBRARY_PATH:+:}${DYLD_LIBRARY_PATH}"
