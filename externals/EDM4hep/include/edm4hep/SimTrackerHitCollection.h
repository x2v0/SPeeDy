// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_SimTrackerHitCollection_H
#define EDM4HEP_SimTrackerHitCollection_H

// datamodel specific includes
#include "edm4hep/SimTrackerHitData.h"
#include "edm4hep/SimTrackerHit.h"
#include "edm4hep/MutableSimTrackerHit.h"
#include "edm4hep/SimTrackerHitObj.h"
#include "edm4hep/SimTrackerHitCollectionData.h"

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



class SimTrackerHitCollectionIterator {
public:
  SimTrackerHitCollectionIterator(size_t index, const SimTrackerHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  SimTrackerHitCollectionIterator(const SimTrackerHitCollectionIterator&) = delete;
  SimTrackerHitCollectionIterator& operator=(const SimTrackerHitCollectionIterator&) = delete;

  bool operator!=(const SimTrackerHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  SimTrackerHit operator*();
  SimTrackerHit* operator->();
  SimTrackerHitCollectionIterator& operator++();

private:
  size_t m_index;
  SimTrackerHit m_object;
  const SimTrackerHitObjPointerContainer* m_collection;
};


class SimTrackerHitMutableCollectionIterator {
public:
  SimTrackerHitMutableCollectionIterator(size_t index, const SimTrackerHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  SimTrackerHitMutableCollectionIterator(const SimTrackerHitMutableCollectionIterator&) = delete;
  SimTrackerHitMutableCollectionIterator& operator=(const SimTrackerHitMutableCollectionIterator&) = delete;

  bool operator!=(const SimTrackerHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableSimTrackerHit operator*();
  MutableSimTrackerHit* operator->();
  SimTrackerHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableSimTrackerHit m_object;
  const SimTrackerHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class SimTrackerHitCollection : public podio::CollectionBase {
public:
  using const_iterator = SimTrackerHitCollectionIterator;
  using iterator = SimTrackerHitMutableCollectionIterator;

  SimTrackerHitCollection();
  // This is a move-only type
  SimTrackerHitCollection(const SimTrackerHitCollection& ) = delete;
  SimTrackerHitCollection& operator=(const SimTrackerHitCollection& ) = delete;
  SimTrackerHitCollection(SimTrackerHitCollection&&) = default;
  SimTrackerHitCollection& operator=(SimTrackerHitCollection&&) = default;

//  SimTrackerHitCollection(SimTrackerHitVector* data, int collectionID);
  ~SimTrackerHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  SimTrackerHitCollection* operator->() { return (SimTrackerHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableSimTrackerHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableSimTrackerHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::SimTrackerHitCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::SimTrackerHit"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::SimTrackerHitData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  SimTrackerHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableSimTrackerHit operator[](unsigned int index);
  /// Returns the const object of given index
  SimTrackerHit at(unsigned int index) const;
  /// Returns the object of given index
  MutableSimTrackerHit at(unsigned int index);


  /// Append object to the collection
  void push_back(SimTrackerHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (SimTrackerHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<float, arraysize> EDep() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<float, arraysize> pathLength() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> quality() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3d, arraysize> position() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> momentum() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class SimTrackerHitCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  SimTrackerHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const SimTrackerHitCollection& v);

template<typename... Args>
MutableSimTrackerHit SimTrackerHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new SimTrackerHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableSimTrackerHit(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> SimTrackerHitCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> SimTrackerHitCollection::EDep() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.EDep;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> SimTrackerHitCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> SimTrackerHitCollection::pathLength() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.pathLength;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> SimTrackerHitCollection::quality() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.quality;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3d, arraysize> SimTrackerHitCollection::position() const {
  std::array<edm4hep::Vector3d, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> SimTrackerHitCollection::momentum() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.momentum;
  }
  return tmp;
}


} // namespace edm4hep


#endif
