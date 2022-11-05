#Sun Jul 31 03:16:38 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class AlgExecStateSvc( ConfigurableService ) :
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
  __declaration_location__ = 'AlgExecStateSvc.cpp:18'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AlgExecStateSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'AlgExecStateSvc'
  pass # class AlgExecStateSvc

class AppMgrRunable( ConfigurableService ) :
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
    'EvtMax' : -17974594, # int
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
    'EvtMax' : """ number of events to be processed [AppMgrRunable] """,
  }
  __declaration_location__ = 'AppMgrRunable.cpp:21'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AppMgrRunable, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'AppMgrRunable'
  pass # class AppMgrRunable

class ApplicationMgr( ConfigurableService ) :
  __slots__ = { 
    'Go' : 0, # int
    'Exit' : 0, # int
    'TopAlg' : [  ], # list
    'OutStream' : [  ], # list
    'OutStreamType' : 'OutputStream', # str
    'MessageSvcType' : 'MessageSvc', # str
    'JobOptionsSvcType' : 'JobOptionsSvc', # str
    'SvcMapping' : [ 'EvtDataSvc/EventDataSvc' , 'DetDataSvc/DetectorDataSvc' , 'HistogramSvc/HistogramDataSvc' , 'HbookCnv::PersSvc/HbookHistSvc' , 'RootHistCnv::PersSvc/RootHistSvc' , 'EvtPersistencySvc/EventPersistencySvc' , 'DetPersistencySvc/DetectorPersistencySvc' , 'HistogramPersistencySvc/HistogramPersistencySvc' ], # list
    'SvcOptMapping' : [  ], # list
    'EvtMax' : -1, # int
    'ExtSvc' : [  ], # list
    'ExtSvcCreates' : True, # bool
    'Dlls' : [  ], # list
    'JobOptionsType' : 'FILE', # str
    'JobOptionsPath' : '', # str
    'JobOptionsPostAction' : '', # str
    'JobOptionsPreAction' : '', # str
    'Runable' : 'AppMgrRunable', # str
    'EventLoop' : 'EventLoopMgr', # str
    'EvtSel' : '', # str
    'HistogramPersistency' : 'NONE', # str
    'OutputLevel' : 3, # int
    'AppName' : 'ApplicationMgr', # str
    'AppVersion' : '', # str
    'ActivateHistory' : False, # bool
    'PluginDebugLevel' : 0, # int
    'CreateSvc' : [  ], # list
    'AuditTools' : False, # bool
    'AuditServices' : False, # bool
    'AuditAlgorithms' : False, # bool
    'Environment' : {  }, # list
    'InitializationLoopCheck' : True, # bool
    'StopOnSignal' : False, # bool
    'StalledEventMonitoring' : False, # bool
    'PropertiesPrint' : False, # bool
    'ReturnCode' : 0, # int
    'PrintAlgsSequence' : False, # bool
    'AlgTypeAliases' : {  }, # list
  }
  _propertyDocDct = { 
    'Go' : """ For SI's "Go" command via callback [ApplicationMgr] """,
    'Exit' : """ For SI's "Exit" command via callback [ApplicationMgr] """,
    'TopAlg' : """ List of top level algorithms names [ApplicationMgr] """,
    'OutStream' : """ List of output stream names [ApplicationMgr] """,
    'OutStreamType' : """ [[deprecated]] Output stream type [ApplicationMgr] """,
    'MessageSvcType' : """ MessageSvc type [ApplicationMgr] """,
    'JobOptionsSvcType' : """ JobOptionsSvc type [ApplicationMgr] """,
    'SvcMapping' : """ Default mapping of services [ApplicationMgr] """,
    'SvcOptMapping' : """ Default mapping of optional services [ApplicationMgr] """,
    'EvtMax' : """ Number of events to be processed (-1 means all events) [ApplicationMgr] """,
    'ExtSvc' : """ List of external services names [ApplicationMgr] """,
    'ExtSvcCreates' : """ LHCb (default) or ATLAS definition of "ExtSvc" [ApplicationMgr] """,
    'Dlls' : """ List of DDL's names [ApplicationMgr] """,
    'JobOptionsType' : """ Source type (e.g. dbase, file...) [ApplicationMgr] """,
    'JobOptionsPath' : """ The "file" to look for properties [ApplicationMgr] """,
    'JobOptionsPostAction' : """ additional command to run on config [ApplicationMgr] """,
    'JobOptionsPreAction' : """ additional command to run on config [ApplicationMgr] """,
    'Runable' : """ Runable type [ApplicationMgr] """,
    'EventLoop' : """ Processing manager type [ApplicationMgr] """,
    'EvtSel' : """ Event selection [ApplicationMgr] """,
    'HistogramPersistency' : """ Name of the Hist Pers Svc [ApplicationMgr] """,
    'OutputLevel' : """ Message output level [ApplicationMgr] """,
    'AppName' : """ The name of the application [ApplicationMgr] """,
    'AppVersion' : """ The version of the application [ApplicationMgr] """,
    'ActivateHistory' : """ Activate HistorySvc [ApplicationMgr] """,
    'PluginDebugLevel' : """ Debug level for the plugin system [ApplicationMgr] """,
    'CreateSvc' : """ List of extra services to be created [ApplicationMgr] """,
    'AuditTools' : """  [ApplicationMgr] """,
    'AuditServices' : """  [ApplicationMgr] """,
    'AuditAlgorithms' : """  [ApplicationMgr] """,
    'Environment' : """ Environment variables to set [ApplicationMgr] """,
    'InitializationLoopCheck' : """ For ServiceMgr initialization loop checking [ApplicationMgr] """,
    'StopOnSignal' : """ Flag to enable/disable the signal handler that schedule a stop of the event loop [ApplicationMgr] """,
    'StalledEventMonitoring' : """ Flag to enable/disable the monitoring and reporting of stalled events [ApplicationMgr] """,
    'PropertiesPrint' : """ Flag to activate the printout of properties [ApplicationMgr] """,
    'ReturnCode' : """ Return code of the application. Set internally in case of error conditions. [ApplicationMgr] """,
    'PrintAlgsSequence' : """ Print the sequence of algorithms that have been loaded. [ApplicationMgr] """,
    'AlgTypeAliases' : """ Aliases of algorithm types, to replace an algorithm type for every instance [unknown owner type] """,
  }
  __declaration_location__ = 'ApplicationMgr.cpp:48'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ApplicationMgr, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'ApplicationMgr'
  pass # class ApplicationMgr

