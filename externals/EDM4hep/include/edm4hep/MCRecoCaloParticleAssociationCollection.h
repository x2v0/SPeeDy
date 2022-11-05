// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoCaloParticleAssociationCollection_H
#define EDM4HEP_MCRecoCaloParticleAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoCaloParticleAssociationData.h"
#include "edm4hep/MCRecoCaloParticleAssociation.h"
#include "edm4hep/MutableMCRecoCaloParticleAssociation.h"
#include "edm4hep/MCRecoCaloParticleAssociationObj.h"
#include "edm4hep/MCRecoCaloParticleAssociationCollectionData.h"

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



class MCRecoCaloParticleAssociationCollectionIterator {
public:
  MCRecoCaloParticleAssociationCollectionIterator(size_t index, const MCRecoCaloParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoCaloParticleAssociationCollectionIterator(const MCRecoCaloParticleAssociationCollectionIterator&) = delete;
  MCRecoCaloParticleAssociationCollectionIterator& operator=(const MCRecoCaloParticleAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoCaloParticleAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoCaloParticleAssociation operator*();
  MCRecoCaloParticleAssociation* operator->();
  MCRecoCaloParticleAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoCaloParticleAssociation m_object;
  const MCRecoCaloParticleAssociationObjPointerContainer* m_collection;
};


class MCRecoCaloParticleAssociationMutableCollectionIterator {
public:
  MCRecoCaloParticleAssociationMutableCollectionIterator(size_t index, const MCRecoCaloParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoCaloParticleAssociationMutableCollectionIterator(const MCRecoCaloParticleAssociationMutableCollectionIterator&) = delete;
  MCRecoCaloParticleAssociationMutableCollectionIterator& operator=(const MCRecoCaloParticleAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoCaloParticleAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoCaloParticleAssociation operator*();
  MutableMCRecoCaloParticleAssociation* operator->();
  MCRecoCaloParticleAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoCaloParticleAssociation m_object;
  const MCRecoCaloParticleAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoCaloParticleAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoCaloParticleAssociationCollectionIterator;
  using iterator = MCRecoCaloParticleAssociationMutableCollectionIterator;

  MCRecoCaloParticleAssociationCollection();
  // This is a move-only type
  MCRecoCaloParticleAssociationCollection(const MCRecoCaloParticleAssociationCollection& ) = delete;
  MCRecoCaloParticleAssociationCollection& operator=(const MCRecoCaloParticleAssociationCollection& ) = delete;
  MCRecoCaloParticleAssociationCollection(MCRecoCaloParticleAssociationCollection&&) = default;
  MCRecoCaloParticleAssociationCollection& operator=(MCRecoCaloParticleAssociationCollection&&) = default;

//  MCRecoCaloParticleAssociationCollection(MCRecoCaloParticleAssociationVector* data, int collectionID);
  ~MCRecoCaloParticleAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoCaloParticleAssociationCollection* operator->() { return (MCRecoCaloParticleAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoCaloParticleAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoCaloParticleAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoCaloParticleAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoCaloParticleAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoCaloParticleAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoCaloParticleAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoCaloParticleAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoCaloParticleAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoCaloParticleAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoCaloParticleAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoCaloParticleAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  friend class MCRecoCaloParticleAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoCaloParticleAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoCaloParticleAssociationCollection& v);

template<typename... Args>
MutableMCRecoCaloParticleAssociation MCRecoCaloParticleAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoCaloParticleAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoCaloParticleAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoCaloParticleAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
