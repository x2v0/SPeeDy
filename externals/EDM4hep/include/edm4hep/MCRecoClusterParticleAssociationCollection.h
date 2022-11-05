// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoClusterParticleAssociationCollection_H
#define EDM4HEP_MCRecoClusterParticleAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoClusterParticleAssociationData.h"
#include "edm4hep/MCRecoClusterParticleAssociation.h"
#include "edm4hep/MutableMCRecoClusterParticleAssociation.h"
#include "edm4hep/MCRecoClusterParticleAssociationObj.h"
#include "edm4hep/MCRecoClusterParticleAssociationCollectionData.h"

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



class MCRecoClusterParticleAssociationCollectionIterator {
public:
  MCRecoClusterParticleAssociationCollectionIterator(size_t index, const MCRecoClusterParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoClusterParticleAssociationCollectionIterator(const MCRecoClusterParticleAssociationCollectionIterator&) = delete;
  MCRecoClusterParticleAssociationCollectionIterator& operator=(const MCRecoClusterParticleAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoClusterParticleAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoClusterParticleAssociation operator*();
  MCRecoClusterParticleAssociation* operator->();
  MCRecoClusterParticleAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoClusterParticleAssociation m_object;
  const MCRecoClusterParticleAssociationObjPointerContainer* m_collection;
};


class MCRecoClusterParticleAssociationMutableCollectionIterator {
public:
  MCRecoClusterParticleAssociationMutableCollectionIterator(size_t index, const MCRecoClusterParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoClusterParticleAssociationMutableCollectionIterator(const MCRecoClusterParticleAssociationMutableCollectionIterator&) = delete;
  MCRecoClusterParticleAssociationMutableCollectionIterator& operator=(const MCRecoClusterParticleAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoClusterParticleAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoClusterParticleAssociation operator*();
  MutableMCRecoClusterParticleAssociation* operator->();
  MCRecoClusterParticleAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoClusterParticleAssociation m_object;
  const MCRecoClusterParticleAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoClusterParticleAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoClusterParticleAssociationCollectionIterator;
  using iterator = MCRecoClusterParticleAssociationMutableCollectionIterator;

  MCRecoClusterParticleAssociationCollection();
  // This is a move-only type
  MCRecoClusterParticleAssociationCollection(const MCRecoClusterParticleAssociationCollection& ) = delete;
  MCRecoClusterParticleAssociationCollection& operator=(const MCRecoClusterParticleAssociationCollection& ) = delete;
  MCRecoClusterParticleAssociationCollection(MCRecoClusterParticleAssociationCollection&&) = default;
  MCRecoClusterParticleAssociationCollection& operator=(MCRecoClusterParticleAssociationCollection&&) = default;

//  MCRecoClusterParticleAssociationCollection(MCRecoClusterParticleAssociationVector* data, int collectionID);
  ~MCRecoClusterParticleAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoClusterParticleAssociationCollection* operator->() { return (MCRecoClusterParticleAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoClusterParticleAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoClusterParticleAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoClusterParticleAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoClusterParticleAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoClusterParticleAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoClusterParticleAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoClusterParticleAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoClusterParticleAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoClusterParticleAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoClusterParticleAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoClusterParticleAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  friend class MCRecoClusterParticleAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoClusterParticleAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoClusterParticleAssociationCollection& v);

template<typename... Args>
MutableMCRecoClusterParticleAssociation MCRecoClusterParticleAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoClusterParticleAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoClusterParticleAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoClusterParticleAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
