// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoParticleAssociationCollection_H
#define EDM4HEP_MCRecoParticleAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoParticleAssociationData.h"
#include "edm4hep/MCRecoParticleAssociation.h"
#include "edm4hep/MutableMCRecoParticleAssociation.h"
#include "edm4hep/MCRecoParticleAssociationObj.h"
#include "edm4hep/MCRecoParticleAssociationCollectionData.h"

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



class MCRecoParticleAssociationCollectionIterator {
public:
  MCRecoParticleAssociationCollectionIterator(size_t index, const MCRecoParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoParticleAssociationCollectionIterator(const MCRecoParticleAssociationCollectionIterator&) = delete;
  MCRecoParticleAssociationCollectionIterator& operator=(const MCRecoParticleAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoParticleAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoParticleAssociation operator*();
  MCRecoParticleAssociation* operator->();
  MCRecoParticleAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoParticleAssociation m_object;
  const MCRecoParticleAssociationObjPointerContainer* m_collection;
};


class MCRecoParticleAssociationMutableCollectionIterator {
public:
  MCRecoParticleAssociationMutableCollectionIterator(size_t index, const MCRecoParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoParticleAssociationMutableCollectionIterator(const MCRecoParticleAssociationMutableCollectionIterator&) = delete;
  MCRecoParticleAssociationMutableCollectionIterator& operator=(const MCRecoParticleAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoParticleAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoParticleAssociation operator*();
  MutableMCRecoParticleAssociation* operator->();
  MCRecoParticleAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoParticleAssociation m_object;
  const MCRecoParticleAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoParticleAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoParticleAssociationCollectionIterator;
  using iterator = MCRecoParticleAssociationMutableCollectionIterator;

  MCRecoParticleAssociationCollection();
  // This is a move-only type
  MCRecoParticleAssociationCollection(const MCRecoParticleAssociationCollection& ) = delete;
  MCRecoParticleAssociationCollection& operator=(const MCRecoParticleAssociationCollection& ) = delete;
  MCRecoParticleAssociationCollection(MCRecoParticleAssociationCollection&&) = default;
  MCRecoParticleAssociationCollection& operator=(MCRecoParticleAssociationCollection&&) = default;

//  MCRecoParticleAssociationCollection(MCRecoParticleAssociationVector* data, int collectionID);
  ~MCRecoParticleAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoParticleAssociationCollection* operator->() { return (MCRecoParticleAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoParticleAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoParticleAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoParticleAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoParticleAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoParticleAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoParticleAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoParticleAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoParticleAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoParticleAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoParticleAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoParticleAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  friend class MCRecoParticleAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoParticleAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoParticleAssociationCollection& v);

template<typename... Args>
MutableMCRecoParticleAssociation MCRecoParticleAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoParticleAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoParticleAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoParticleAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
