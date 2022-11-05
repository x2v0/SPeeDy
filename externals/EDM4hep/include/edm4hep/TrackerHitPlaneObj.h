// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackerHitPlaneOBJ_H
#define EDM4HEP_TrackerHitPlaneOBJ_H

// data model specific includes
#include "edm4hep/TrackerHitPlaneData.h"
#include "edm4hep/ObjectID.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>


namespace edm4hep {

class TrackerHitPlane;

class TrackerHitPlaneObj : public podio::ObjBase {
public:
  /// constructor
  TrackerHitPlaneObj();
  /// copy constructor (does a deep-copy of relation containers)
  TrackerHitPlaneObj(const TrackerHitPlaneObj&);
  /// constructor from ObjectID and TrackerHitPlaneData
  /// does not initialize the internal relation containers
  TrackerHitPlaneObj(const podio::ObjectID id, TrackerHitPlaneData data);
  /// No assignment operator
  TrackerHitPlaneObj& operator=(const TrackerHitPlaneObj&) = delete;
  virtual ~TrackerHitPlaneObj();

public:
  TrackerHitPlaneData data;
  std::vector<edm4hep::ObjectID>* m_rawHits{nullptr};
};

} // namespace edm4hep


#endif
