// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RecoParticleVertexAssociationCollection_H
#define EDM4HEP_RecoParticleVertexAssociationCollection_H

// datamodel specific includes
#include "edm4hep/RecoParticleVertexAssociationData.h"
#include "edm4hep/RecoParticleVertexAssociation.h"
#include "edm4hep/MutableRecoParticleVertexAssociation.h"
#include "edm4hep/RecoParticleVertexAssociationObj.h"
#include "edm4hep/RecoParticleVertexAssociationCollectionData.h"

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



class RecoParticleVertexAssociationCollectionIterator {
public:
  RecoParticleVertexAssociationCollectionIterator(size_t index, const RecoParticleVertexAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  RecoParticleVertexAssociationCollectionIterator(const RecoParticleVertexAssociationCollectionIterator&) = delete;
  RecoParticleVertexAssociationCollectionIterator& operator=(const RecoParticleVertexAssociationCollectionIterator&) = delete;

  bool operator!=(const RecoParticleVertexAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  RecoParticleVertexAssociation operator*();
  RecoParticleVertexAssociation* operator->();
  RecoParticleVertexAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  RecoParticleVertexAssociation m_object;
  const RecoParticleVertexAssociationObjPointerContainer* m_collection;
};


class RecoParticleVertexAssociationMutableCollectionIterator {
public:
  RecoParticleVertexAssociationMutableCollectionIterator(size_t index, const RecoParticleVertexAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  RecoParticleVertexAssociationMutableCollectionIterator(const RecoParticleVertexAssociationMutableCollectionIterator&) = delete;
  RecoParticleVertexAssociationMutableCollectionIterator& operator=(const RecoParticleVertexAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const RecoParticleVertexAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableRecoParticleVertexAssociation operator*();
  MutableRecoParticleVertexAssociation* operator->();
  RecoParticleVertexAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableRecoParticleVertexAssociation m_object;
  const RecoParticleVertexAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class RecoParticleVertexAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = RecoParticleVertexAssociationCollectionIterator;
  using iterator = RecoParticleVertexAssociationMutableCollectionIterator;

  RecoParticleVertexAssociationCollection();
  // This is a move-only type
  RecoParticleVertexAssociationCollection(const RecoParticleVertexAssociationCollection& ) = delete;
  RecoParticleVertexAssociationCollection& operator=(const RecoParticleVertexAssociationCollection& ) = delete;
  RecoParticleVertexAssociationCollection(RecoParticleVertexAssociationCollection&&) = default;
  RecoParticleVertexAssociationCollection& operator=(RecoParticleVertexAssociationCollection&&) = default;

//  RecoParticleVertexAssociationCollection(RecoParticleVertexAssociationVector* data, int collectionID);
  ~RecoParticleVertexAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  RecoParticleVertexAssociationCollection* operator->() { return (RecoParticleVertexAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableRecoParticleVertexAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableRecoParticleVertexAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::RecoParticleVertexAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::RecoParticleVertexAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::RecoParticleVertexAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  RecoParticleVertexAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableRecoParticleVertexAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  RecoParticleVertexAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableRecoParticleVertexAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(RecoParticleVertexAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (RecoParticleVertexAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  friend class RecoParticleVertexAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  RecoParticleVertexAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const RecoParticleVertexAssociationCollection& v);

template<typename... Args>
MutableRecoParticleVertexAssociation RecoParticleVertexAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new RecoParticleVertexAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableRecoParticleVertexAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> RecoParticleVertexAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
