// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ReconstructedParticle_H
#define EDM4HEP_ReconstructedParticle_H

#include "edm4hep/ReconstructedParticleObj.h"

#include "edm4hep/Cluster.h"
#include "edm4hep/ParticleID.h"
#include "edm4hep/Track.h"
#include "edm4hep/Vector3f.h"
#include "podio/RelationRange.h"
#include <array>
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class Vertex;
class MutableVertex;
class ParticleID;
class MutableParticleID;
}


namespace edm4hep {

class MutableReconstructedParticle;

/** @class ReconstructedParticle
 *  Reconstructed Particle
 *  @author: F.Gaede, DESY
 */
class ReconstructedParticle {

  friend class MutableReconstructedParticle;
  friend class ReconstructedParticleCollection;
  friend class ReconstructedParticleCollectionIterator;

public:
  /// default constructor
  ReconstructedParticle();
  ReconstructedParticle(std::int32_t type, float energy, edm4hep::Vector3f momentum, edm4hep::Vector3f referencePoint, float charge, float mass, float goodnessOfPID, std::array<float, 10> covMatrix);

  /// constructor from existing ReconstructedParticleObj
  ReconstructedParticle(ReconstructedParticleObj* obj);

  /// copy constructor
  ReconstructedParticle(const ReconstructedParticle& other);

  /// copy-assignment operator
  ReconstructedParticle& operator=(ReconstructedParticle other);

  /// create a mutable deep-copy of the object with identical relations
  MutableReconstructedParticle clone() const;

  /// destructor
  ~ReconstructedParticle();


public:

  /// Access the type of reconstructed particle. Check/set collection parameters ReconstructedParticleTypeNames and ReconstructedParticleTypeValues.
  const std::int32_t& getType() const;

  /// Access the [GeV] energy of the reconstructed particle. Four momentum state is not kept consistent internally.
  const float& getEnergy() const;

  /// Access the [GeV] particle momentum. Four momentum state is not kept consistent internally.
  const edm4hep::Vector3f& getMomentum() const;

  /// Access the [mm] reference, i.e. where the particle has been measured
  const edm4hep::Vector3f& getReferencePoint() const;

  /// Access the charge of the reconstructed particle.
  const float& getCharge() const;

  /// Access the [GeV] mass of the reconstructed particle, set independently from four vector. Four momentum state is not kept consistent internally.
  const float& getMass() const;

  /// Access the overall goodness of the PID on a scale of [0;1]
  const float& getGoodnessOfPID() const;

  /// Access the cvariance matrix of the reconstructed particle 4vector (10 parameters). Stored as lower triangle matrix of the four momentum (px,py,pz,E), i.e. cov(px,px), cov(py,##
  const std::array<float, 10>& getCovMatrix() const;
  /// Access item i of the cvariance matrix of the reconstructed particle 4vector (10 parameters). Stored as lower triangle matrix of the four momentum (px,py,pz,E), i.e. cov(px,px), cov(py,##
  const float& getCovMatrix(size_t i) const;

  /// Access the start vertex associated to this particle
  const edm4hep::Vertex getStartVertex() const;
  /// Access the particle Id used for the kinematics of this particle
  const edm4hep::ParticleID getParticleIDUsed() const;

  unsigned int clusters_size() const;
  edm4hep::Cluster getClusters(unsigned int) const;
  std::vector<edm4hep::Cluster>::const_iterator clusters_begin() const;
  std::vector<edm4hep::Cluster>::const_iterator clusters_end() const;
  podio::RelationRange<edm4hep::Cluster> getClusters() const;
  unsigned int tracks_size() const;
  edm4hep::Track getTracks(unsigned int) const;
  std::vector<edm4hep::Track>::const_iterator tracks_begin() const;
  std::vector<edm4hep::Track>::const_iterator tracks_end() const;
  podio::RelationRange<edm4hep::Track> getTracks() const;
  unsigned int particles_size() const;
  edm4hep::ReconstructedParticle getParticles(unsigned int) const;
  std::vector<edm4hep::ReconstructedParticle>::const_iterator particles_begin() const;
  std::vector<edm4hep::ReconstructedParticle>::const_iterator particles_end() const;
  podio::RelationRange<edm4hep::ReconstructedParticle> getParticles() const;
  unsigned int particleIDs_size() const;
  edm4hep::ParticleID getParticleIDs(unsigned int) const;
  std::vector<edm4hep::ParticleID>::const_iterator particleIDs_begin() const;
  std::vector<edm4hep::ParticleID>::const_iterator particleIDs_end() const;
  podio::RelationRange<edm4hep::ParticleID> getParticleIDs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ReconstructedParticleObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ReconstructedParticle& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableReconstructedParticle& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ReconstructedParticle& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(ReconstructedParticle& a, ReconstructedParticle& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  ReconstructedParticleObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ReconstructedParticle& value);

} // namespace edm4hep


#endif
