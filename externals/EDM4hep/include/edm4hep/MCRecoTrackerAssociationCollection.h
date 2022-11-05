// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoTrackerAssociationCollection_H
#define EDM4HEP_MCRecoTrackerAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoTrackerAssociationData.h"
#include "edm4hep/MCRecoTrackerAssociation.h"
#include "edm4hep/MutableMCRecoTrackerAssociation.h"
#include "edm4hep/MCRecoTrackerAssociationObj.h"
#include "edm4hep/MCRecoTrackerAssociationCollectionData.h"

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



class MCRecoTrackerAssociationCollectionIterator {
public:
  MCRecoTrackerAssociationCollectionIterator(size_t index, const MCRecoTrackerAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoTrackerAssociationCollectionIterator(const MCRecoTrackerAssociationCollectionIterator&) = delete;
  MCRecoTrackerAssociationCollectionIterator& operator=(const MCRecoTrackerAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoTrackerAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoTrackerAssociation operator*();
  MCRecoTrackerAssociation* operator->();
  MCRecoTrackerAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoTrackerAssociation m_object;
  const MCRecoTrackerAssociationObjPointerContainer* m_collection;
};


class MCRecoTrackerAssociationMutableCollectionIterator {
public:
  MCRecoTrackerAssociationMutableCollectionIterator(size_t index, const MCRecoTrackerAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoTrackerAssociationMutableCollectionIterator(const MCRecoTrackerAssociationMutableCollectionIterator&) = delete;
  MCRecoTrackerAssociationMutableCollectionIterator& operator=(const MCRecoTrackerAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoTrackerAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoTrackerAssociation operator*();
  MutableMCRecoTrackerAssociation* operator->();
  MCRecoTrackerAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoTrackerAssociation m_object;
  const MCRecoTrackerAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoTrackerAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoTrackerAssociationCollectionIterator;
  using iterator = MCRecoTrackerAssociationMutableCollectionIterator;

  MCRecoTrackerAssociationCollection();
  // This is a move-only type
  MCRecoTrackerAssociationCollection(const MCRecoTrackerAssociationCollection& ) = delete;
  MCRecoTrackerAssociationCollection& operator=(const MCRecoTrackerAssociationCollection& ) = delete;
  MCRecoTrackerAssociationCollection(MCRecoTrackerAssociationCollection&&) = default;
  MCRecoTrackerAssociationCollection& operator=(MCRecoTrackerAssociationCollection&&) = default;

//  MCRecoTrackerAssociationCollection(MCRecoTrackerAssociationVector* data, int collectionID);
  ~MCRecoTrackerAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoTrackerAssociationCollection* operator->() { return (MCRecoTrackerAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoTrackerAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoTrackerAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoTrackerAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoTrackerAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoTrackerAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoTrackerAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoTrackerAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoTrackerAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoTrackerAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoTrackerAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoTrackerAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  friend class MCRecoTrackerAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoTrackerAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoTrackerAssociationCollection& v);

template<typename... Args>
MutableMCRecoTrackerAssociation MCRecoTrackerAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoTrackerAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoTrackerAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoTrackerAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
