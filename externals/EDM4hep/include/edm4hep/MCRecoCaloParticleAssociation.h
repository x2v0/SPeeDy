// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoCaloParticleAssociation_H
#define EDM4HEP_MCRecoCaloParticleAssociation_H

#include "edm4hep/MCRecoCaloParticleAssociationObj.h"

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

class MutableMCRecoCaloParticleAssociation;

/** @class MCRecoCaloParticleAssociation
 *  Association between a CalorimeterHit and a MCParticle
 *  @author: Placido Fernandez Declara
 */
class MCRecoCaloParticleAssociation {

  friend class MutableMCRecoCaloParticleAssociation;
  friend class MCRecoCaloParticleAssociationCollection;
  friend class MCRecoCaloParticleAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoCaloParticleAssociation();
  MCRecoCaloParticleAssociation(float weight);

  /// constructor from existing MCRecoCaloParticleAssociationObj
  MCRecoCaloParticleAssociation(MCRecoCaloParticleAssociationObj* obj);

  /// copy constructor
  MCRecoCaloParticleAssociation(const MCRecoCaloParticleAssociation& other);

  /// copy-assignment operator
  MCRecoCaloParticleAssociation& operator=(MCRecoCaloParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoCaloParticleAssociation clone() const;

  /// destructor
  ~MCRecoCaloParticleAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::CalorimeterHit getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoCaloParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoCaloParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoCaloParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoCaloParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoCaloParticleAssociation& a, MCRecoCaloParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoCaloParticleAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoCaloParticleAssociation& value);

} // namespace edm4hep


#endif
