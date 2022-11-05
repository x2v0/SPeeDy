// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoClusterParticleAssociation_H
#define EDM4HEP_MutableMCRecoClusterParticleAssociation_H

#include "edm4hep/MCRecoClusterParticleAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoClusterParticleAssociation.h"

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


/** @class MutableMCRecoClusterParticleAssociation
 *  Association between a Cluster and a MCParticle
 *  @author: Placido Fernandez Declara
 */
class MutableMCRecoClusterParticleAssociation {

  friend class MCRecoClusterParticleAssociationCollection;
  friend class MCRecoClusterParticleAssociationMutableCollectionIterator;
  friend class MCRecoClusterParticleAssociation;

public:

  /// default constructor
  MutableMCRecoClusterParticleAssociation();
  MutableMCRecoClusterParticleAssociation(float weight);

  /// constructor from existing MCRecoClusterParticleAssociationObj
  MutableMCRecoClusterParticleAssociation(MCRecoClusterParticleAssociationObj* obj);

  /// copy constructor
  MutableMCRecoClusterParticleAssociation(const MutableMCRecoClusterParticleAssociation& other);

  /// copy-assignment operator
  MutableMCRecoClusterParticleAssociation& operator=(MutableMCRecoClusterParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoClusterParticleAssociation clone() const;

  /// destructor
  ~MutableMCRecoClusterParticleAssociation();

  /// conversion to const object
  operator MCRecoClusterParticleAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the cluster
  const edm4hep::Cluster getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the cluster
  void setRec(edm4hep::Cluster value);
  /// Set the reference to the Monte-Carlo particle
  void setSim(edm4hep::MCParticle value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoClusterParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoClusterParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoClusterParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoClusterParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoClusterParticleAssociation& a, MutableMCRecoClusterParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoClusterParticleAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
