// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoCaloParticleAssociation_H
#define EDM4HEP_MutableMCRecoCaloParticleAssociation_H

#include "edm4hep/MCRecoCaloParticleAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoCaloParticleAssociation.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class CalorimeterHit;
class MutableCalorimeterHit;
class MCParticle;
class MutableMCParticle;
}


namespace edm4hep {


/** @class MutableMCRecoCaloParticleAssociation
 *  Association between a CalorimeterHit and a MCParticle
 *  @author: Placido Fernandez Declara
 */
class MutableMCRecoCaloParticleAssociation {

  friend class MCRecoCaloParticleAssociationCollection;
  friend class MCRecoCaloParticleAssociationMutableCollectionIterator;
  friend class MCRecoCaloParticleAssociation;

public:

  /// default constructor
  MutableMCRecoCaloParticleAssociation();
  MutableMCRecoCaloParticleAssociation(float weight);

  /// constructor from existing MCRecoCaloParticleAssociationObj
  MutableMCRecoCaloParticleAssociation(MCRecoCaloParticleAssociationObj* obj);

  /// copy constructor
  MutableMCRecoCaloParticleAssociation(const MutableMCRecoCaloParticleAssociation& other);

  /// copy-assignment operator
  MutableMCRecoCaloParticleAssociation& operator=(MutableMCRecoCaloParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoCaloParticleAssociation clone() const;

  /// destructor
  ~MutableMCRecoCaloParticleAssociation();

  /// conversion to const object
  operator MCRecoCaloParticleAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::CalorimeterHit getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the reconstructed hit
  void setRec(edm4hep::CalorimeterHit value);
  /// Set the reference to the Monte-Carlo particle
  void setSim(edm4hep::MCParticle value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoCaloParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoCaloParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoCaloParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoCaloParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoCaloParticleAssociation& a, MutableMCRecoCaloParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoCaloParticleAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