class DODBasicMapper( ConfigurableAlgTool ) :
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
    'Nodes' : {  }, # list
    'Algorithms' : {  }, # list
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
    'Nodes' : """ map of the type of nodes to be associated to paths (path -> data_type). [DODBasicMapper] """,
    'Algorithms' : """ map of algorithms to be used to produce entries (path -> alg_name). [DODBasicMapper] """,
  }
  __declaration_location__ = 'DODBasicMapper.cpp:41'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(DODBasicMapper, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'DODBasicMapper'
  pass # class DODBasicMapper

class DataOnDemandSvc( ConfigurableService ) :
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
    'IncidentName' : 'DataFault', # str
    'DataSvc' : 'EventDataSvc', # str
    'UsePreceedingPath' : True, # bool
    'Dump' : False, # bool
    'PreInitialize' : False, # bool
    'AllowPreInitializeFailure' : False, # bool
    'Algorithms' : [  ], # list
    'Nodes' : [  ], # list
    'AlgMap' : {  }, # list
    'NodeMap' : {  }, # list
    'Prefix' : '/Event/', # str
    'NodeMappingTools' : [  ], # list
    'AlgMappingTools' : [  ], # list
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
    'IncidentName' : """ the type of handled Incident [DataOnDemandSvc] """,
    'DataSvc' : """ DataSvc name [DataOnDemandSvc] """,
    'UsePreceedingPath' : """ allow creation of partial leaves [DataOnDemandSvc] """,
    'Dump' : """ dump configuration and stastics, if set to True after initialize it triggers a dump immediately [DataOnDemandSvc] """,
    'PreInitialize' : """ (pre)initialize all algorithms [DataOnDemandSvc] """,
    'AllowPreInitializeFailure' : """ allow (pre)initialization of algorithms to fail without stopping the application [DataOnDemandSvc] """,
    'Algorithms' : """ [[deprecated]] use AlgMap [DataOnDemandSvc] """,
    'Nodes' : """ [[deprecated]] use NodeMap [DataOnDemandSvc] """,
    'AlgMap' : """ mapping {'data': 'algorithm'} [DataOnDemandSvc] """,
    'NodeMap' : """ mapping {'data': 'type'} [DataOnDemandSvc] """,
    'Prefix' : """  [DataOnDemandSvc] """,
    'NodeMappingTools' : """ list of tools of type IDODNodeMapper [DataOnDemandSvc] """,
    'AlgMappingTools' : """ list of tools of type IDODAlgMapper [DataOnDemandSvc] """,
  }
  __declaration_location__ = 'DataOnDemandSvc.cpp:688'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(DataOnDemandSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'DataOnDemandSvc'
  pass # class DataOnDemandSvc

class DataStreamTool( ConfigurableAlgTool ) :
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
  __declaration_location__ = 'DataStreamToolFactory.cpp:12'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(DataStreamTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'DataStreamTool'
  pass # class DataStreamTool

class EventCollectionSelector( ConfigurableService ) :
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
    'CnvService' : 'EvtTupleSvc', # str
    'Authentication' : '', # str
    'Container' : 'B2PiPi', # str
    'Item' : 'Address', # str
    'Criteria' : '', # str
    'DB' : '', # str
    'DbType' : '', # str
    'DbService' : '', # str
    'Function' : 'NTuple::Selector', # str
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
    'CnvService' : """ name of the event collection service [EventCollectionSelector] """,
    'Authentication' : """ authentication string (if needed) [EventCollectionSelector] """,
    'Container' : """ container name [EventCollectionSelector] """,
    'Item' : """ item name [EventCollectionSelector] """,
    'Criteria' : """ criteria [EventCollectionSelector] """,
    'DB' : """ datafile name [EventCollectionSelector] """,
    'DbType' : """ database type identifier [EventCollectionSelector] """,
    'DbService' : """ database service (exclusive property with db type) [EventCollectionSelector] """,
    'Function' : """ selector name [EventCollectionSelector] """,
  }
  __declaration_location__ = 'EventCollectionSelector.cpp:28'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EventCollectionSelector, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'EventCollectionSelector'
  pass # class EventCollectionSelector

class EventLoopMgr( ConfigurableService ) :
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
    'TopAlg' : [  ], # list
    'OutStream' : [  ], # list
    'OutStreamType' : 'OutputStream', # str
    'PrintControlFlowExpression' : False, # bool
    'HistogramPersistency' : '', # str
    'EvtSel' : '', # str
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
    'TopAlg' : """ list of top level algorithms names [MinimalEventLoopMgr] """,
    'OutStream' : """ list of output stream names [MinimalEventLoopMgr] """,
    'OutStreamType' : """ [[deprecated]] default type for OutputStream instances [MinimalEventLoopMgr] """,
    'PrintControlFlowExpression' : """ Print the control flow expression representing the content of TopAlg [MinimalEventLoopMgr] """,
    'HistogramPersistency' : """ name of the Hist Pers type [EventLoopMgr] """,
    'EvtSel' : """ event selector [EventLoopMgr] """,
    'Warnings' : """ set to false to suppress warning messages [EventLoopMgr] """,
  }
  __declaration_location__ = 'EventLoopMgr.cpp:20'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EventLoopMgr, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'EventLoopMgr'
  pass # class EventLoopMgr

