#!/usr/bin/python3

import os, re
if hasattr(__builtins__, 'raw_input'): input=raw_input

listname = '.filelist'
PREFIX = os.path.dirname(os.path.abspath(__file__))
INSTALLDIR = os.environ.get('INSTALLDIR', False) or os.environ.get('RPM_INSTALL_PREFIX', False) or input('Type new install directory : ')
NIGHTLY_MODE = os.environ.get('NIGHTLY_MODE', None)

OLDINSTALLDIR = None
filelist = []
patterns = []

#---Read the .filelist file extracting the available information------------------------------------
for line in open(os.path.join(PREFIX, listname)).read().splitlines():
  if not OLDINSTALLDIR:
    OLDINSTALLDIR = line
    continue
  if '->' in line:
    patterns.append(line.split('->'))
  elif line == '.filelist' : 
    continue
  else:
    filelist.append(line)
print('Relocating [%s] to [%s]' % (OLDINSTALLDIR, INSTALLDIR) + ('LCGRELEASES' in os.environ and ' or [%s]' % os.environ['LCGRELEASES'] or ''))

#---Sort source path by its length to resolve issues like /var/build/... and /build/...
for pattern, replacement in patterns:
  patterns.sort(key=lambda entry: len(entry[0]), reverse=True)

#---Loop over the files----------------------------------------------------------------------------
for fname in filelist:
  contents = open(os.path.join(PREFIX, fname), 'r', encoding='utf-8').read()
  modified = False
  for pattern, replacement in patterns:
    #---Check if pattern is in file ---------------------------------------------------------------
    if pattern in contents:
      for install_dir in ('LCGRELEASES' in os.environ and os.environ['LCGRELEASES'].split(':') or []) + [INSTALLDIR]:
        if not NIGHTLY_MODE :
          newdir = os.path.join(install_dir, replacement)
        else:
          newdir = os.path.normpath(re.sub('.*'+ OLDINSTALLDIR, install_dir, pattern))
        #---Stop loop if the destination exists--------------------------------------------------
        if os.path.exists(newdir):
          break
      #print('Replacing %s\n     with %s\n  in file %s' % (pattern, newdir, fname))
      contents = contents.replace(pattern, newdir)
      modified = True
  if modified:
    open(os.path.join(PREFIX, fname), 'w',  encoding='utf-8').write(contents)
