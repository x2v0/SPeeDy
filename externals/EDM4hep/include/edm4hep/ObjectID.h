// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ObjectID_H
#define EDM4HEP_ObjectID_H

#include <podio/ObjectID.h>
#include <cstdint>
#include <podio/ObjectID.h>
#include <ostream>

namespace edm4hep {


class ObjectID {
public:
  std::int32_t index{};
  std::int32_t collectionID{};

 ObjectID() = default;
 ObjectID(const podio::ObjectID& id ): index(id.index), collectionID(id.collectionID) {}
 

};

inline std::ostream& operator<<(std::ostream& o, const edm4hep::ObjectID& value) {
  o << value.index << " ";
  o << value.collectionID << " ";

  return o;
}

} // namespace edm4hep



#endif
