// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoTrackerHitPlaneAssociation_H
#define EDM4HEP_MCRecoTrackerHitPlaneAssociation_H

#include "edm4hep/MCRecoTrackerHitPlaneAssociationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class TrackerHitPlane;
class MutableTrackerHitPlane;
class SimTrackerHit;
class MutableSimTrackerHit;
}


namespace edm4hep {

class MutableMCRecoTrackerHitPlaneAssociation;

/** @class MCRecoTrackerHitPlaneAssociation
 *  Association between a TrackerHitPlane and the corresponding simulated TrackerHit
 *  @author: Placido Fernandez Declara
 */
class MCRecoTrackerHitPlaneAssociation {

  friend class MutableMCRecoTrackerHitPlaneAssociation;
  friend class MCRecoTrackerHitPlaneAssociationCollection;
  friend class MCRecoTrackerHitPlaneAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoTrackerHitPlaneAssociation();
  MCRecoTrackerHitPlaneAssociation(float weight);

  /// constructor from existing MCRecoTrackerHitPlaneAssociationObj
  MCRecoTrackerHitPlaneAssociation(MCRecoTrackerHitPlaneAssociationObj* obj);

  /// copy constructor
  MCRecoTrackerHitPlaneAssociation(const MCRecoTrackerHitPlaneAssociation& other);

  /// copy-assignment operator
  MCRecoTrackerHitPlaneAssociation& operator=(MCRecoTrackerHitPlaneAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoTrackerHitPlaneAssociation clone() const;

  /// destructor
  ~MCRecoTrackerHitPlaneAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::TrackerHitPlane getRec() const;
  /// Access the reference to the simulated hit
  const edm4hep::SimTrackerHit getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoTrackerHitPlaneAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoTrackerHitPlaneAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoTrackerHitPlaneAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoTrackerHitPlaneAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoTrackerHitPlaneAssociation& a, MCRecoTrackerHitPlaneAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoTrackerHitPlaneAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoTrackerHitPlaneAssociation& value);

} // namespace edm4hep


#endif
