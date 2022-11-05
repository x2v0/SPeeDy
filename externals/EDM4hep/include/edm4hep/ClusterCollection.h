// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ClusterCollection_H
#define EDM4HEP_ClusterCollection_H

// datamodel specific includes
#include "edm4hep/ClusterData.h"
#include "edm4hep/Cluster.h"
#include "edm4hep/MutableCluster.h"
#include "edm4hep/ClusterObj.h"
#include "edm4hep/ClusterCollectionData.h"

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



class ClusterCollectionIterator {
public:
  ClusterCollectionIterator(size_t index, const ClusterObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  ClusterCollectionIterator(const ClusterCollectionIterator&) = delete;
  ClusterCollectionIterator& operator=(const ClusterCollectionIterator&) = delete;

  bool operator!=(const ClusterCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  Cluster operator*();
  Cluster* operator->();
  ClusterCollectionIterator& operator++();

private:
  size_t m_index;
  Cluster m_object;
  const ClusterObjPointerContainer* m_collection;
};


class ClusterMutableCollectionIterator {
public:
  ClusterMutableCollectionIterator(size_t index, const ClusterObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  ClusterMutableCollectionIterator(const ClusterMutableCollectionIterator&) = delete;
  ClusterMutableCollectionIterator& operator=(const ClusterMutableCollectionIterator&) = delete;

  bool operator!=(const ClusterMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableCluster operator*();
  MutableCluster* operator->();
  ClusterMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableCluster m_object;
  const ClusterObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ClusterCollection : public podio::CollectionBase {
public:
  using const_iterator = ClusterCollectionIterator;
  using iterator = ClusterMutableCollectionIterator;

  ClusterCollection();
  // This is a move-only type
  ClusterCollection(const ClusterCollection& ) = delete;
  ClusterCollection& operator=(const ClusterCollection& ) = delete;
  ClusterCollection(ClusterCollection&&) = default;
  ClusterCollection& operator=(ClusterCollection&&) = default;

//  ClusterCollection(ClusterVector* data, int collectionID);
  ~ClusterCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ClusterCollection* operator->() { return (ClusterCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableCluster create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableCluster create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::ClusterCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::Cluster"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::ClusterData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  Cluster operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableCluster operator[](unsigned int index);
  /// Returns the const object of given index
  Cluster at(unsigned int index) const;
  /// Returns the object of given index
  MutableCluster at(unsigned int index);


  /// Append object to the collection
  void push_back(Cluster object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ClusterObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::int32_t, arraysize> type() const;
  template<size_t arraysize>
  const std::array<float, arraysize> energy() const;
  template<size_t arraysize>
  const std::array<float, arraysize> energyError() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> position() const;
  template<size_t arraysize>
  const std::array<std::array<float, 6>, arraysize> positionError() const;
  template<size_t arraysize>
  const std::array<float, arraysize> iTheta() const;
  template<size_t arraysize>
  const std::array<float, arraysize> phi() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> directionError() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ClusterCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  ClusterCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ClusterCollection& v);

template<typename... Args>
MutableCluster ClusterCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ClusterObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ClusterData} constructor
  obj->m_clusters = new std::vector<edm4hep::Cluster>();
  obj->m_hits = new std::vector<edm4hep::CalorimeterHit>();
  obj->m_particleIDs = new std::vector<edm4hep::ParticleID>();
  obj->m_shapeParameters = new std::vector<float>();
  obj->m_hitContributions = new std::vector<float>();
  obj->m_subdetectorEnergies = new std::vector<float>();
  m_storage.createRelations(obj);
  return MutableCluster(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> ClusterCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ClusterCollection::energy() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energy;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ClusterCollection::energyError() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energyError;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> ClusterCollection::position() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<float, 6>, arraysize> ClusterCollection::positionError() const {
  std::array<std::array<float, 6>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.positionError;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ClusterCollection::iTheta() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.iTheta;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ClusterCollection::phi() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.phi;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> ClusterCollection::directionError() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.directionError;
  }
  return tmp;
}


} // namespace edm4hep


#endif
