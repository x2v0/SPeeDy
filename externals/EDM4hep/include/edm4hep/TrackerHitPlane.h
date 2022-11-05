// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackerHitPlane_H
#define EDM4HEP_TrackerHitPlane_H

#include "edm4hep/TrackerHitPlaneObj.h"

#include "edm4hep/ObjectID.h"
#include "edm4hep/Vector2f.h"
#include "edm4hep/Vector3d.h"
#include "podio/RelationRange.h"
#include <array>
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableTrackerHitPlane;

/** @class TrackerHitPlane
 *  Tracker hit plane
 *  @author: Placido Fernandez Declara, CERN
 */
class TrackerHitPlane {

  friend class MutableTrackerHitPlane;
  friend class TrackerHitPlaneCollection;
  friend class TrackerHitPlaneCollectionIterator;

public:
  /// default constructor
  TrackerHitPlane();
  TrackerHitPlane(std::uint64_t cellID, std::int32_t type, std::int32_t quality, float time, float eDep, float eDepError, float edx, edm4hep::Vector2f u, edm4hep::Vector2f v, float du, float dv, edm4hep::Vector3d position, std::array<float, 6> covMatrix);

  /// constructor from existing TrackerHitPlaneObj
  TrackerHitPlane(TrackerHitPlaneObj* obj);

  /// copy constructor
  TrackerHitPlane(const TrackerHitPlane& other);

  /// copy-assignment operator
  TrackerHitPlane& operator=(TrackerHitPlane other);

  /// create a mutable deep-copy of the object with identical relations
  MutableTrackerHitPlane clone() const;

  /// destructor
  ~TrackerHitPlane();


public:

  /// Access the ID of the sensor that created this hit
  const std::uint64_t& getCellID() const;

  /// Access the type of raw data hit, either one of edm4hep::TPCHIT, edm4hep::SIMTRACKERHIT - see collection parameters "TrackerHitTypeNames" and "TrackerHitTypeValues".
  const std::int32_t& getType() const;

  /// Access the quality bit flag of the hit.
  const std::int32_t& getQuality() const;

  /// Access the time of the hit.
  const float& getTime() const;

  /// Access the energy deposited on the hit [GeV].
  const float& getEDep() const;

  /// Access the error measured on EDep [GeV].
  const float& getEDepError() const;

  /// Access the dE/dx of the hit in [GeV/mm].
  const float& getEdx() const;

  /// Access the measurement direction vector, u lies in the x-y plane
  const edm4hep::Vector2f& getU() const;

  /// Access the measurement direction vector, v is along z
  const edm4hep::Vector2f& getV() const;

  /// Access the measurement error along the direction
  const float& getDu() const;

  /// Access the measurement error along the direction
  const float& getDv() const;

  /// Access the hit position in [mm].
  const edm4hep::Vector3d& getPosition() const;

  /// Access the covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)
  const std::array<float, 6>& getCovMatrix() const;
  /// Access item i of the covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)
  const float& getCovMatrix(size_t i) const;


  unsigned int rawHits_size() const;
  edm4hep::ObjectID getRawHits(unsigned int) const;
  std::vector<edm4hep::ObjectID>::const_iterator rawHits_begin() const;
  std::vector<edm4hep::ObjectID>::const_iterator rawHits_end() const;
  podio::RelationRange<edm4hep::ObjectID> getRawHits() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from TrackerHitPlaneObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const TrackerHitPlane& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableTrackerHitPlane& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const TrackerHitPlane& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(TrackerHitPlane& a, TrackerHitPlane& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  TrackerHitPlaneObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const TrackerHitPlane& value);

} // namespace edm4hep


#endif
