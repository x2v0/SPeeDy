// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoParticleAssociation_H
#define EDM4HEP_MutableMCRecoParticleAssociation_H

#include "edm4hep/MCRecoParticleAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoParticleAssociation.h"

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


/** @class MutableMCRecoParticleAssociation
 *  Used to keep track of the correspondence between MC and reconstructed particles
 *  @author: C. Bernet, B. Hegner
 */
class MutableMCRecoParticleAssociation {

  friend class MCRecoParticleAssociationCollection;
  friend class MCRecoParticleAssociationMutableCollectionIterator;
  friend class MCRecoParticleAssociation;

public:

  /// default constructor
  MutableMCRecoParticleAssociation();
  MutableMCRecoParticleAssociation(float weight);

  /// constructor from existing MCRecoParticleAssociationObj
  MutableMCRecoParticleAssociation(MCRecoParticleAssociationObj* obj);

  /// copy constructor
  MutableMCRecoParticleAssociation(const MutableMCRecoParticleAssociation& other);

  /// copy-assignment operator
  MutableMCRecoParticleAssociation& operator=(MutableMCRecoParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoParticleAssociation clone() const;

  /// destructor
  ~MutableMCRecoParticleAssociation();

  /// conversion to const object
  operator MCRecoParticleAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed particle
  const edm4hep::ReconstructedParticle getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the reconstructed particle
  void setRec(edm4hep::ReconstructedParticle value);
  /// Set the reference to the Monte-Carlo particle
  void setSim(edm4hep::MCParticle value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoParticleAssociation& a, MutableMCRecoParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoParticleAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
