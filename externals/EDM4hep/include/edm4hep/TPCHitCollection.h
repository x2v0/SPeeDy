// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TPCHitCollection_H
#define EDM4HEP_TPCHitCollection_H

// datamodel specific includes
#include "edm4hep/TPCHitData.h"
#include "edm4hep/TPCHit.h"
#include "edm4hep/MutableTPCHit.h"
#include "edm4hep/TPCHitObj.h"
#include "edm4hep/TPCHitCollectionData.h"

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



class TPCHitCollectionIterator {
public:
  TPCHitCollectionIterator(size_t index, const TPCHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TPCHitCollectionIterator(const TPCHitCollectionIterator&) = delete;
  TPCHitCollectionIterator& operator=(const TPCHitCollectionIterator&) = delete;

  bool operator!=(const TPCHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  TPCHit operator*();
  TPCHit* operator->();
  TPCHitCollectionIterator& operator++();

private:
  size_t m_index;
  TPCHit m_object;
  const TPCHitObjPointerContainer* m_collection;
};


class TPCHitMutableCollectionIterator {
public:
  TPCHitMutableCollectionIterator(size_t index, const TPCHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TPCHitMutableCollectionIterator(const TPCHitMutableCollectionIterator&) = delete;
  TPCHitMutableCollectionIterator& operator=(const TPCHitMutableCollectionIterator&) = delete;

  bool operator!=(const TPCHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableTPCHit operator*();
  MutableTPCHit* operator->();
  TPCHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableTPCHit m_object;
  const TPCHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class TPCHitCollection : public podio::CollectionBase {
public:
  using const_iterator = TPCHitCollectionIterator;
  using iterator = TPCHitMutableCollectionIterator;

  TPCHitCollection();
  // This is a move-only type
  TPCHitCollection(const TPCHitCollection& ) = delete;
  TPCHitCollection& operator=(const TPCHitCollection& ) = delete;
  TPCHitCollection(TPCHitCollection&&) = default;
  TPCHitCollection& operator=(TPCHitCollection&&) = default;

//  TPCHitCollection(TPCHitVector* data, int collectionID);
  ~TPCHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  TPCHitCollection* operator->() { return (TPCHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableTPCHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableTPCHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::TPCHitCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::TPCHit"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::TPCHitData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  TPCHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableTPCHit operator[](unsigned int index);
  /// Returns the const object of given index
  TPCHit at(unsigned int index) const;
  /// Returns the object of given index
  MutableTPCHit at(unsigned int index);


  /// Append object to the collection
  void push_back(TPCHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (TPCHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::int32_t, arraysize> quality() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<float, arraysize> charge() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class TPCHitCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  TPCHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const TPCHitCollection& v);

template<typename... Args>
MutableTPCHit TPCHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new TPCHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, TPCHitData} constructor
  obj->m_rawDataWords = new std::vector<std::int32_t>();
  m_storage.createRelations(obj);
  return MutableTPCHit(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> TPCHitCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TPCHitCollection::quality() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.quality;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TPCHitCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TPCHitCollection::charge() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.charge;
  }
  return tmp;
}


} // namespace edm4hep


#endif
