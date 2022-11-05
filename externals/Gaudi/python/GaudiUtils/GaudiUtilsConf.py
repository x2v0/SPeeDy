#Sun Jul 31 03:17:34 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class FileReadTool( ConfigurableAlgTool ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'MonitorService' : 'MonitorSvc', # str
    'AuditTools' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgTool,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgTool,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [AlgTool] """,
    'MonitorService' : """ name to use for Monitor Service [AlgTool] """,
    'AuditTools' : """ [[deprecated]] unused [AlgTool] """,
    'AuditInitialize' : """ trigger auditor on initialize() [AlgTool] """,
    'AuditStart' : """ trigger auditor on start() [AlgTool] """,
    'AuditStop' : """ trigger auditor on stop() [AlgTool] """,
    'AuditFinalize' : """ trigger auditor on finalize() [AlgTool] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [AlgTool] """,
    'AuditRestart' : """ trigger auditor on restart() [AlgTool] """,
  }
  __declaration_location__ = 'FileReadTool.cpp:43'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(FileReadTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'FileReadTool'
  pass # class FileReadTool

class Gaudi__IODataManager( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'CatalogType' : 'Gaudi::MultiFileCatalog/FileCatalog', # str
    'UseGFAL' : True, # bool
    'QuarantineFiles' : True, # bool
    'AgeLimit' : 2, # int
    'DisablePFNWarning' : False, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'CatalogType' : """ name of the file catalog service [Gaudi::IODataManager] """,
    'UseGFAL' : """ flag for auto gfal data access [Gaudi::IODataManager] """,
    'QuarantineFiles' : """ if unaccessible files should be quarantines in job [Gaudi::IODataManager] """,
    'AgeLimit' : """ age limit [Gaudi::IODataManager] """,
    'DisablePFNWarning' : """ if set to True,  we will not report when a file is opened by its physical name [Gaudi::IODataManager] """,
  }
  __declaration_location__ = 'IODataManager.cpp:47'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__IODataManager, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'Gaudi::IODataManager'
  pass # class Gaudi__IODataManager

class Gaudi__MultiFileCatalog( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'Catalogs' : [ 'xmlcatalog_file:test_catalog.xml' ], # list
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'Catalogs' : """ catalog names [Gaudi::MultiFileCatalog] """,
  }
  __declaration_location__ = 'MultiFileCatalog.cpp:30'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__MultiFileCatalog, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'Gaudi::MultiFileCatalog'
  pass # class Gaudi__MultiFileCatalog

class Gaudi__Utils__SignalMonitorSvc( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
  }
  __declaration_location__ = 'SignalMonitorSvc.cpp:496'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Utils__SignalMonitorSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'Gaudi::Utils::SignalMonitorSvc'
  pass # class Gaudi__Utils__SignalMonitorSvc

class Gaudi__Utils__StopSignalHandler( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'Signals' : [ 'SIGINT' , 'SIGXCPU' ], # list
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'Signals' : """ List of signal names or numbers to use to schedule a stop. If the signal is followed by a '+' the signal is propagated the previously registered handler (if any). [Gaudi::Utils::StopSignalHandler] """,
  }
  __declaration_location__ = 'SignalMonitorSvc.cpp:500'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Utils__StopSignalHandler, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'Gaudi::Utils::StopSignalHandler'
  pass # class Gaudi__Utils__StopSignalHandler

class StalledEventMonitor( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'EventTimeout' : 600, # int
    'MaxTimeoutCount' : 0, # int
    'StackTrace' : False, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'EventTimeout' : """ Number of seconds allowed to process a single event (0 to disable the check). [StalledEventMonitor] """,
    'MaxTimeoutCount' : """ Number timeouts before aborting the execution (0 means never abort). [StalledEventMonitor] """,
    'StackTrace' : """ Whether to print the stack-trace on timeout. [StalledEventMonitor] """,
  }
  __declaration_location__ = 'StalledEventMonitor.cpp:146'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(StalledEventMonitor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'StalledEventMonitor'
  pass # class StalledEventMonitor

class VFSSvc( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'FileAccessTools' : [ 'FileReadTool' ], # list
    'FallBackProtocol' : 'file', # str
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'FileAccessTools' : """ List of tools implementing the IFileAccess interface. [VFSSvc] """,
    'FallBackProtocol' : """ URL prefix to use if the prefix is not present. [VFSSvc] """,
  }
  __declaration_location__ = 'VFSSvc.cpp:64'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(VFSSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiUtils'
  def getType( self ):
      return 'VFSSvc'
  pass # class VFSSvc
