// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackCollection_H
#define EDM4HEP_TrackCollection_H

// datamodel specific includes
#include "edm4hep/TrackData.h"
#include "edm4hep/Track.h"
#include "edm4hep/MutableTrack.h"
#include "edm4hep/TrackObj.h"
#include "edm4hep/TrackCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>

namespace edm4hep {



class TrackCollectionIterator {
public:
  TrackCollectionIterator(size_t index, const TrackObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TrackCollectionIterator(const TrackCollectionIterator&) = delete;
  TrackCollectionIterator& operator=(const TrackCollectionIterator&) = delete;

  bool operator!=(const TrackCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  Track operator*();
  Track* operator->();
  TrackCollectionIterator& operator++();

private:
  size_t m_index;
  Track m_object;
  const TrackObjPointerContainer* m_collection;
};


class TrackMutableCollectionIterator {
public:
  TrackMutableCollectionIterator(size_t index, const TrackObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TrackMutableCollectionIterator(const TrackMutableCollectionIterator&) = delete;
  TrackMutableCollectionIterator& operator=(const TrackMutableCollectionIterator&) = delete;

  bool operator!=(const TrackMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableTrack operator*();
  MutableTrack* operator->();
  TrackMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableTrack m_object;
  const TrackObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class TrackCollection : public podio::CollectionBase {
public:
  using const_iterator = TrackCollectionIterator;
  using iterator = TrackMutableCollectionIterator;

  TrackCollection();
  // This is a move-only type
  TrackCollection(const TrackCollection& ) = delete;
  TrackCollection& operator=(const TrackCollection& ) = delete;
  TrackCollection(TrackCollection&&) = default;
  TrackCollection& operator=(TrackCollection&&) = default;

//  TrackCollection(TrackVector* data, int collectionID);
  ~TrackCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  TrackCollection* operator->() { return (TrackCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableTrack create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableTrack create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::TrackCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::Track"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::TrackData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  Track operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableTrack operator[](unsigned int index);
  /// Returns the const object of given index
  Track at(unsigned int index) const;
  /// Returns the object of given index
  MutableTrack at(unsigned int index);


  /// Append object to the collection
  void push_back(Track object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (TrackObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
    m_isValid = true;
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> type() const;
  template<size_t arraysize>
  const std::array<float, arraysize> chi2() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> ndf() const;
  template<size_t arraysize>
  const std::array<float, arraysize> dEdx() const;
  template<size_t arraysize>
  const std::array<float, arraysize> dEdxError() const;
  template<size_t arraysize>
  const std::array<float, arraysize> radiusOfInnermostHit() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class TrackCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  TrackCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const TrackCollection& v);

template<typename... Args>
MutableTrack TrackCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new TrackObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, TrackData} constructor
  obj->m_trackerHits = new std::vector<edm4hep::TrackerHit>();
  obj->m_tracks = new std::vector<edm4hep::Track>();
  obj->m_subDetectorHitNumbers = new std::vector<std::int32_t>();
  obj->m_trackStates = new std::vector<edm4hep::TrackState>();
  m_storage.createRelations(obj);
  return MutableTrack(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TrackCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackCollection::chi2() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.chi2;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TrackCollection::ndf() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.ndf;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackCollection::dEdx() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.dEdx;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackCollection::dEdxError() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.dEdxError;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackCollection::radiusOfInnermostHit() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.radiusOfInnermostHit;
  }
  return tmp;
}


} // namespace edm4hep


#endif
