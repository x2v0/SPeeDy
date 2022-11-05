// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackerHitCollection_H
#define EDM4HEP_TrackerHitCollection_H

// datamodel specific includes
#include "edm4hep/TrackerHitData.h"
#include "edm4hep/TrackerHit.h"
#include "edm4hep/MutableTrackerHit.h"
#include "edm4hep/TrackerHitObj.h"
#include "edm4hep/TrackerHitCollectionData.h"

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



class TrackerHitCollectionIterator {
public:
  TrackerHitCollectionIterator(size_t index, const TrackerHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TrackerHitCollectionIterator(const TrackerHitCollectionIterator&) = delete;
  TrackerHitCollectionIterator& operator=(const TrackerHitCollectionIterator&) = delete;

  bool operator!=(const TrackerHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  TrackerHit operator*();
  TrackerHit* operator->();
  TrackerHitCollectionIterator& operator++();

private:
  size_t m_index;
  TrackerHit m_object;
  const TrackerHitObjPointerContainer* m_collection;
};


class TrackerHitMutableCollectionIterator {
public:
  TrackerHitMutableCollectionIterator(size_t index, const TrackerHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TrackerHitMutableCollectionIterator(const TrackerHitMutableCollectionIterator&) = delete;
  TrackerHitMutableCollectionIterator& operator=(const TrackerHitMutableCollectionIterator&) = delete;

  bool operator!=(const TrackerHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableTrackerHit operator*();
  MutableTrackerHit* operator->();
  TrackerHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableTrackerHit m_object;
  const TrackerHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class TrackerHitCollection : public podio::CollectionBase {
public:
  using const_iterator = TrackerHitCollectionIterator;
  using iterator = TrackerHitMutableCollectionIterator;

  TrackerHitCollection();
  // This is a move-only type
  TrackerHitCollection(const TrackerHitCollection& ) = delete;
  TrackerHitCollection& operator=(const TrackerHitCollection& ) = delete;
  TrackerHitCollection(TrackerHitCollection&&) = default;
  TrackerHitCollection& operator=(TrackerHitCollection&&) = default;

//  TrackerHitCollection(TrackerHitVector* data, int collectionID);
  ~TrackerHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  TrackerHitCollection* operator->() { return (TrackerHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableTrackerHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableTrackerHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::TrackerHitCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::TrackerHit"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::TrackerHitData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  TrackerHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableTrackerHit operator[](unsigned int index);
  /// Returns the const object of given index
  TrackerHit at(unsigned int index) const;
  /// Returns the object of given index
  MutableTrackerHit at(unsigned int index);


  /// Append object to the collection
  void push_back(TrackerHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (TrackerHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::uint64_t, arraysize> cellID() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> type() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> quality() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<float, arraysize> eDep() const;
  template<size_t arraysize>
  const std::array<float, arraysize> eDepError() const;
  template<size_t arraysize>
  const std::array<float, arraysize> edx() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3d, arraysize> position() const;
  template<size_t arraysize>
  const std::array<std::array<float, 6>, arraysize> covMatrix() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class TrackerHitCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  TrackerHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const TrackerHitCollection& v);

template<typename... Args>
MutableTrackerHit TrackerHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new TrackerHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, TrackerHitData} constructor
  obj->m_rawHits = new std::vector<edm4hep::ObjectID>();
  m_storage.createRelations(obj);
  return MutableTrackerHit(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> TrackerHitCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TrackerHitCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TrackerHitCollection::quality() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.quality;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitCollection::eDep() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.eDep;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitCollection::eDepError() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.eDepError;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitCollection::edx() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.edx;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3d, arraysize> TrackerHitCollection::position() const {
  std::array<edm4hep::Vector3d, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<float, 6>, arraysize> TrackerHitCollection::covMatrix() const {
  std::array<std::array<float, 6>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.covMatrix;
  }
  return tmp;
}


} // namespace edm4hep


#endif