class EventSelector( ConfigurableService ) :
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
    'Input' : [  ], # list
    'FirstEvent' : 0, # int
    'EvtMax' : 2147483647, # int
    'PrintFreq' : 10, # int
    'StreamManager' : 'DataStreamTool', # str
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
    'Input' : """ input stream specifiers (for job options) [EventSelector] """,
    'FirstEvent' : """ first event to be processed [EventSelector] """,
    'EvtMax' : """ maximum number of events to be processed [EventSelector] """,
    'PrintFreq' : """ printout frequency [EventSelector] """,
    'StreamManager' : """  [EventSelector] """,
  }
  __declaration_location__ = 'EventSelector.cpp:28'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EventSelector, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'EventSelector'
  pass # class EventSelector

class Gaudi__Monitoring__JSONSink( ConfigurableService ) :
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
    'FileName' : 'json_output.json', # str
    'NamesToSave' : [  ], # list
    'ComponentsToSave' : [  ], # list
    'TypesToSave' : [  ], # list
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
    'FileName' : """ Name of output json file [Gaudi::Monitoring::JSONSink] """,
    'NamesToSave' : """ Names of entities to save [Gaudi::Monitoring::JSONSink] """,
    'ComponentsToSave' : """ Component names of entities to save [Gaudi::Monitoring::JSONSink] """,
    'TypesToSave' : """ Type names of entities to save [Gaudi::Monitoring::JSONSink] """,
  }
  __declaration_location__ = 'JSONSink.cpp:83'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Monitoring__JSONSink, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'Gaudi::Monitoring::JSONSink'
  pass # class Gaudi__Monitoring__JSONSink

