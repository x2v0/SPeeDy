#Sun Jul 31 03:17:28 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class Google__CPUProfiler( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ActivateAt' : [ 'Initialize' , 'ReInitialize' , 'Execute' , 'Finalize' ], # list
    'DisableFor' : [  ], # list
    'EnableFor' : [  ], # list
    'ProfileFreq' : -1, # int
    'DoFullEventProfile' : False, # bool
    'FullEventNSampleEvents' : 1, # int
    'SkipEvents' : 0, # int
    'SkipSequencers' : True, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'ActivateAt' : """ List of phases to activate the Auditoring during [Google::AuditorBase] """,
    'DisableFor' : """ List of component names to disable the auditing for [Google::AuditorBase] """,
    'EnableFor' : """ Any component in this list will be audited. If empty,  all will be done. [Google::AuditorBase] """,
    'ProfileFreq' : """ The frequence to audit events. -1 means all events [Google::AuditorBase] """,
    'DoFullEventProfile' : """ If true, instead of individually auditing components,  the full event (or events) will be audited in one go [Google::AuditorBase] """,
    'FullEventNSampleEvents' : """ The number of events to include in a full event audit,  if enabled [Google::AuditorBase] """,
    'SkipEvents' : """ Number of events to skip before activating the auditing [Google::AuditorBase] """,
    'SkipSequencers' : """ If true,  auditing will be skipped for Sequencer objects. [Google::AuditorBase] """,
  }
  __declaration_location__ = 'GoogleAuditor.cpp:386'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Google__CPUProfiler, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiGoogleProfiling'
  def getType( self ):
      return 'Google::CPUProfiler'
  pass # class Google__CPUProfiler

class Google__HeapChecker( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ActivateAt' : [ 'Initialize' , 'ReInitialize' , 'Execute' , 'Finalize' ], # list
    'DisableFor' : [  ], # list
    'EnableFor' : [  ], # list
    'ProfileFreq' : -1, # int
    'DoFullEventProfile' : False, # bool
    'FullEventNSampleEvents' : 1, # int
    'SkipEvents' : 0, # int
    'SkipSequencers' : True, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'ActivateAt' : """ List of phases to activate the Auditoring during [Google::AuditorBase] """,
    'DisableFor' : """ List of component names to disable the auditing for [Google::AuditorBase] """,
    'EnableFor' : """ Any component in this list will be audited. If empty,  all will be done. [Google::AuditorBase] """,
    'ProfileFreq' : """ The frequence to audit events. -1 means all events [Google::AuditorBase] """,
    'DoFullEventProfile' : """ If true, instead of individually auditing components,  the full event (or events) will be audited in one go [Google::AuditorBase] """,
    'FullEventNSampleEvents' : """ The number of events to include in a full event audit,  if enabled [Google::AuditorBase] """,
    'SkipEvents' : """ Number of events to skip before activating the auditing [Google::AuditorBase] """,
    'SkipSequencers' : """ If true,  auditing will be skipped for Sequencer objects. [Google::AuditorBase] """,
  }
  __declaration_location__ = 'GoogleAuditor.cpp:385'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Google__HeapChecker, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiGoogleProfiling'
  def getType( self ):
      return 'Google::HeapChecker'
  pass # class Google__HeapChecker

class Google__HeapProfiler( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ActivateAt' : [ 'Initialize' , 'ReInitialize' , 'Execute' , 'Finalize' ], # list
    'DisableFor' : [  ], # list
    'EnableFor' : [  ], # list
    'ProfileFreq' : -1, # int
    'DoFullEventProfile' : False, # bool
    'FullEventNSampleEvents' : 1, # int
    'SkipEvents' : 0, # int
    'SkipSequencers' : True, # bool
    'DumpHeapProfiles' : True, # bool
    'PrintProfilesToLog' : False, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'ActivateAt' : """ List of phases to activate the Auditoring during [Google::AuditorBase] """,
    'DisableFor' : """ List of component names to disable the auditing for [Google::AuditorBase] """,
    'EnableFor' : """ Any component in this list will be audited. If empty,  all will be done. [Google::AuditorBase] """,
    'ProfileFreq' : """ The frequence to audit events. -1 means all events [Google::AuditorBase] """,
    'DoFullEventProfile' : """ If true, instead of individually auditing components,  the full event (or events) will be audited in one go [Google::AuditorBase] """,
    'FullEventNSampleEvents' : """ The number of events to include in a full event audit,  if enabled [Google::AuditorBase] """,
    'SkipEvents' : """ Number of events to skip before activating the auditing [Google::AuditorBase] """,
    'SkipSequencers' : """ If true,  auditing will be skipped for Sequencer objects. [Google::AuditorBase] """,
    'DumpHeapProfiles' : """  [Google::HeapProfiler] """,
    'PrintProfilesToLog' : """  [Google::HeapProfiler] """,
  }
  __declaration_location__ = 'GoogleAuditor.cpp:384'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Google__HeapProfiler, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiGoogleProfiling'
  def getType( self ):
      return 'Google::HeapProfiler'
  pass # class Google__HeapProfiler
