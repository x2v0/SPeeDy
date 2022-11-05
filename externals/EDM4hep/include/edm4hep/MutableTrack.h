// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableTrack_H
#define EDM4HEP_MutableTrack_H

#include "edm4hep/TrackObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/Track.h"

#include "edm4hep/TrackState.h"
#include "edm4hep/TrackerHit.h"
#include "podio/RelationRange.h"
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableTrack
 *  Reconstructed track
 *  @author: F.Gaede, DESY
 */
class MutableTrack {

  friend class TrackCollection;
  friend class TrackMutableCollectionIterator;
  friend class Track;

public:

  /// default constructor
  MutableTrack();
  MutableTrack(std::int32_t type, float chi2, std::int32_t ndf, float dEdx, float dEdxError, float radiusOfInnermostHit);

  /// constructor from existing TrackObj
  MutableTrack(TrackObj* obj);

  /// copy constructor
  MutableTrack(const MutableTrack& other);

  /// copy-assignment operator
  MutableTrack& operator=(MutableTrack other);

  /// create a mutable deep-copy of the object with identical relations
  MutableTrack clone() const;

  /// destructor
  ~MutableTrack();

  /// conversion to const object
  operator Track() const;

public:

  /// Access the flagword that defines the type of track.Bits 16-31 are used internally
  const std::int32_t& getType() const;

  /// Access the Chi^2 of the track fit
  const float& getChi2() const;

  /// Access the number of degrees of freedom of the track fit
  const std::int32_t& getNdf() const;

  /// Access the dEdx of the track.
  const float& getDEdx() const;

  /// Access the error of dEdx.
  const float& getDEdxError() const;

  /// Access the radius of the innermost hit that has been used in the track fit
  const float& getRadiusOfInnermostHit() const;



  /// Set the flagword that defines the type of track.Bits 16-31 are used internally
  void setType(std::int32_t value);

  /// Set the Chi^2 of the track fit
  void setChi2(float value);

  /// Set the number of degrees of freedom of the track fit
  void setNdf(std::int32_t value);

  /// Set the dEdx of the track.
  void setDEdx(float value);

  /// Set the error of dEdx.
  void setDEdxError(float value);

  /// Set the radius of the innermost hit that has been used in the track fit
  void setRadiusOfInnermostHit(float value);



  void addToTrackerHits(edm4hep::TrackerHit);
  unsigned int trackerHits_size() const;
  edm4hep::TrackerHit getTrackerHits(unsigned int) const;
  std::vector<edm4hep::TrackerHit>::const_iterator trackerHits_begin() const;
  std::vector<edm4hep::TrackerHit>::const_iterator trackerHits_end() const;
  podio::RelationRange<edm4hep::TrackerHit> getTrackerHits() const;
  void addToTracks(edm4hep::Track);
  unsigned int tracks_size() const;
  edm4hep::Track getTracks(unsigned int) const;
  std::vector<edm4hep::Track>::const_iterator tracks_begin() const;
  std::vector<edm4hep::Track>::const_iterator tracks_end() const;
  podio::RelationRange<edm4hep::Track> getTracks() const;
  void addToSubDetectorHitNumbers(std::int32_t);
  unsigned int subDetectorHitNumbers_size() const;
  std::int32_t getSubDetectorHitNumbers(unsigned int) const;
  std::vector<std::int32_t>::const_iterator subDetectorHitNumbers_begin() const;
  std::vector<std::int32_t>::const_iterator subDetectorHitNumbers_end() const;
  podio::RelationRange<std::int32_t> getSubDetectorHitNumbers() const;
  void addToTrackStates(edm4hep::TrackState);
  unsigned int trackStates_size() const;
  edm4hep::TrackState getTrackStates(unsigned int) const;
  std::vector<edm4hep::TrackState>::const_iterator trackStates_begin() const;
  std::vector<edm4hep::TrackState>::const_iterator trackStates_end() const;
  podio::RelationRange<edm4hep::TrackState> getTrackStates() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from TrackObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableTrack& other) const { return m_obj == other.m_obj; }
  bool operator==(const Track& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableTrack& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableTrack& a, MutableTrack& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  TrackObj* m_obj;
};

} // namespace edm4hep


#endif
