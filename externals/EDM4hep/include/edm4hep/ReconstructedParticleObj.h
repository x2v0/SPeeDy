// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ReconstructedParticleOBJ_H
#define EDM4HEP_ReconstructedParticleOBJ_H

// data model specific includes
#include "edm4hep/ReconstructedParticleData.h"
#include "edm4hep/Cluster.h"
#include "edm4hep/ParticleID.h"
#include "edm4hep/Track.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>
// forward declarations
namespace edm4hep {
class Vertex;
class ParticleID;
}


namespace edm4hep {

class ReconstructedParticle;

class ReconstructedParticleObj : public podio::ObjBase {
public:
  /// constructor
  ReconstructedParticleObj();
  /// copy constructor (does a deep-copy of relation containers)
  ReconstructedParticleObj(const ReconstructedParticleObj&);
  /// constructor from ObjectID and ReconstructedParticleData
  /// does not initialize the internal relation containers
  ReconstructedParticleObj(const podio::ObjectID id, ReconstructedParticleData data);
  /// No assignment operator
  ReconstructedParticleObj& operator=(const ReconstructedParticleObj&) = delete;
  virtual ~ReconstructedParticleObj();

public:
  ReconstructedParticleData data;
  edm4hep::Vertex* m_startVertex{nullptr};
  edm4hep::ParticleID* m_particleIDUsed{nullptr};
  std::vector<edm4hep::Cluster>* m_clusters{nullptr};
  std::vector<edm4hep::Track>* m_tracks{nullptr};
  std::vector<edm4hep::ReconstructedParticle>* m_particles{nullptr};
  std::vector<edm4hep::ParticleID>* m_particleIDs{nullptr};
};

} // namespace edm4hep


#endif
