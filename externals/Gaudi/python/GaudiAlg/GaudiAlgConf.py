#Sun Jul 31 03:18:02 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class ErrorTool( ConfigurableAlgTool ) :
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
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'ContextService' : 'AlgContextSvc', # str
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<AlgTool>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<AlgTool>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<AlgTool>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<AlgTool>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<AlgTool>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<AlgTool>] """,
    'ContextService' : """ the name of Algorithm Context Service [GaudiTool] """,
  }
  __declaration_location__ = 'ErrorTool.cpp:30'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ErrorTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'ErrorTool'
  pass # class ErrorTool

class EventCounter( ConfigurableAlgorithm ) :
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
    'Frequency' : 1, # int
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
    'Frequency' : """  [EventCounter] """,
  }
  __declaration_location__ = 'GaudiAlg_entries.cpp:16'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EventCounter, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'EventCounter'
  pass # class EventCounter

class EventNodeKiller( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'Nodes' : [  ], # list
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
    'Nodes' : """  [EventNodeKiller] """,
  }
  __declaration_location__ = 'EventNodeKiller.cpp:22'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(EventNodeKiller, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'EventNodeKiller'
  pass # class EventNodeKiller

class GaudiSequencer( ConfigurableAlgorithm ) :
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
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'Members' : [  ], # list
    'Sequential' : False, # bool
    'ModeOR' : False, # bool
    'IgnoreFilterPassed' : False, # bool
    'MeasureTime' : False, # bool
    'ReturnOK' : False, # bool
    'ShortCircuit' : True, # bool
    'Invert' : False, # bool
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Gaudi::Sequence>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Gaudi::Sequence>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Gaudi::Sequence>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Gaudi::Sequence>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Gaudi::Sequence>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Gaudi::Sequence>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiSequencer] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiSequencer] """,
    'Members' : """ list of algorithms [GaudiSequencer] """,
    'Sequential' : """ execute members one at a time [GaudiSequencer] """,
    'ModeOR' : """ use OR logic instead of AND [GaudiSequencer] """,
    'IgnoreFilterPassed' : """ always continue [GaudiSequencer] """,
    'MeasureTime' : """ measure time [GaudiSequencer] """,
    'ReturnOK' : """ forces the sequencer to return a good status [GaudiSequencer] """,
    'ShortCircuit' : """ stop processing as soon as possible [GaudiSequencer] """,
    'Invert' : """ invert the logic result of the sequencer [GaudiSequencer] """,
  }
  __declaration_location__ = 'GaudiAlg_entries.cpp:19'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(GaudiSequencer, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'GaudiSequencer'
  pass # class GaudiSequencer

class HistoTool( ConfigurableAlgTool ) :
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
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'ContextService' : 'AlgContextSvc', # str
    'HistoProduce' : True, # bool
    'HistoPrint' : False, # bool
    'HistoCountersPrint' : True, # bool
    'HistoCheckForNaN' : True, # bool
    'HistoSplitDir' : False, # bool
    'HistoOffSet' : 0, # int
    'HistoTopDir' : '', # str
    'HistoDir' : 'AlgTool', # str
    'FullDetail' : False, # bool
    'MonitorHistograms' : True, # bool
    'FormatFor1DHistoTable' : '| %2$-45.45s | %3$=7d |%8$11.5g | %10$-11.5g|%12$11.5g |%14$11.5g |', # str
    'ShortFormatFor1DHistoTable' : ' | %1$-25.25s %2%', # str
    'HeaderFor1DHistoTable' : '|   Title                                       |    #    |     Mean   |    RMS     |  Skewness  |  Kurtosis  |', # str
    'UseSequencialNumericAutoIDs' : False, # bool
    'AutoStringIDPurgeMap' : { '/' : '=SLASH=' }, # list
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<AlgTool>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<AlgTool>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<AlgTool>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<AlgTool>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<AlgTool>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<AlgTool>] """,
    'ContextService' : """ the name of Algorithm Context Service [GaudiTool] """,
    'HistoProduce' : """ Switch on/off the production of histograms [GaudiHistos<GaudiTool>] """,
    'HistoPrint' : """ Switch on/off the printout of histograms at finalization [GaudiHistos<GaudiTool>] """,
    'HistoCountersPrint' : """ Switch on/off the printout of histogram counters at finalization [GaudiHistos<GaudiTool>] """,
    'HistoCheckForNaN' : """ Switch on/off the checks for NaN and Infinity for histogram fill [GaudiHistos<GaudiTool>] """,
    'HistoSplitDir' : """ Split long directory names into short pieces (suitable for HBOOK) [GaudiHistos<GaudiTool>] """,
    'HistoOffSet' : """ OffSet for automatically assigned histogram numerical identifiers  [GaudiHistos<GaudiTool>] """,
    'HistoTopDir' : """ Top level histogram directory (take care that it ends with '/') [GaudiHistos<GaudiTool>] """,
    'HistoDir' : """ Histogram Directory [GaudiHistos<GaudiTool>] """,
    'FullDetail' : """  [GaudiHistos<GaudiTool>] """,
    'MonitorHistograms' : """  [GaudiHistos<GaudiTool>] """,
    'FormatFor1DHistoTable' : """ Format string for printout of 1D histograms [GaudiHistos<GaudiTool>] """,
    'ShortFormatFor1DHistoTable' : """ Format string for printout of 1D histograms [GaudiHistos<GaudiTool>] """,
    'HeaderFor1DHistoTable' : """ The table header for printout of 1D histograms  [GaudiHistos<GaudiTool>] """,
    'UseSequencialNumericAutoIDs' : """ Flag to allow users to switch back to the old style of creating numerical automatic IDs [GaudiHistos<GaudiTool>] """,
    'AutoStringIDPurgeMap' : """ Map of strings to search and replace when using the title as the basis of automatically generated literal IDs [GaudiHistos<GaudiTool>] """,
  }
  __declaration_location__ = 'HistoTool.cpp:29'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HistoTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'HistoTool'
  pass # class HistoTool

class Prescaler( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'PercentPass' : 100.00000, # float
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
    'PercentPass' : """ percentage of events that should be passed [Prescaler] """,
  }
  __declaration_location__ = 'GaudiAlg_entries.cpp:17'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Prescaler, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'Prescaler'
  pass # class Prescaler

class Sequencer( ConfigurableAlgorithm ) :
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
    'Members' : [  ], # list
    'BranchMembers' : [  ], # list
    'StopOverride' : False, # bool
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
    'Members' : """ member names [Sequencer] """,
    'BranchMembers' : """ branch member names [Sequencer] """,
    'StopOverride' : """ stop on filter failure override [Sequencer] """,
  }
  __declaration_location__ = 'GaudiAlg_entries.cpp:18'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Sequencer, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'Sequencer'
  pass # class Sequencer

class SequencerTimerTool( ConfigurableAlgTool ) :
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
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'ContextService' : 'AlgContextSvc', # str
    'HistoProduce' : False, # bool
    'HistoPrint' : False, # bool
    'HistoCountersPrint' : True, # bool
    'HistoCheckForNaN' : True, # bool
    'HistoSplitDir' : False, # bool
    'HistoOffSet' : 0, # int
    'HistoTopDir' : '', # str
    'HistoDir' : 'AlgTool', # str
    'FullDetail' : False, # bool
    'MonitorHistograms' : True, # bool
    'FormatFor1DHistoTable' : '| %2$-45.45s | %3$=7d |%8$11.5g | %10$-11.5g|%12$11.5g |%14$11.5g |', # str
    'ShortFormatFor1DHistoTable' : ' | %1$-25.25s %2%', # str
    'HeaderFor1DHistoTable' : '|   Title                                       |    #    |     Mean   |    RMS     |  Skewness  |  Kurtosis  |', # str
    'UseSequencialNumericAutoIDs' : False, # bool
    'AutoStringIDPurgeMap' : { '/' : '=SLASH=' }, # list
    'Shots' : 3500000, # int
    'Normalised' : False, # bool
    'GlobalTiming' : False, # bool
    'NameSize' : 30, # int
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<AlgTool>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<AlgTool>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<AlgTool>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<AlgTool>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<AlgTool>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<AlgTool>] """,
    'ContextService' : """ the name of Algorithm Context Service [GaudiTool] """,
    'HistoProduce' : """ Switch on/off the production of histograms [GaudiHistos<GaudiTool>] """,
    'HistoPrint' : """ Switch on/off the printout of histograms at finalization [GaudiHistos<GaudiTool>] """,
    'HistoCountersPrint' : """ Switch on/off the printout of histogram counters at finalization [GaudiHistos<GaudiTool>] """,
    'HistoCheckForNaN' : """ Switch on/off the checks for NaN and Infinity for histogram fill [GaudiHistos<GaudiTool>] """,
    'HistoSplitDir' : """ Split long directory names into short pieces (suitable for HBOOK) [GaudiHistos<GaudiTool>] """,
    'HistoOffSet' : """ OffSet for automatically assigned histogram numerical identifiers  [GaudiHistos<GaudiTool>] """,
    'HistoTopDir' : """ Top level histogram directory (take care that it ends with '/') [GaudiHistos<GaudiTool>] """,
    'HistoDir' : """ Histogram Directory [GaudiHistos<GaudiTool>] """,
    'FullDetail' : """  [GaudiHistos<GaudiTool>] """,
    'MonitorHistograms' : """  [GaudiHistos<GaudiTool>] """,
    'FormatFor1DHistoTable' : """ Format string for printout of 1D histograms [GaudiHistos<GaudiTool>] """,
    'ShortFormatFor1DHistoTable' : """ Format string for printout of 1D histograms [GaudiHistos<GaudiTool>] """,
    'HeaderFor1DHistoTable' : """ The table header for printout of 1D histograms  [GaudiHistos<GaudiTool>] """,
    'UseSequencialNumericAutoIDs' : """ Flag to allow users to switch back to the old style of creating numerical automatic IDs [GaudiHistos<GaudiTool>] """,
    'AutoStringIDPurgeMap' : """ Map of strings to search and replace when using the title as the basis of automatically generated literal IDs [GaudiHistos<GaudiTool>] """,
    'Shots' : """ number of shots for CPU normalization [SequencerTimerTool] """,
    'Normalised' : """ normalise the time to a nominal PIII [SequencerTimerTool] """,
    'GlobalTiming' : """  [SequencerTimerTool] """,
    'NameSize' : """ number of characters to be used in algorithm name column [SequencerTimerTool] """,
  }
  __declaration_location__ = 'SequencerTimerTool.cpp:31'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(SequencerTimerTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'SequencerTimerTool'
  pass # class SequencerTimerTool

class TimingAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'OptimizedForDOD' : False, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'OptimizedForDOD' : """ enable optimization for Data-On-Demand Service [TimingAuditor] """,
  }
  __declaration_location__ = 'TimingAuditor.cpp:97'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(TimingAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'TimingAuditor'
  pass # class TimingAuditor

class TupleTool( ConfigurableAlgTool ) :
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
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'ContextService' : 'AlgContextSvc', # str
    'HistoProduce' : True, # bool
    'HistoPrint' : False, # bool
    'HistoCountersPrint' : True, # bool
    'HistoCheckForNaN' : True, # bool
    'HistoSplitDir' : False, # bool
    'HistoOffSet' : 0, # int
    'HistoTopDir' : '', # str
    'HistoDir' : 'AlgTool', # str
    'FullDetail' : False, # bool
    'MonitorHistograms' : True, # bool
    'FormatFor1DHistoTable' : '| %2$-45.45s | %3$=7d |%8$11.5g | %10$-11.5g|%12$11.5g |%14$11.5g |', # str
    'ShortFormatFor1DHistoTable' : ' | %1$-25.25s %2%', # str
    'HeaderFor1DHistoTable' : '|   Title                                       |    #    |     Mean   |    RMS     |  Skewness  |  Kurtosis  |', # str
    'UseSequencialNumericAutoIDs' : False, # bool
    'AutoStringIDPurgeMap' : { '/' : '=SLASH=' }, # list
    'NTupleProduce' : True, # bool
    'NTuplePrint' : True, # bool
    'NTupleSplitDir' : False, # bool
    'NTupleOffSet' : 0, # int
    'NTupleLUN' : 'FILE1', # str
    'NTupleTopDir' : '', # str
    'NTupleDir' : 'AlgTool', # str
    'EvtColsProduce' : False, # bool
    'EvtColsPrint' : False, # bool
    'EvtColSplitDir' : False, # bool
    'EvtColOffSet' : 0, # int
    'EvtColLUN' : 'EVTCOL', # str
    'EvtColTopDir' : '', # str
    'EvtColDir' : 'AlgTool', # str
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<AlgTool>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<AlgTool>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<AlgTool>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<AlgTool>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<AlgTool>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<AlgTool>] """,
    'ContextService' : """ the name of Algorithm Context Service [GaudiTool] """,
    'HistoProduce' : """ Switch on/off the production of histograms [GaudiHistos<GaudiTool>] """,
    'HistoPrint' : """ Switch on/off the printout of histograms at finalization [GaudiHistos<GaudiTool>] """,
    'HistoCountersPrint' : """ Switch on/off the printout of histogram counters at finalization [GaudiHistos<GaudiTool>] """,
    'HistoCheckForNaN' : """ Switch on/off the checks for NaN and Infinity for histogram fill [GaudiHistos<GaudiTool>] """,
    'HistoSplitDir' : """ Split long directory names into short pieces (suitable for HBOOK) [GaudiHistos<GaudiTool>] """,
    'HistoOffSet' : """ OffSet for automatically assigned histogram numerical identifiers  [GaudiHistos<GaudiTool>] """,
    'HistoTopDir' : """ Top level histogram directory (take care that it ends with '/') [GaudiHistos<GaudiTool>] """,
    'HistoDir' : """ Histogram Directory [GaudiHistos<GaudiTool>] """,
    'FullDetail' : """  [GaudiHistos<GaudiTool>] """,
    'MonitorHistograms' : """  [GaudiHistos<GaudiTool>] """,
    'FormatFor1DHistoTable' : """ Format string for printout of 1D histograms [GaudiHistos<GaudiTool>] """,
    'ShortFormatFor1DHistoTable' : """ Format string for printout of 1D histograms [GaudiHistos<GaudiTool>] """,
    'HeaderFor1DHistoTable' : """ The table header for printout of 1D histograms  [GaudiHistos<GaudiTool>] """,
    'UseSequencialNumericAutoIDs' : """ Flag to allow users to switch back to the old style of creating numerical automatic IDs [GaudiHistos<GaudiTool>] """,
    'AutoStringIDPurgeMap' : """ Map of strings to search and replace when using the title as the basis of automatically generated literal IDs [GaudiHistos<GaudiTool>] """,
    'NTupleProduce' : """ general switch to enable/disable N-tuples [GaudiTuples<GaudiHistoTool>] """,
    'NTuplePrint' : """ print N-tuple statistics [GaudiTuples<GaudiHistoTool>] """,
    'NTupleSplitDir' : """ split long directory names into short pieces (suitable for HBOOK) [GaudiTuples<GaudiHistoTool>] """,
    'NTupleOffSet' : """ offset for numerical N-tuple ID [GaudiTuples<GaudiHistoTool>] """,
    'NTupleLUN' : """ Logical File Unit for N-tuples [GaudiTuples<GaudiHistoTool>] """,
    'NTupleTopDir' : """ top-level directory for N-Tuples [GaudiTuples<GaudiHistoTool>] """,
    'NTupleDir' : """ subdirectory for N-Tuples [GaudiTuples<GaudiHistoTool>] """,
    'EvtColsProduce' : """ general switch to enable/disable Event Tag Collections [GaudiTuples<GaudiHistoTool>] """,
    'EvtColsPrint' : """ print statistics for Event Tag Collections  [GaudiTuples<GaudiHistoTool>] """,
    'EvtColSplitDir' : """ split long directory names into short pieces [GaudiTuples<GaudiHistoTool>] """,
    'EvtColOffSet' : """ offset for numerical N-tuple ID [GaudiTuples<GaudiHistoTool>] """,
    'EvtColLUN' : """ Logical File Unit for Event Tag Collections [GaudiTuples<GaudiHistoTool>] """,
    'EvtColTopDir' : """ Top-level directory for Event Tag Collections [GaudiTuples<GaudiHistoTool>] """,
    'EvtColDir' : """ Subdirectory for Event Tag Collections [GaudiTuples<GaudiHistoTool>] """,
  }
  __declaration_location__ = 'TupleTool.cpp:29'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(TupleTool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAlg'
  def getType( self ):
      return 'TupleTool'
  pass # class TupleTool
