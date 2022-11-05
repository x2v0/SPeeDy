// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoClusterParticleAssociation_H
#define EDM4HEP_MCRecoClusterParticleAssociation_H

#include "edm4hep/MCRecoClusterParticleAssociationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class Cluster;
class MutableCluster;
class MCParticle;
class MutableMCParticle;
}


namespace edm4hep {

class MutableMCRecoClusterParticleAssociation;

/** @class MCRecoClusterParticleAssociation
 *  Association between a Cluster and a MCParticle
 *  @author: Placido Fernandez Declara
 */
class MCRecoClusterParticleAssociation {

  friend class MutableMCRecoClusterParticleAssociation;
  friend class MCRecoClusterParticleAssociationCollection;
  friend class MCRecoClusterParticleAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoClusterParticleAssociation();
  MCRecoClusterParticleAssociation(float weight);

  /// constructor from existing MCRecoClusterParticleAssociationObj
  MCRecoClusterParticleAssociation(MCRecoClusterParticleAssociationObj* obj);

  /// copy constructor
  MCRecoClusterParticleAssociation(const MCRecoClusterParticleAssociation& other);

  /// copy-assignment operator
  MCRecoClusterParticleAssociation& operator=(MCRecoClusterParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoClusterParticleAssociation clone() const;

  /// destructor
  ~MCRecoClusterParticleAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the cluster
  const edm4hep::Cluster getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoClusterParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoClusterParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoClusterParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoClusterParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoClusterParticleAssociation& a, MCRecoClusterParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoClusterParticleAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoClusterParticleAssociation& value);

} // namespace edm4hep


#endif
