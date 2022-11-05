// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoCaloAssociation_H
#define EDM4HEP_MutableMCRecoCaloAssociation_H

#include "edm4hep/MCRecoCaloAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoCaloAssociation.h"

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


/** @class MutableMCRecoCaloAssociation
 *  Association between a CaloHit and the corresponding simulated CaloHit
 *  @author: C. Bernet, B. Hegner
 */
class MutableMCRecoCaloAssociation {

  friend class MCRecoCaloAssociationCollection;
  friend class MCRecoCaloAssociationMutableCollectionIterator;
  friend class MCRecoCaloAssociation;

public:

  /// default constructor
  MutableMCRecoCaloAssociation();
  MutableMCRecoCaloAssociation(float weight);

  /// constructor from existing MCRecoCaloAssociationObj
  MutableMCRecoCaloAssociation(MCRecoCaloAssociationObj* obj);

  /// copy constructor
  MutableMCRecoCaloAssociation(const MutableMCRecoCaloAssociation& other);

  /// copy-assignment operator
  MutableMCRecoCaloAssociation& operator=(MutableMCRecoCaloAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoCaloAssociation clone() const;

  /// destructor
  ~MutableMCRecoCaloAssociation();

  /// conversion to const object
  operator MCRecoCaloAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::CalorimeterHit getRec() const;
  /// Access the reference to the simulated hit
  const edm4hep::SimCalorimeterHit getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the reconstructed hit
  void setRec(edm4hep::CalorimeterHit value);
  /// Set the reference to the simulated hit
  void setSim(edm4hep::SimCalorimeterHit value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoCaloAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoCaloAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoCaloAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoCaloAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoCaloAssociation& a, MutableMCRecoCaloAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoCaloAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
