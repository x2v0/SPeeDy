// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoTrackerHitPlaneAssociationCollection_H
#define EDM4HEP_MCRecoTrackerHitPlaneAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoTrackerHitPlaneAssociationData.h"
#include "edm4hep/MCRecoTrackerHitPlaneAssociation.h"
#include "edm4hep/MutableMCRecoTrackerHitPlaneAssociation.h"
#include "edm4hep/MCRecoTrackerHitPlaneAssociationObj.h"
#include "edm4hep/MCRecoTrackerHitPlaneAssociationCollectionData.h"

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



class MCRecoTrackerHitPlaneAssociationCollectionIterator {
public:
  MCRecoTrackerHitPlaneAssociationCollectionIterator(size_t index, const MCRecoTrackerHitPlaneAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoTrackerHitPlaneAssociationCollectionIterator(const MCRecoTrackerHitPlaneAssociationCollectionIterator&) = delete;
  MCRecoTrackerHitPlaneAssociationCollectionIterator& operator=(const MCRecoTrackerHitPlaneAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoTrackerHitPlaneAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoTrackerHitPlaneAssociation operator*();
  MCRecoTrackerHitPlaneAssociation* operator->();
  MCRecoTrackerHitPlaneAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoTrackerHitPlaneAssociation m_object;
  const MCRecoTrackerHitPlaneAssociationObjPointerContainer* m_collection;
};


class MCRecoTrackerHitPlaneAssociationMutableCollectionIterator {
public:
  MCRecoTrackerHitPlaneAssociationMutableCollectionIterator(size_t index, const MCRecoTrackerHitPlaneAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoTrackerHitPlaneAssociationMutableCollectionIterator(const MCRecoTrackerHitPlaneAssociationMutableCollectionIterator&) = delete;
  MCRecoTrackerHitPlaneAssociationMutableCollectionIterator& operator=(const MCRecoTrackerHitPlaneAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoTrackerHitPlaneAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoTrackerHitPlaneAssociation operator*();
  MutableMCRecoTrackerHitPlaneAssociation* operator->();
  MCRecoTrackerHitPlaneAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoTrackerHitPlaneAssociation m_object;
  const MCRecoTrackerHitPlaneAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoTrackerHitPlaneAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoTrackerHitPlaneAssociationCollectionIterator;
  using iterator = MCRecoTrackerHitPlaneAssociationMutableCollectionIterator;

  MCRecoTrackerHitPlaneAssociationCollection();
  // This is a move-only type
  MCRecoTrackerHitPlaneAssociationCollection(const MCRecoTrackerHitPlaneAssociationCollection& ) = delete;
  MCRecoTrackerHitPlaneAssociationCollection& operator=(const MCRecoTrackerHitPlaneAssociationCollection& ) = delete;
  MCRecoTrackerHitPlaneAssociationCollection(MCRecoTrackerHitPlaneAssociationCollection&&) = default;
  MCRecoTrackerHitPlaneAssociationCollection& operator=(MCRecoTrackerHitPlaneAssociationCollection&&) = default;

//  MCRecoTrackerHitPlaneAssociationCollection(MCRecoTrackerHitPlaneAssociationVector* data, int collectionID);
  ~MCRecoTrackerHitPlaneAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoTrackerHitPlaneAssociationCollection* operator->() { return (MCRecoTrackerHitPlaneAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoTrackerHitPlaneAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoTrackerHitPlaneAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoTrackerHitPlaneAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoTrackerHitPlaneAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoTrackerHitPlaneAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoTrackerHitPlaneAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoTrackerHitPlaneAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoTrackerHitPlaneAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoTrackerHitPlaneAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoTrackerHitPlaneAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoTrackerHitPlaneAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<float, arraysize> weight() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class MCRecoTrackerHitPlaneAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoTrackerHitPlaneAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoTrackerHitPlaneAssociationCollection& v);

template<typename... Args>
MutableMCRecoTrackerHitPlaneAssociation MCRecoTrackerHitPlaneAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoTrackerHitPlaneAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoTrackerHitPlaneAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoTrackerHitPlaneAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
