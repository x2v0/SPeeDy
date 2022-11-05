// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoCaloAssociation_H
#define EDM4HEP_MCRecoCaloAssociation_H

#include "edm4hep/MCRecoCaloAssociationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class CalorimeterHit;
class MutableCalorimeterHit;
class SimCalorimeterHit;
class MutableSimCalorimeterHit;
}


namespace edm4hep {

class MutableMCRecoCaloAssociation;

/** @class MCRecoCaloAssociation
 *  Association between a CaloHit and the corresponding simulated CaloHit
 *  @author: C. Bernet, B. Hegner
 */
class MCRecoCaloAssociation {

  friend class MutableMCRecoCaloAssociation;
  friend class MCRecoCaloAssociationCollection;
  friend class MCRecoCaloAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoCaloAssociation();
  MCRecoCaloAssociation(float weight);

  /// constructor from existing MCRecoCaloAssociationObj
  MCRecoCaloAssociation(MCRecoCaloAssociationObj* obj);

  /// copy constructor
  MCRecoCaloAssociation(const MCRecoCaloAssociation& other);

  /// copy-assignment operator
  MCRecoCaloAssociation& operator=(MCRecoCaloAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoCaloAssociation clone() const;

  /// destructor
  ~MCRecoCaloAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::CalorimeterHit getRec() const;
  /// Access the reference to the simulated hit
  const edm4hep::SimCalorimeterHit getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoCaloAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoCaloAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoCaloAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoCaloAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoCaloAssociation& a, MCRecoCaloAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoCaloAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoCaloAssociation& value);

} // namespace edm4hep


#endif
