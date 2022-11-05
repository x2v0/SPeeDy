// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoTrackerAssociation_H
#define EDM4HEP_MCRecoTrackerAssociation_H

#include "edm4hep/MCRecoTrackerAssociationObj.h"

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

class MutableMCRecoTrackerAssociation;

/** @class MCRecoTrackerAssociation
 *  Association between a TrackerHit and the corresponding simulated TrackerHit
 *  @author: C. Bernet, B. Hegner
 */
class MCRecoTrackerAssociation {

  friend class MutableMCRecoTrackerAssociation;
  friend class MCRecoTrackerAssociationCollection;
  friend class MCRecoTrackerAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoTrackerAssociation();
  MCRecoTrackerAssociation(float weight);

  /// constructor from existing MCRecoTrackerAssociationObj
  MCRecoTrackerAssociation(MCRecoTrackerAssociationObj* obj);

  /// copy constructor
  MCRecoTrackerAssociation(const MCRecoTrackerAssociation& other);

  /// copy-assignment operator
  MCRecoTrackerAssociation& operator=(MCRecoTrackerAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoTrackerAssociation clone() const;

  /// destructor
  ~MCRecoTrackerAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::TrackerHit getRec() const;
  /// Access the reference to the simulated hit
  const edm4hep::SimTrackerHit getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoTrackerAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoTrackerAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoTrackerAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoTrackerAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoTrackerAssociation& a, MCRecoTrackerAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoTrackerAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoTrackerAssociation& value);

} // namespace edm4hep


#endif
