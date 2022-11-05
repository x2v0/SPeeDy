// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableCluster_H
#define EDM4HEP_MutableCluster_H

#include "edm4hep/ClusterObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/Cluster.h"

#include "edm4hep/CalorimeterHit.h"
#include "edm4hep/ParticleID.h"
#include "edm4hep/Vector3f.h"
#include "podio/RelationRange.h"
#include <array>
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableCluster
 *  Calorimeter Hit Cluster
 *  @author: F.Gaede, DESY
 */
class MutableCluster {

  friend class ClusterCollection;
  friend class ClusterMutableCollectionIterator;
  friend class Cluster;

public:

  /// default constructor
  MutableCluster();
  MutableCluster(std::int32_t type, float energy, float energyError, edm4hep::Vector3f position, std::array<float, 6> positionError, float iTheta, float phi, edm4hep::Vector3f directionError);

  /// constructor from existing ClusterObj
  MutableCluster(ClusterObj* obj);

  /// copy constructor
  MutableCluster(const MutableCluster& other);

  /// copy-assignment operator
  MutableCluster& operator=(MutableCluster other);

  /// create a mutable deep-copy of the object with identical relations
  MutableCluster clone() const;

  /// destructor
  ~MutableCluster();

  /// conversion to const object
  operator Cluster() const;

public:

  /// Access the flagword that defines the type of cluster. Bits 16-31 are used internally.
  const std::int32_t& getType() const;

  /// Access the energy of the cluster [GeV]
  const float& getEnergy() const;

  /// Access the error on the energy
  const float& getEnergyError() const;

  /// Access the position of the cluster.
  const edm4hep::Vector3f& getPosition() const;

  /// Access the covariance matrix of the position (6 Parameters)
  const std::array<float, 6>& getPositionError() const;
  /// Access item i of the covariance matrix of the position (6 Parameters)
  const float& getPositionError(size_t i) const;
  /// Access the intrinsic direction of cluster at position  Theta. Not to be confused with direction cluster is seen from IP.
  const float& getITheta() const;

  /// Access the intrinsic direction of cluster at position - Phi. Not to be confused with direction cluster is seen from IP.
  const float& getPhi() const;

  /// Access the covariance matrix of the direction (3 Parameters)
  const edm4hep::Vector3f& getDirectionError() const;



  /// Set the flagword that defines the type of cluster. Bits 16-31 are used internally.
  void setType(std::int32_t value);

  /// Set the energy of the cluster [GeV]
  void setEnergy(float value);

  /// Set the error on the energy
  void setEnergyError(float value);

  /// Set the position of the cluster.
  void setPosition(edm4hep::Vector3f value);
  /// Get reference to position of the cluster.
  edm4hep::Vector3f& position();

  /// Set the covariance matrix of the position (6 Parameters)
  void setPositionError(std::array<float, 6> value);
  void setPositionError(size_t i, float value);
  /// Get reference to covariance matrix of the position (6 Parameters)
  std::array<float, 6>& positionError();

  /// Set the intrinsic direction of cluster at position  Theta. Not to be confused with direction cluster is seen from IP.
  void setITheta(float value);

  /// Set the intrinsic direction of cluster at position - Phi. Not to be confused with direction cluster is seen from IP.
  void setPhi(float value);

  /// Set the covariance matrix of the direction (3 Parameters)
  void setDirectionError(edm4hep::Vector3f value);
  /// Get reference to covariance matrix of the direction (3 Parameters)
  edm4hep::Vector3f& directionError();



  void addToClusters(edm4hep::Cluster);
  unsigned int clusters_size() const;
  edm4hep::Cluster getClusters(unsigned int) const;
  std::vector<edm4hep::Cluster>::const_iterator clusters_begin() const;
  std::vector<edm4hep::Cluster>::const_iterator clusters_end() const;
  podio::RelationRange<edm4hep::Cluster> getClusters() const;
  void addToHits(edm4hep::CalorimeterHit);
  unsigned int hits_size() const;
  edm4hep::CalorimeterHit getHits(unsigned int) const;
  std::vector<edm4hep::CalorimeterHit>::const_iterator hits_begin() const;
  std::vector<edm4hep::CalorimeterHit>::const_iterator hits_end() const;
  podio::RelationRange<edm4hep::CalorimeterHit> getHits() const;
  void addToParticleIDs(edm4hep::ParticleID);
  unsigned int particleIDs_size() const;
  edm4hep::ParticleID getParticleIDs(unsigned int) const;
  std::vector<edm4hep::ParticleID>::const_iterator particleIDs_begin() const;
  std::vector<edm4hep::ParticleID>::const_iterator particleIDs_end() const;
  podio::RelationRange<edm4hep::ParticleID> getParticleIDs() const;
  void addToShapeParameters(float);
  unsigned int shapeParameters_size() const;
  float getShapeParameters(unsigned int) const;
  std::vector<float>::const_iterator shapeParameters_begin() const;
  std::vector<float>::const_iterator shapeParameters_end() const;
  podio::RelationRange<float> getShapeParameters() const;
  void addToHitContributions(float);
  unsigned int hitContributions_size() const;
  float getHitContributions(unsigned int) const;
  std::vector<float>::const_iterator hitContributions_begin() const;
  std::vector<float>::const_iterator hitContributions_end() const;
  podio::RelationRange<float> getHitContributions() const;
  void addToSubdetectorEnergies(float);
  unsigned int subdetectorEnergies_size() const;
  float getSubdetectorEnergies(unsigned int) const;
  std::vector<float>::const_iterator subdetectorEnergies_begin() const;
  std::vector<float>::const_iterator subdetectorEnergies_end() const;
  podio::RelationRange<float> getSubdetectorEnergies() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ClusterObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const Cluster& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableCluster& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableCluster& a, MutableCluster& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  ClusterObj* m_obj;
};

} // namespace edm4hep


#endif
