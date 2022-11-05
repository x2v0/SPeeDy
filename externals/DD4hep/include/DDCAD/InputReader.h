//==========================================================================
//  AIDA Detector description implementation 
//--------------------------------------------------------------------------
// Copyright (C) Organisation europeenne pour la Recherche nucleaire (CERN)
// All rights reserved.
//
// For the licensing terms see $DD4hepINSTALL/LICENSE.
// For the list of contributors see $DD4hepINSTALL/doc/CREDITS.
//
// Author     : M.Frank
//
//==========================================================================
#ifndef DDCAD_INPUTREADER_H
#define DDCAD_INPUTREADER_H

// Framework include files
#include <DD4hep/config.h>

/// ROOT include files
#include <TGeoVolume.h>
#include <TGeoTessellated.h>

/// C/C++ include files
#include <string>
#include <vector>
#include <memory>

/// Namespace for the AIDA detector description toolkit
namespace dd4hep {

  /// Forward declarations
  class Detector;
  
  /// Namespace for implementation details of the AIDA detector description toolkit
  namespace cad  {

    /// Interface of the reader class to input geometry shapes from CAD files
    /**
     *
     *  \author  M.Frank
     *  \version 1.0
     *  \ingroup DD4HEP_DDCAD
     */
    class InputReader   {
    public:
      /// Reference to the detector object
      Detector& detector;
      
    public:
      /// Default constructor
      InputReader(Detector& detector);

      /// Default destructor
      virtual ~InputReader();

      /// Read input file
      virtual std::vector<std::unique_ptr<TGeoTessellated> >
      readShapes(const std::string& source, double unit_length)  const  = 0;

      /// Read input file and create a volume-set
      virtual std::vector<std::unique_ptr<TGeoVolume> >
      readVolumes(const std::string& source, double unit_length)  const = 0;
    };
    
  }        /* End namespace cad                      */
}          /* End namespace dd4hep                   */
#endif // DDCAD_INPUTREADER_H
