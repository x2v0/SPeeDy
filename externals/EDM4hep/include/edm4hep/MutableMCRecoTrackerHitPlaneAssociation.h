// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoTrackerHitPlaneAssociation_H
#define EDM4HEP_MutableMCRecoTrackerHitPlaneAssociation_H

#include "edm4hep/MCRecoTrackerHitPlaneAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoTrackerHitPlaneAssociation.h"

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


/** @class MutableMCRecoTrackerHitPlaneAssociation
 *  Association between a TrackerHitPlane and the corresponding simulated TrackerHit
 *  @author: Placido Fernandez Declara
 */
class MutableMCRecoTrackerHitPlaneAssociation {

  friend class MCRecoTrackerHitPlaneAssociationCollection;
  friend class MCRecoTrackerHitPlaneAssociationMutableCollectionIterator;
  friend class MCRecoTrackerHitPlaneAssociation;

public:

  /// default constructor
  MutableMCRecoTrackerHitPlaneAssociation();
  MutableMCRecoTrackerHitPlaneAssociation(float weight);

  /// constructor from existing MCRecoTrackerHitPlaneAssociationObj
  MutableMCRecoTrackerHitPlaneAssociation(MCRecoTrackerHitPlaneAssociationObj* obj);

  /// copy constructor
  MutableMCRecoTrackerHitPlaneAssociation(const MutableMCRecoTrackerHitPlaneAssociation& other);

  /// copy-assignment operator
  MutableMCRecoTrackerHitPlaneAssociation& operator=(MutableMCRecoTrackerHitPlaneAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoTrackerHitPlaneAssociation clone() const;

  /// destructor
  ~MutableMCRecoTrackerHitPlaneAssociation();

  /// conversion to const object
  operator MCRecoTrackerHitPlaneAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed hit
  const edm4hep::TrackerHitPlane getRec() const;
  /// Access the reference to the simulated hit
  const edm4hep::SimTrackerHit getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the reconstructed hit
  void setRec(edm4hep::TrackerHitPlane value);
  /// Set the reference to the simulated hit
  void setSim(edm4hep::SimTrackerHit value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoTrackerHitPlaneAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoTrackerHitPlaneAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoTrackerHitPlaneAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoTrackerHitPlaneAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoTrackerHitPlaneAssociation& a, MutableMCRecoTrackerHitPlaneAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoTrackerHitPlaneAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
