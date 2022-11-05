// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoParticleAssociation_H
#define EDM4HEP_MCRecoParticleAssociation_H

#include "edm4hep/MCRecoParticleAssociationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class ReconstructedParticle;
class MutableReconstructedParticle;
class MCParticle;
class MutableMCParticle;
}


namespace edm4hep {

class MutableMCRecoParticleAssociation;

/** @class MCRecoParticleAssociation
 *  Used to keep track of the correspondence between MC and reconstructed particles
 *  @author: C. Bernet, B. Hegner
 */
class MCRecoParticleAssociation {

  friend class MutableMCRecoParticleAssociation;
  friend class MCRecoParticleAssociationCollection;
  friend class MCRecoParticleAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoParticleAssociation();
  MCRecoParticleAssociation(float weight);

  /// constructor from existing MCRecoParticleAssociationObj
  MCRecoParticleAssociation(MCRecoParticleAssociationObj* obj);

  /// copy constructor
  MCRecoParticleAssociation(const MCRecoParticleAssociation& other);

  /// copy-assignment operator
  MCRecoParticleAssociation& operator=(MCRecoParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoParticleAssociation clone() const;

  /// destructor
  ~MCRecoParticleAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed particle
  const edm4hep::ReconstructedParticle getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoParticleAssociation& a, MCRecoParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoParticleAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoParticleAssociation& value);

} // namespace edm4hep


#endif
