import os
if 'JSROOTSYS' in os.environ:
    # Let use localy installed JSROOT as THttpServer does
    c.NotebookApp.extra_static_paths.append(os.environ['JSROOTSYS'])
    c.ServerApp.extra_static_paths.append(os.environ['JSROOTSYS'])
elif 'ROOTSYS' in os.environ:
    # By default use JSROOT from ROOTSYS if defined
    c.NotebookApp.extra_static_paths.append(os.path.join(os.environ['ROOTSYS'], 'js/'))
    c.ServerApp.extra_static_paths.append(os.path.join(os.environ['ROOTSYS'], 'js/'))
else:
    # Fall back to CMAKE_INSTALL_PREFIX/CMAKE_INSTALL_JSROOTDIR, e.g., for a system installation
    c.NotebookApp.extra_static_paths.append(os.path.join("/cvmfs/sft-nightlies.cern.ch/lcg/latest/ROOT/6.24.06-2c2b3/x86_64-centos7-gcc11-opt", "js"))
    c.ServerApp.extra_static_paths.append(os.path.join("/cvmfs/sft-nightlies.cern.ch/lcg/latest/ROOT/6.24.06-2c2b3/x86_64-centos7-gcc11-opt", "js"))
