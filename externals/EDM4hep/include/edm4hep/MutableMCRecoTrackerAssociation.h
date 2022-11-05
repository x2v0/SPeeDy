// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoTrackerAssociation_H
#define EDM4HEP_MutableMCRecoTrackerAssociation_H

#include "edm4hep/MCRecoTrackerAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoTrackerAssociation.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class TrackerHit;
class MutableTrackerHit;
class SimTrackerHit;
class MutableSimTrackerHit;
}


namespace edm4hep {


/** @class MutableMCRecoTrackerAssociation
 *  Association between a TrackerHit and the corresponding simulated TrackerHit
 *  @author: C. Bernet, B. Hegner
 */
class MutableMCRecoTrackerAssociation {

  friend class MCRecoTrackerAssociationCollection;
  friend class MCRecoTrackerAssociationMutableCollectionIterator;
  friend class MCRecoTrackerAssociation;

public:

  /// default constructor
  MutableMCRecoTrackerAssociation();
  MutableMCRecoTrackerAssociation(float weight);

  /// constructor from existing MCRecoTrackerAssociationObj
  MutableMCRecoTrackerAssociation(MCRecoTrackerAssociationObj* obj);

  /// copy constructor
  MutableMCRecoTrackerAssociation(const MutableMCRecoTrackerAssociation& other);

  /// copy-assignment operator
  MutableMCRecoTrackerAssociation& operator=(MutableMCRecoTrackerAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoTrackerAssociation clone() const;

  /// destructor
  ~MutableMCRecoTrackerAssociation();

  /// conversion to const object
  operator MCRecoTrackerAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::TrackerHit getRec() const;
  /// Access the reference to the simulated hit
  const edm4hep::SimTrackerHit getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the reconstructed hit
  void setRec(edm4hep::TrackerHit value);
  /// Set the reference to the simulated hit
  void setSim(edm4hep::SimTrackerHit value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoTrackerAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoTrackerAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoTrackerAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoTrackerAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoTrackerAssociation& a, MutableMCRecoTrackerAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoTrackerAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
