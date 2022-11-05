// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_SimCalorimeterHitCollection_H
#define EDM4HEP_SimCalorimeterHitCollection_H

// datamodel specific includes
#include "edm4hep/SimCalorimeterHitData.h"
#include "edm4hep/SimCalorimeterHit.h"
#include "edm4hep/MutableSimCalorimeterHit.h"
#include "edm4hep/SimCalorimeterHitObj.h"
#include "edm4hep/SimCalorimeterHitCollectionData.h"

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



class SimCalorimeterHitCollectionIterator {
public:
  SimCalorimeterHitCollectionIterator(size_t index, const SimCalorimeterHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  SimCalorimeterHitCollectionIterator(const SimCalorimeterHitCollectionIterator&) = delete;
  SimCalorimeterHitCollectionIterator& operator=(const SimCalorimeterHitCollectionIterator&) = delete;

  bool operator!=(const SimCalorimeterHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  SimCalorimeterHit operator*();
  SimCalorimeterHit* operator->();
  SimCalorimeterHitCollectionIterator& operator++();

private:
  size_t m_index;
  SimCalorimeterHit m_object;
  const SimCalorimeterHitObjPointerContainer* m_collection;
};


class SimCalorimeterHitMutableCollectionIterator {
public:
  SimCalorimeterHitMutableCollectionIterator(size_t index, const SimCalorimeterHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  SimCalorimeterHitMutableCollectionIterator(const SimCalorimeterHitMutableCollectionIterator&) = delete;
  SimCalorimeterHitMutableCollectionIterator& operator=(const SimCalorimeterHitMutableCollectionIterator&) = delete;

  bool operator!=(const SimCalorimeterHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableSimCalorimeterHit operator*();
  MutableSimCalorimeterHit* operator->();
  SimCalorimeterHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableSimCalorimeterHit m_object;
  const SimCalorimeterHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class SimCalorimeterHitCollection : public podio::CollectionBase {
public:
  using const_iterator = SimCalorimeterHitCollectionIterator;
  using iterator = SimCalorimeterHitMutableCollectionIterator;

  SimCalorimeterHitCollection();
  // This is a move-only type
  SimCalorimeterHitCollection(const SimCalorimeterHitCollection& ) = delete;
  SimCalorimeterHitCollection& operator=(const SimCalorimeterHitCollection& ) = delete;
  SimCalorimeterHitCollection(SimCalorimeterHitCollection&&) = default;
  SimCalorimeterHitCollection& operator=(SimCalorimeterHitCollection&&) = default;

//  SimCalorimeterHitCollection(SimCalorimeterHitVector* data, int collectionID);
  ~SimCalorimeterHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  SimCalorimeterHitCollection* operator->() { return (SimCalorimeterHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableSimCalorimeterHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableSimCalorimeterHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::SimCalorimeterHitCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::SimCalorimeterHit"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::SimCalorimeterHitData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  SimCalorimeterHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableSimCalorimeterHit operator[](unsigned int index);
  /// Returns the const object of given index
  SimCalorimeterHit at(unsigned int index) const;
  /// Returns the object of given index
  MutableSimCalorimeterHit at(unsigned int index);


  /// Append object to the collection
  void push_back(SimCalorimeterHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (SimCalorimeterHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<edm4hep::Vector3f, arraysize> position() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class SimCalorimeterHitCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  SimCalorimeterHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const SimCalorimeterHitCollection& v);

template<typename... Args>
MutableSimCalorimeterHit SimCalorimeterHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new SimCalorimeterHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, SimCalorimeterHitData} constructor
  obj->m_contributions = new std::vector<edm4hep::CaloHitContribution>();
  m_storage.createRelations(obj);
  return MutableSimCalorimeterHit(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> SimCalorimeterHitCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> SimCalorimeterHitCollection::energy() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energy;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> SimCalorimeterHitCollection::position() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}


} // namespace edm4hep


#endif
