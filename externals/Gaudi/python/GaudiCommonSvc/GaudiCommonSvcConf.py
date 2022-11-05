#Sun Jul 31 03:19:05 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.GaudiHandles import *
from GaudiKernel.DataHandle import DataHandle
from GaudiKernel.Proxy.Configurable import *

class AlgContextSvc( ConfigurableService ) :
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
    'Check' : True, # bool
    'BypassIncidents' : False, # bool
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
    'Check' : """ Flag to perform more checks [AlgContextSvc] """,
    'BypassIncidents' : """ Flag to bypass begin/endevent incident requirement [AlgContextSvc] """,
  }
  __declaration_location__ = 'AlgContextSvc.cpp:37'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AlgContextSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'AlgContextSvc'
  pass # class AlgContextSvc

class AuditorSvc( ConfigurableService ) :
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
    'Auditors' : [  ], # list
    'Enable' : True, # bool
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
    'Auditors' : """ list of auditors names [AuditorSvc] """,
    'Enable' : """ enable/disable alltogether the auditors [AuditorSvc] """,
  }
  __declaration_location__ = 'AuditorSvc.cpp:23'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AuditorSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'AuditorSvc'
  pass # class AuditorSvc

class ChronoStatSvc( ConfigurableService ) :
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
    'ChronoPrintOutTable' : True, # bool
    'ChronoDestinationCout' : False, # bool
    'ChronoPrintLevel' : 3, # int
    'ChronoTableToBeOrdered' : True, # bool
    'PrintUserTime' : True, # bool
    'PrintSystemTime' : False, # bool
    'PrintEllapsedTime' : False, # bool
    'StatPrintOutTable' : True, # bool
    'StatDestinationCout' : False, # bool
    'StatPrintLevel' : 3, # int
    'StatTableToBeOrdered' : True, # bool
    'AsciiStatsOutputFile' : '', # str
    'StatTableHeader' : ' |    Counter     |     #     |    sum     | mean/eff^* | rms/err^*  |     min     |     max     |', # str
    'UseEfficiencyRowFormat' : True, # bool
    'PerEventFile' : '', # str
    'HiveWhiteBoardSvc' : ServiceHandle('EventDataSvc'), # GaudiHandle
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
    'ChronoPrintOutTable' : """ decide if the final printout should be performed [ChronoStatSvc] """,
    'ChronoDestinationCout' : """ define the destination of the table to be printed [ChronoStatSvc] """,
    'ChronoPrintLevel' : """ print level [ChronoStatSvc] """,
    'ChronoTableToBeOrdered' : """ should the printout be ordered [ChronoStatSvc] """,
    'PrintUserTime' : """  [ChronoStatSvc] """,
    'PrintSystemTime' : """  [ChronoStatSvc] """,
    'PrintEllapsedTime' : """  [ChronoStatSvc] """,
    'StatPrintOutTable' : """ decide if the final printout should be performed [ChronoStatSvc] """,
    'StatDestinationCout' : """ define the destination of the table to be printed [ChronoStatSvc] """,
    'StatPrintLevel' : """ print level [ChronoStatSvc] """,
    'StatTableToBeOrdered' : """ should the printout be ordered [ChronoStatSvc] """,
    'AsciiStatsOutputFile' : """ Name of the output file storing the stats. If empty, no statistics will be saved (default) [ChronoStatSvc] """,
    'StatTableHeader' : """ The header row for the output Stat-table [ChronoStatSvc] """,
    'UseEfficiencyRowFormat' : """ Use the special format for printout of efficiency counters [ChronoStatSvc] """,
    'PerEventFile' : """ File name for per-event deltas [ChronoStatSvc] """,
    'HiveWhiteBoardSvc' : """  [ChronoStatSvc] """,
  }
  __declaration_location__ = 'ChronoStatSvc.cpp:43'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ChronoStatSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'ChronoStatSvc'
  pass # class ChronoStatSvc

class CopyInputStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : False, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
    'TESVetoList' : [  ], # list
    'InputFileLeavesLocation' : DataHandle('/Event/InputFileLeaves', 'R', 'std::vector<DataObject*,std::allocator<DataObject*> >'), # DataHandle
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
    'TESVetoList' : """ names of TES locations to Veto [CopyInputStream] """,
    'InputFileLeavesLocation' : """  [CopyInputStream] """,
  }
  __declaration_location__ = 'CopyInputStream.cpp:86'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(CopyInputStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'CopyInputStream'
  pass # class CopyInputStream

class DataSvcFileEntriesTool( ConfigurableAlgTool ) :
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
    'DataService' : 'EventDataSvc', # str
    'Root' : '', # str
    'ScanOnBeginEvent' : False, # bool
    'IgnoreOriginChange' : False, # bool
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
    'DataService' : """ Name of the data service to use [DataSvcFileEntriesTool] """,
    'Root' : """ Path to the element from which to start the scan [DataSvcFileEntriesTool] """,
    'ScanOnBeginEvent' : """ If the scan has to be started during the BeginEvent incident (true) or on demand (false, default) [DataSvcFileEntriesTool] """,
    'IgnoreOriginChange' : """ Disable the detection of the change in the origin of object between the BeginEvent and the scan [DataSvcFileEntriesTool] """,
  }
  __declaration_location__ = 'DataSvcFileEntriesTool.cpp:213'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(DataSvcFileEntriesTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'DataSvcFileEntriesTool'
  pass # class DataSvcFileEntriesTool

class DetPersistencySvc( ConfigurableService ) :
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
    'CnvServices' : [  ], # list
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
    'CnvServices' : """ Names of services to be requested from the service locator and added by default [PersistencySvc] """,
  }
  __declaration_location__ = 'DetPersistencySvc.cpp:21'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(DetPersistencySvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'DetPersistencySvc'
  pass # class DetPersistencySvc

class EvtCollectionStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'EvtDataSvc' : 'TagCollectionSvc', # str
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names [EvtCollectionStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [EvtCollectionStream] """,
  }
  __declaration_location__ = 'EvtCollectionStream.cpp:31'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EvtCollectionStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'EvtCollectionStream'
  pass # class EvtCollectionStream

class EvtDataSvc( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/Event', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
  }
  __declaration_location__ = 'EvtDataSvc.cpp:37'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EvtDataSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'EvtDataSvc'
  pass # class EvtDataSvc

class EvtPersistencySvc( ConfigurableService ) :
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
    'CnvServices' : [  ], # list
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
    'CnvServices' : """ Names of services to be requested from the service locator and added by default [PersistencySvc] """,
  }
  __declaration_location__ = 'EvtPersistencySvc.cpp:38'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EvtPersistencySvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'EvtPersistencySvc'
  pass # class EvtPersistencySvc

class EvtStoreSvc( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/Event', # str
    'ForceLeaves' : False, # bool
    'DataLoader' : 'EventPersistencySvc', # str
    'EventSlots' : 1, # int
    'PrintPoolStats' : False, # bool
    'PoolSize' : 1024, # int
    'StoreBuckets' : 100, # int
    'InhibitedPathPrefixes' : [  ], # list
    'FollowLinksToAncestors' : True, # bool
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
    'RootCLID' : """ CLID of root entry [EvtStoreSvc] """,
    'RootName' : """ name of root entry [EvtStoreSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [EvtStoreSvc] """,
    'DataLoader' : """  [EvtStoreSvc] """,
    'EventSlots' : """ number of event slots [EvtStoreSvc] """,
    'PrintPoolStats' : """ Print memory pool statistics [EvtStoreSvc] """,
    'PoolSize' : """ Initial per-event memory pool size [KiB] [EvtStoreSvc] """,
    'StoreBuckets' : """ Estimated number of buckets in the store [EvtStoreSvc] """,
    'InhibitedPathPrefixes' : """ Prefixes of TES locations that will not be loaded by the persistency service  [EvtStoreSvc] """,
    'FollowLinksToAncestors' : """ Load objects which reside in files other than the one corresponding to the root of the event store [EvtStoreSvc] """,
  }
  __declaration_location__ = 'EvtStoreSvc.cpp:411'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EvtStoreSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'EvtStoreSvc'
  pass # class EvtStoreSvc

class FileRecordDataSvc( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/FileRecords', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'AutoLoad' : True, # bool
    'IncidentName' : 'NEW_FILE_RECORD', # str
    'SaveIncident' : 'SAVE_FILE_RECORD', # str
    'PersistencySvc' : 'PersistencySvc/FileRecordPersistencySvc', # str
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
    'AutoLoad' : """ autoload of records [RecordDataSvc] """,
    'IncidentName' : """ name of incident to be fired if new record arrives [RecordDataSvc] """,
    'SaveIncident' : """ name of the 'save' incident [RecordDataSvc] """,
    'PersistencySvc' : """ name of the persistency service [RecordDataSvc] """,
  }
  __declaration_location__ = 'FileRecordDataSvc.cpp:61'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(FileRecordDataSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'FileRecordDataSvc'
  pass # class FileRecordDataSvc

class Gaudi__Histograming__Sink__Root( ConfigurableService ) :
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
    'FileName' : 'testHisto.root', # str
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
    'FileName' : """ Name of file where to save histograms [Gaudi::Histograming::Sink::Root] """,
  }
  __declaration_location__ = 'RootHistogramSink.cpp:253'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Histograming__Sink__Root, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'Gaudi::Histograming::Sink::Root'
  pass # class Gaudi__Histograming__Sink__Root

class HistogramPersistencySvc( ConfigurableService ) :
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
    'CnvServices' : [ 'RootHistSvc' ], # list
    'HistogramPersistency' : '', # str
    'OutputFile' : '', # str
    'ConvertHistos' : [  ], # list
    'ExcludeHistos' : [  ], # list
    'Warnings' : True, # bool
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
    'CnvServices' : """ Names of services to be requested from the service locator and added by default [PersistencySvc] """,
    'HistogramPersistency' : """ name of the Hist Pers type [HistogramPersistencySvc] """,
    'OutputFile' : """ name of the output file [HistogramPersistencySvc] """,
    'ConvertHistos' : """ The list of patterns to be accepted for conversion [HistogramPersistencySvc] """,
    'ExcludeHistos' : """ The list of patterns to be excluded from conversion [HistogramPersistencySvc] """,
    'Warnings' : """ Set this property to false to suppress warning messages [HistogramPersistencySvc] """,
  }
  __declaration_location__ = 'HistogramPersistencySvc.cpp:63'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HistogramPersistencySvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'HistogramPersistencySvc'
  pass # class HistogramPersistencySvc

class HistogramSvc( ConfigurableService ) :
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
    'RootCLID' : 1, # int
    'RootName' : '/stat', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'Input' : [  ], # list
    'Predefined1DHistos' : {  }, # list
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
    'Input' : """ input streams [HistogramSvc] """,
    'Predefined1DHistos' : """ histograms with predefined parameters [HistogramSvc] """,
  }
  __declaration_location__ = 'Factory.cpp:28'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HistogramSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'HistogramSvc'
  pass # class HistogramSvc

class InputCopyStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : False, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
    'TESVetoList' : [  ], # list
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
    'TESVetoList' : """ names of TES locations to Veto [InputCopyStream] """,
  }
  __declaration_location__ = 'InputCopyStream.cpp:23'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(InputCopyStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'InputCopyStream'
  pass # class InputCopyStream

class MultiStoreSvc( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/Event', # str
    'Partitions' : [  ], # list
    'DataLoader' : 'EventPersistencySvc', # str
    'DefaultPartition' : 'Default', # str
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
    'RootCLID' : """ CLID of root entry [MultiStoreSvc] """,
    'RootName' : """ name of root entry [MultiStoreSvc] """,
    'Partitions' : """ datastore partition definitions [MultiStoreSvc] """,
    'DataLoader' : """ data loader name [MultiStoreSvc] """,
    'DefaultPartition' : """ default partition name [MultiStoreSvc] """,
  }
  __declaration_location__ = 'MultiStoreSvc.cpp:561'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(MultiStoreSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'MultiStoreSvc'
  pass # class MultiStoreSvc

class OutputStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : True, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
  }
  __declaration_location__ = 'OutputStream.cpp:34'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(OutputStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'OutputStream'
  pass # class OutputStream

class PartitionSwitchAlg( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'Partition' : '', # str
    'Tool' : 'PartitionSwitchTool', # str
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'Partition' : """ option to set the requested partition name [PartitionSwitchAlg] """,
    'Tool' : """ option to set the tool manipulating the multi-service name [PartitionSwitchAlg] """,
  }
  __declaration_location__ = 'PartitionSwitchAlg.cpp:144'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(PartitionSwitchAlg, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'PartitionSwitchAlg'
  pass # class PartitionSwitchAlg

class PartitionSwitchTool( ConfigurableAlgTool ) :
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
    'Actor' : 'EventDataService', # str
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
    'Actor' : """ option to set the multi-service name [PartitionSwitchTool] """,
  }
  __declaration_location__ = 'PartitionSwitchTool.cpp:107'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(PartitionSwitchTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'PartitionSwitchTool'
  pass # class PartitionSwitchTool

class PersistencySvc( ConfigurableService ) :
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
    'CnvServices' : [  ], # list
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
    'CnvServices' : """ Names of services to be requested from the service locator and added by default [PersistencySvc] """,
  }
  __declaration_location__ = 'PersistencySvc.cpp:47'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(PersistencySvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'PersistencySvc'
  pass # class PersistencySvc

class RecordDataSvc( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/Records', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'AutoLoad' : True, # bool
    'IncidentName' : '', # str
    'SaveIncident' : 'SAVE_RECORD', # str
    'PersistencySvc' : 'PersistencySvc/RecordPersistencySvc', # str
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
    'AutoLoad' : """ autoload of records [RecordDataSvc] """,
    'IncidentName' : """ name of incident to be fired if new record arrives [RecordDataSvc] """,
    'SaveIncident' : """ name of the 'save' incident [RecordDataSvc] """,
    'PersistencySvc' : """ name of the persistency service [RecordDataSvc] """,
  }
  __declaration_location__ = 'RecordDataSvc.cpp:45'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(RecordDataSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'RecordDataSvc'
  pass # class RecordDataSvc

class RecordStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : True, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
    'FireIncidents' : False, # bool
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
    'FireIncidents' : """ if to fire incidents for writing opening/closing etc [unknown owner type] """,
  }
  __declaration_location__ = 'RecordStream.cpp:22'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(RecordStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'RecordStream'
  pass # class RecordStream

class RunRecordDataSvc( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/RunRecords', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'AutoLoad' : True, # bool
    'IncidentName' : 'NEW_RUN_RECORD', # str
    'SaveIncident' : 'SAVE_RUN_RECORD', # str
    'PersistencySvc' : 'PersistencySvc/RecordPersistencySvc', # str
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
    'AutoLoad' : """ autoload of records [RecordDataSvc] """,
    'IncidentName' : """ name of incident to be fired if new record arrives [RecordDataSvc] """,
    'SaveIncident' : """ name of the 'save' incident [RecordDataSvc] """,
    'PersistencySvc' : """ name of the persistency service [RecordDataSvc] """,
  }
  __declaration_location__ = 'RunRecordDataSvc.cpp:61'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(RunRecordDataSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'RunRecordDataSvc'
  pass # class RunRecordDataSvc

class RunRecordStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : True, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
  }
  __declaration_location__ = 'RunRecordStream.cpp:22'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(RunRecordStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'RunRecordStream'
  pass # class RunRecordStream

class SequentialOutputStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : True, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
    'EventsPerFile' : 4294967295, # int
    'NumericFilename' : False, # bool
    'NumbersAdded' : 6, # int
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
    'EventsPerFile' : """  [SequentialOutputStream] """,
    'NumericFilename' : """  [SequentialOutputStream] """,
    'NumbersAdded' : """  [SequentialOutputStream] """,
  }
  __declaration_location__ = 'SequentialOutputStream.cpp:28'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(SequentialOutputStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'SequentialOutputStream'
  pass # class SequentialOutputStream

class StoreExplorerAlg( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'Load' : False, # bool
    'PrintEvt' : 1, # int
    'PrintMissing' : 0, # int
    'PrintFreq' : 0.0000000, # float
    'ExploreRelations' : False, # bool
    'DataSvc' : 'EventDataSvc', # str
    'TestAccess' : False, # bool
    'AccessForeign' : False, # bool
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'Load' : """ load non existing items [StoreExplorerAlg] """,
    'PrintEvt' : """ limit printout to first N events [StoreExplorerAlg] """,
    'PrintMissing' : """ indicate if missing entities should be printed [StoreExplorerAlg] """,
    'PrintFreq' : """ printout frequency [StoreExplorerAlg] """,
    'ExploreRelations' : """ if relations should be followed [StoreExplorerAlg] """,
    'DataSvc' : """ name of the data provider service [StoreExplorerAlg] """,
    'TestAccess' : """ test access to objects (DataObject and ContainedObject) [StoreExplorerAlg] """,
    'AccessForeign' : """ indicate if foreign files should be opened [StoreExplorerAlg] """,
  }
  __declaration_location__ = 'StoreExplorerAlg.cpp:224'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(StoreExplorerAlg, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'StoreExplorerAlg'
  pass # class StoreExplorerAlg

class StoreSnifferAlg( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
  }
  __declaration_location__ = 'StoreSnifferAlg.cpp:186'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(StoreSnifferAlg, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'StoreSnifferAlg'
  pass # class StoreSnifferAlg

class TagCollectionStream( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'ItemList' : [  ], # list
    'OptItemList' : [  ], # list
    'AlgDependentItemList' : {  }, # list
    'Preload' : True, # bool
    'PreloadOptItems' : False, # bool
    'Output' : '', # str
    'OutputFile' : '', # str
    'EvtDataSvc' : 'EventDataSvc', # str
    'EvtConversionSvc' : 'EventPersistencySvc', # str
    'AcceptAlgs' : [  ], # list
    'RequireAlgs' : [  ], # list
    'VetoAlgs' : [  ], # list
    'VerifyItems' : True, # bool
    'AddressLeaf' : '/Event', # str
    'AddressColumn' : 'Address', # str
    'TagCollectionSvc' : 'NTupleSvc', # str
    'ObjectsFirst' : True, # bool
    'Collection' : '', # str
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'ItemList' : """ vector of item names to be saved to this stream [OutputStream] """,
    'OptItemList' : """ vector of optional item names to be saved to this stream [OutputStream] """,
    'AlgDependentItemList' : """ mapping between algorithm names, and a list of items for which, if the algorithm in question accepted the event, they should be also stored [OutputStream] """,
    'Preload' : """ flag indicating whether data pre-loading should be performed [OutputStream] """,
    'PreloadOptItems' : """ flag indicating whether optional items should be preloaded [OutputStream] """,
    'Output' : """ name of the output file specification [OutputStream] """,
    'OutputFile' : """ name of the output file [OutputStream] """,
    'EvtDataSvc' : """ name of the service managing the data store [OutputStream] """,
    'EvtConversionSvc' : """ name of the persistency service capable to write data from the store [OutputStream] """,
    'AcceptAlgs' : """ names of Algorithms that this stream accepts [OutputStream] """,
    'RequireAlgs' : """ names of Algorithms that this stream requires [OutputStream] """,
    'VetoAlgs' : """ names of Algorithms that this stream is vetoed by [OutputStream] """,
    'VerifyItems' : """ flag to indicate that item consistency should be checked [OutputStream] """,
    'AddressLeaf' : """ name of the address leaf in the transient event store [TagCollectionStream] """,
    'AddressColumn' : """ name of the address column of the tag collection [TagCollectionStream] """,
    'TagCollectionSvc' : """ name of the collection service [TagCollectionStream] """,
    'ObjectsFirst' : """ flag to indicate that the objects should be written first [TagCollectionStream] """,
    'Collection' : """ name of the tag collection in the transient store [TagCollectionStream] """,
  }
  __declaration_location__ = 'TagCollectionStream.cpp:22'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(TagCollectionStream, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCommonSvc'
  def getType( self ):
      return 'TagCollectionStream'
  pass # class TagCollectionStream
