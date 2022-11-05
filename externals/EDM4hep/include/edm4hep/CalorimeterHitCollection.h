// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_CalorimeterHitCollection_H
#define EDM4HEP_CalorimeterHitCollection_H

// datamodel specific includes
#include "edm4hep/CalorimeterHitData.h"
#include "edm4hep/CalorimeterHit.h"
#include "edm4hep/MutableCalorimeterHit.h"
#include "edm4hep/CalorimeterHitObj.h"
#include "edm4hep/CalorimeterHitCollectionData.h"

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



class CalorimeterHitCollectionIterator {
public:
  CalorimeterHitCollectionIterator(size_t index, const CalorimeterHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  CalorimeterHitCollectionIterator(const CalorimeterHitCollectionIterator&) = delete;
  CalorimeterHitCollectionIterator& operator=(const CalorimeterHitCollectionIterator&) = delete;

  bool operator!=(const CalorimeterHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  CalorimeterHit operator*();
  CalorimeterHit* operator->();
  CalorimeterHitCollectionIterator& operator++();

private:
  size_t m_index;
  CalorimeterHit m_object;
  const CalorimeterHitObjPointerContainer* m_collection;
};


class CalorimeterHitMutableCollectionIterator {
public:
  CalorimeterHitMutableCollectionIterator(size_t index, const CalorimeterHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  CalorimeterHitMutableCollectionIterator(const CalorimeterHitMutableCollectionIterator&) = delete;
  CalorimeterHitMutableCollectionIterator& operator=(const CalorimeterHitMutableCollectionIterator&) = delete;

  bool operator!=(const CalorimeterHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableCalorimeterHit operator*();
  MutableCalorimeterHit* operator->();
  CalorimeterHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableCalorimeterHit m_object;
  const CalorimeterHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class CalorimeterHitCollection : public podio::CollectionBase {
public:
  using const_iterator = CalorimeterHitCollectionIterator;
  using iterator = CalorimeterHitMutableCollectionIterator;

  CalorimeterHitCollection();
  // This is a move-only type
  CalorimeterHitCollection(const CalorimeterHitCollection& ) = delete;
  CalorimeterHitCollection& operator=(const CalorimeterHitCollection& ) = delete;
  CalorimeterHitCollection(CalorimeterHitCollection&&) = default;
  CalorimeterHitCollection& operator=(CalorimeterHitCollection&&) = default;

//  CalorimeterHitCollection(CalorimeterHitVector* data, int collectionID);
  ~CalorimeterHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  CalorimeterHitCollection* operator->() { return (CalorimeterHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableCalorimeterHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableCalorimeterHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::CalorimeterHitCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::CalorimeterHit"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::CalorimeterHitData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  CalorimeterHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableCalorimeterHit operator[](unsigned int index);
  /// Returns the const object of given index
  CalorimeterHit at(unsigned int index) const;
  /// Returns the object of given index
  MutableCalorimeterHit at(unsigned int index);


  /// Append object to the collection
  void push_back(CalorimeterHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (CalorimeterHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<float, arraysize> energy() const;
  template<size_t arraysize>
  const std::array<float, arraysize> energyError() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> position() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> type() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class CalorimeterHitCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  CalorimeterHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const CalorimeterHitCollection& v);

template<typename... Args>
MutableCalorimeterHit CalorimeterHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new CalorimeterHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableCalorimeterHit(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> CalorimeterHitCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> CalorimeterHitCollection::energy() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energy;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> CalorimeterHitCollection::energyError() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energyError;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> CalorimeterHitCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> CalorimeterHitCollection::position() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> CalorimeterHitCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}


} // namespace edm4hep


#endif
