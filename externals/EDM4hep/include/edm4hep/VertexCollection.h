// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_VertexCollection_H
#define EDM4HEP_VertexCollection_H

// datamodel specific includes
#include "edm4hep/VertexData.h"
#include "edm4hep/Vertex.h"
#include "edm4hep/MutableVertex.h"
#include "edm4hep/VertexObj.h"
#include "edm4hep/VertexCollectionData.h"

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



class VertexCollectionIterator {
public:
  VertexCollectionIterator(size_t index, const VertexObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  VertexCollectionIterator(const VertexCollectionIterator&) = delete;
  VertexCollectionIterator& operator=(const VertexCollectionIterator&) = delete;

  bool operator!=(const VertexCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  Vertex operator*();
  Vertex* operator->();
  VertexCollectionIterator& operator++();

private:
  size_t m_index;
  Vertex m_object;
  const VertexObjPointerContainer* m_collection;
};


class VertexMutableCollectionIterator {
public:
  VertexMutableCollectionIterator(size_t index, const VertexObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  VertexMutableCollectionIterator(const VertexMutableCollectionIterator&) = delete;
  VertexMutableCollectionIterator& operator=(const VertexMutableCollectionIterator&) = delete;

  bool operator!=(const VertexMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableVertex operator*();
  MutableVertex* operator->();
  VertexMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableVertex m_object;
  const VertexObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class VertexCollection : public podio::CollectionBase {
public:
  using const_iterator = VertexCollectionIterator;
  using iterator = VertexMutableCollectionIterator;

  VertexCollection();
  // This is a move-only type
  VertexCollection(const VertexCollection& ) = delete;
  VertexCollection& operator=(const VertexCollection& ) = delete;
  VertexCollection(VertexCollection&&) = default;
  VertexCollection& operator=(VertexCollection&&) = default;

//  VertexCollection(VertexVector* data, int collectionID);
  ~VertexCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  VertexCollection* operator->() { return (VertexCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableVertex create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableVertex create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::VertexCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::Vertex"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::VertexData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  Vertex operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableVertex operator[](unsigned int index);
  /// Returns the const object of given index
  Vertex at(unsigned int index) const;
  /// Returns the object of given index
  MutableVertex at(unsigned int index);


  /// Append object to the collection
  void push_back(Vertex object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (VertexObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::int32_t, arraysize> primary() const;
  template<size_t arraysize>
  const std::array<float, arraysize> chi2() const;
  template<size_t arraysize>
  const std::array<float, arraysize> probability() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> position() const;
  template<size_t arraysize>
  const std::array<std::array<float, 6>, arraysize> covMatrix() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> algorithmType() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class VertexCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  VertexCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const VertexCollection& v);

template<typename... Args>
MutableVertex VertexCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new VertexObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, VertexData} constructor
  obj->m_parameters = new std::vector<float>();
  m_storage.createRelations(obj);
  return MutableVertex(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> VertexCollection::primary() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.primary;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> VertexCollection::chi2() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.chi2;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> VertexCollection::probability() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.probability;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> VertexCollection::position() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<float, 6>, arraysize> VertexCollection::covMatrix() const {
  std::array<std::array<float, 6>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.covMatrix;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> VertexCollection::algorithmType() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.algorithmType;
  }
  return tmp;
}


} // namespace edm4hep


#endif
