//==========================================================================
//  AIDA Detector description implementation 
//--------------------------------------------------------------------------
// Copyright (C) Organisation europeenne pour la Recherche nucleaire (CERN)
// All rights reserved.
//
// For the licensing terms see $DD4hepINSTALL/LICENSE.
// For the list of contributors see $DD4hepINSTALL/doc/CREDITS.
//
// Author     : A.Sailer
//
//==========================================================================
#ifndef DD4HEP_VERSION_H
#define DD4HEP_VERSION_H 1

// define version macros for DD4hep
#define DD4HEP_MAJOR_VERSION 1
#define DD4HEP_MINOR_VERSION 23

#define DD4HEP_VERSION_GE(MAJV,MINV)  ( (  DD4HEP_MAJOR_VERSION  > MAJV ) || \
                                        ( (DD4HEP_MAJOR_VERSION == MAJV ) && \
                                          (DD4HEP_MINOR_VERSION >= MINV ) ) )

#define DD4HEP_VERSION_GT(MAJV,MINV)  ( (  DD4HEP_MAJOR_VERSION  > MAJV ) || \
                                        ( (DD4HEP_MAJOR_VERSION == MAJV ) && \
                                          (DD4HEP_MINOR_VERSION >  MINV ) ) )


#endif // DD4HEP_VERSION_H
