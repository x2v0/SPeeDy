// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RawCalorimeterHitCollection_H
#define EDM4HEP_RawCalorimeterHitCollection_H

// datamodel specific includes
#include "edm4hep/RawCalorimeterHitData.h"
#include "edm4hep/RawCalorimeterHit.h"
#include "edm4hep/MutableRawCalorimeterHit.h"
#include "edm4hep/RawCalorimeterHitObj.h"
#include "edm4hep/RawCalorimeterHitCollectionData.h"

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



class RawCalorimeterHitCollectionIterator {
public:
  RawCalorimeterHitCollectionIterator(size_t index, const RawCalorimeterHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  RawCalorimeterHitCollectionIterator(const RawCalorimeterHitCollectionIterator&) = delete;
  RawCalorimeterHitCollectionIterator& operator=(const RawCalorimeterHitCollectionIterator&) = delete;

  bool operator!=(const RawCalorimeterHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  RawCalorimeterHit operator*();
  RawCalorimeterHit* operator->();
  RawCalorimeterHitCollectionIterator& operator++();

private:
  size_t m_index;
  RawCalorimeterHit m_object;
  const RawCalorimeterHitObjPointerContainer* m_collection;
};


class RawCalorimeterHitMutableCollectionIterator {
public:
  RawCalorimeterHitMutableCollectionIterator(size_t index, const RawCalorimeterHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  RawCalorimeterHitMutableCollectionIterator(const RawCalorimeterHitMutableCollectionIterator&) = delete;
  RawCalorimeterHitMutableCollectionIterator& operator=(const RawCalorimeterHitMutableCollectionIterator&) = delete;

  bool operator!=(const RawCalorimeterHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableRawCalorimeterHit operator*();
  MutableRawCalorimeterHit* operator->();
  RawCalorimeterHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableRawCalorimeterHit m_object;
  const RawCalorimeterHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class RawCalorimeterHitCollection : public podio::CollectionBase {
public:
  using const_iterator = RawCalorimeterHitCollectionIterator;
  using iterator = RawCalorimeterHitMutableCollectionIterator;

  RawCalorimeterHitCollection();
  // This is a move-only type
  RawCalorimeterHitCollection(const RawCalorimeterHitCollection& ) = delete;
  RawCalorimeterHitCollection& operator=(const RawCalorimeterHitCollection& ) = delete;
  RawCalorimeterHitCollection(RawCalorimeterHitCollection&&) = default;
  RawCalorimeterHitCollection& operator=(RawCalorimeterHitCollection&&) = default;

//  RawCalorimeterHitCollection(RawCalorimeterHitVector* data, int collectionID);
  ~RawCalorimeterHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  RawCalorimeterHitCollection* operator->() { return (RawCalorimeterHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableRawCalorimeterHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableRawCalorimeterHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::RawCalorimeterHitCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::RawCalorimeterHit"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::RawCalorimeterHitData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  RawCalorimeterHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableRawCalorimeterHit operator[](unsigned int index);
  /// Returns the const object of given index
  RawCalorimeterHit at(unsigned int index) const;
  /// Returns the object of given index
  MutableRawCalorimeterHit at(unsigned int index);


  /// Append object to the collection
  void push_back(RawCalorimeterHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (RawCalorimeterHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::int32_t, arraysize> amplitude() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> timeStamp() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class RawCalorimeterHitCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  RawCalorimeterHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const RawCalorimeterHitCollection& v);

template<typename... Args>
MutableRawCalorimeterHit RawCalorimeterHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new RawCalorimeterHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableRawCalorimeterHit(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> RawCalorimeterHitCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> RawCalorimeterHitCollection::amplitude() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.amplitude;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> RawCalorimeterHitCollection::timeStamp() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.timeStamp;
  }
  return tmp;
}


} // namespace edm4hep


#endif
