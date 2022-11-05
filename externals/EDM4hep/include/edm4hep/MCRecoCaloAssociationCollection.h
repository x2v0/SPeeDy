// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoCaloAssociationCollection_H
#define EDM4HEP_MCRecoCaloAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoCaloAssociationData.h"
#include "edm4hep/MCRecoCaloAssociation.h"
#include "edm4hep/MutableMCRecoCaloAssociation.h"
#include "edm4hep/MCRecoCaloAssociationObj.h"
#include "edm4hep/MCRecoCaloAssociationCollectionData.h"

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



class MCRecoCaloAssociationCollectionIterator {
public:
  MCRecoCaloAssociationCollectionIterator(size_t index, const MCRecoCaloAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoCaloAssociationCollectionIterator(const MCRecoCaloAssociationCollectionIterator&) = delete;
  MCRecoCaloAssociationCollectionIterator& operator=(const MCRecoCaloAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoCaloAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoCaloAssociation operator*();
  MCRecoCaloAssociation* operator->();
  MCRecoCaloAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoCaloAssociation m_object;
  const MCRecoCaloAssociationObjPointerContainer* m_collection;
};


class MCRecoCaloAssociationMutableCollectionIterator {
public:
  MCRecoCaloAssociationMutableCollectionIterator(size_t index, const MCRecoCaloAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoCaloAssociationMutableCollectionIterator(const MCRecoCaloAssociationMutableCollectionIterator&) = delete;
  MCRecoCaloAssociationMutableCollectionIterator& operator=(const MCRecoCaloAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoCaloAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoCaloAssociation operator*();
  MutableMCRecoCaloAssociation* operator->();
  MCRecoCaloAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoCaloAssociation m_object;
  const MCRecoCaloAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoCaloAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoCaloAssociationCollectionIterator;
  using iterator = MCRecoCaloAssociationMutableCollectionIterator;

  MCRecoCaloAssociationCollection();
  // This is a move-only type
  MCRecoCaloAssociationCollection(const MCRecoCaloAssociationCollection& ) = delete;
  MCRecoCaloAssociationCollection& operator=(const MCRecoCaloAssociationCollection& ) = delete;
  MCRecoCaloAssociationCollection(MCRecoCaloAssociationCollection&&) = default;
  MCRecoCaloAssociationCollection& operator=(MCRecoCaloAssociationCollection&&) = default;

//  MCRecoCaloAssociationCollection(MCRecoCaloAssociationVector* data, int collectionID);
  ~MCRecoCaloAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoCaloAssociationCollection* operator->() { return (MCRecoCaloAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoCaloAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoCaloAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoCaloAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoCaloAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoCaloAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoCaloAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoCaloAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoCaloAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoCaloAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoCaloAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoCaloAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  friend class MCRecoCaloAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoCaloAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoCaloAssociationCollection& v);

template<typename... Args>
MutableMCRecoCaloAssociation MCRecoCaloAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoCaloAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoCaloAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoCaloAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