class Gaudi__Monitoring__MessageSvcSink( ConfigurableService ) :
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
  __declaration_location__ = 'MessageSvcSink.cpp:191'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Monitoring__MessageSvcSink, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'Gaudi::Monitoring::MessageSvcSink'
  pass # class Gaudi__Monitoring__MessageSvcSink

class IncidentProcAlg( ConfigurableAlgorithm ) :
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
    'Cardinality' : 0, # int
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
  __declaration_location__ = 'IncidentProcAlg.cpp:16'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(IncidentProcAlg, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'IncidentProcAlg'
  pass # class IncidentProcAlg

class IncidentSvc( ConfigurableService ) :
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
  __declaration_location__ = 'IncidentSvc.cpp:37'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(IncidentSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'IncidentSvc'
  pass # class IncidentSvc

class InertMessageSvc( ConfigurableService ) :
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
    'Format' : '% F%18W%S%7W%R%T %0W%M', # str
    'timeFormat' : '%Y-%m-%d %H:%M:%S,%f', # str
    'showStats' : False, # bool
    'statLevel' : 0, # int
    'setVerbose' : [  ], # list
    'setDebug' : [  ], # list
    'setInfo' : [  ], # list
    'setWarning' : [  ], # list
    'setError' : [  ], # list
    'setFatal' : [  ], # list
    'setAlways' : [  ], # list
    'useColors' : False, # bool
    'verboseColorCode' : [  ], # list
    'debugColorCode' : [  ], # list
    'infoColorCode' : [  ], # list
    'warningColorCode' : [ 'yellow' ], # list
    'errorColorCode' : [ 'white' , 'red' ], # list
    'fatalColorCode' : [ 'blue' , 'red' ], # list
    'alwaysColorCode' : [  ], # list
    'defaultLimit' : 500, # int
    'verboseLimit' : 500, # int
    'debugLimit' : 500, # int
    'infoLimit' : 500, # int
    'warningLimit' : 500, # int
    'errorLimit' : 500, # int
    'fatalLimit' : 500, # int
    'alwaysLimit' : 0, # int
    'enableSuppression' : False, # bool
    'countInactive' : False, # bool
    'tracedInactiveSources' : [  ], # list
    'loggedStreams' : {  }, # list
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
    'Format' : """  [MessageSvc] """,
    'timeFormat' : """  [MessageSvc] """,
    'showStats' : """  [MessageSvc] """,
    'statLevel' : """  [MessageSvc] """,
    'setVerbose' : """  [MessageSvc] """,
    'setDebug' : """  [MessageSvc] """,
    'setInfo' : """  [MessageSvc] """,
    'setWarning' : """  [MessageSvc] """,
    'setError' : """  [MessageSvc] """,
    'setFatal' : """  [MessageSvc] """,
    'setAlways' : """  [MessageSvc] """,
    'useColors' : """  [MessageSvc] """,
    'verboseColorCode' : """  [MessageSvc] """,
    'debugColorCode' : """  [MessageSvc] """,
    'infoColorCode' : """  [MessageSvc] """,
    'warningColorCode' : """  [MessageSvc] """,
    'errorColorCode' : """  [MessageSvc] """,
    'fatalColorCode' : """  [MessageSvc] """,
    'alwaysColorCode' : """  [MessageSvc] """,
    'defaultLimit' : """  [MessageSvc] """,
    'verboseLimit' : """  [MessageSvc] """,
    'debugLimit' : """  [MessageSvc] """,
    'infoLimit' : """  [MessageSvc] """,
    'warningLimit' : """  [MessageSvc] """,
    'errorLimit' : """  [MessageSvc] """,
    'fatalLimit' : """  [MessageSvc] """,
    'alwaysLimit' : """  [MessageSvc] """,
    'enableSuppression' : """  [MessageSvc] """,
    'countInactive' : """  [MessageSvc] """,
    'tracedInactiveSources' : """ for each message source specified,  print a stack trace for the unprotected and unseen messages [MessageSvc] """,
    'loggedStreams' : """ MessageStream sources we want to dump into a logfile [MessageSvc] """,
  }
  __declaration_location__ = 'InertMessageSvc.cpp:20'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(InertMessageSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'InertMessageSvc'
  pass # class InertMessageSvc

class JobOptionsSvc( ConfigurableService ) :
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
    'TYPE' : '', # str
    'PATH' : '', # str
    'SEARCHPATH' : '', # str
    'DUMPFILE' : '', # str
    'PYTHONACTION' : '', # str
    'PYTHONPARAMS' : '', # str
    'GlobalDefaults' : [  ], # list
    'ReportUnused' : False, # bool
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
    'TYPE' : """  [JobOptionsSvc] """,
    'PATH' : """  [JobOptionsSvc] """,
    'SEARCHPATH' : """  [JobOptionsSvc] """,
    'DUMPFILE' : """  [JobOptionsSvc] """,
    'PYTHONACTION' : """  [JobOptionsSvc] """,
    'PYTHONPARAMS' : """  [JobOptionsSvc] """,
    'GlobalDefaults' : """ Allow definition of global defaults for properties as list of pairs (regex, value) [JobOptionsSvc] """,
    'ReportUnused' : """ Print report of properties set, but not used [JobOptionsSvc] """,
  }
  __declaration_location__ = 'JobOptionsSvc.cpp:141'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(JobOptionsSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'JobOptionsSvc'
  pass # class JobOptionsSvc

class MessageSvc( ConfigurableService ) :
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
    'Format' : '% F%18W%S%7W%R%T %0W%M', # str
    'timeFormat' : '%Y-%m-%d %H:%M:%S,%f', # str
    'showStats' : False, # bool
    'statLevel' : 0, # int
    'setVerbose' : [  ], # list
    'setDebug' : [  ], # list
    'setInfo' : [  ], # list
    'setWarning' : [  ], # list
    'setError' : [  ], # list
    'setFatal' : [  ], # list
    'setAlways' : [  ], # list
    'useColors' : False, # bool
    'verboseColorCode' : [  ], # list
    'debugColorCode' : [  ], # list
    'infoColorCode' : [  ], # list
    'warningColorCode' : [ 'yellow' ], # list
    'errorColorCode' : [ 'white' , 'red' ], # list
    'fatalColorCode' : [ 'blue' , 'red' ], # list
    'alwaysColorCode' : [  ], # list
    'defaultLimit' : 500, # int
    'verboseLimit' : 500, # int
    'debugLimit' : 500, # int
    'infoLimit' : 500, # int
    'warningLimit' : 500, # int
    'errorLimit' : 500, # int
    'fatalLimit' : 500, # int
    'alwaysLimit' : 0, # int
    'enableSuppression' : False, # bool
    'countInactive' : False, # bool
    'tracedInactiveSources' : [  ], # list
    'loggedStreams' : {  }, # list
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
    'Format' : """  [MessageSvc] """,
    'timeFormat' : """  [MessageSvc] """,
    'showStats' : """  [MessageSvc] """,
    'statLevel' : """  [MessageSvc] """,
    'setVerbose' : """  [MessageSvc] """,
    'setDebug' : """  [MessageSvc] """,
    'setInfo' : """  [MessageSvc] """,
    'setWarning' : """  [MessageSvc] """,
    'setError' : """  [MessageSvc] """,
    'setFatal' : """  [MessageSvc] """,
    'setAlways' : """  [MessageSvc] """,
    'useColors' : """  [MessageSvc] """,
    'verboseColorCode' : """  [MessageSvc] """,
    'debugColorCode' : """  [MessageSvc] """,
    'infoColorCode' : """  [MessageSvc] """,
    'warningColorCode' : """  [MessageSvc] """,
    'errorColorCode' : """  [MessageSvc] """,
    'fatalColorCode' : """  [MessageSvc] """,
    'alwaysColorCode' : """  [MessageSvc] """,
    'defaultLimit' : """  [MessageSvc] """,
    'verboseLimit' : """  [MessageSvc] """,
    'debugLimit' : """  [MessageSvc] """,
    'infoLimit' : """  [MessageSvc] """,
    'warningLimit' : """  [MessageSvc] """,
    'errorLimit' : """  [MessageSvc] """,
    'fatalLimit' : """  [MessageSvc] """,
    'alwaysLimit' : """  [MessageSvc] """,
    'enableSuppression' : """  [MessageSvc] """,
    'countInactive' : """  [MessageSvc] """,
    'tracedInactiveSources' : """ for each message source specified,  print a stack trace for the unprotected and unseen messages [MessageSvc] """,
    'loggedStreams' : """ MessageStream sources we want to dump into a logfile [MessageSvc] """,
  }
  __declaration_location__ = 'MessageSvc.cpp:72'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(MessageSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'MessageSvc'
  pass # class MessageSvc

class MinimalEventLoopMgr( ConfigurableService ) :
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
    'TopAlg' : [  ], # list
    'OutStream' : [  ], # list
    'OutStreamType' : 'OutputStream', # str
    'PrintControlFlowExpression' : False, # bool
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
    'TopAlg' : """ list of top level algorithms names [MinimalEventLoopMgr] """,
    'OutStream' : """ list of output stream names [MinimalEventLoopMgr] """,
    'OutStreamType' : """ [[deprecated]] default type for OutputStream instances [MinimalEventLoopMgr] """,
    'PrintControlFlowExpression' : """ Print the control flow expression representing the content of TopAlg [MinimalEventLoopMgr] """,
  }
  __declaration_location__ = 'MinimalEventLoopMgr.cpp:14'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(MinimalEventLoopMgr, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'MinimalEventLoopMgr'
  pass # class MinimalEventLoopMgr

class ToolSvc( ConfigurableService ) :
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
  __declaration_location__ = 'ToolSvc.cpp:53'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ToolSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiCoreSvc'
  def getType( self ):
      return 'ToolSvc'
  pass # class ToolSvc
