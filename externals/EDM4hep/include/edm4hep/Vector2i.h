// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_Vector2i_H
#define EDM4HEP_Vector2i_H

#include <cstdint>
#include <ostream>

namespace edm4hep {


class Vector2i {
public:
  std::int32_t a{};
  std::int32_t b{};

 Vector2i() : a(0),b(0) {}
 Vector2i(int32_t aa, int32_t bb) : a(aa),b(bb) {}
 Vector2i( const int32_t* v) : a(v[0]), b(v[1]) {}
 bool operator==(const Vector2i& v) const { return (a==v.a&&b==v.b) ; }
 int operator[](unsigned i) const { return *( &a + i ) ; }
 

};

inline std::ostream& operator<<(std::ostream& o, const edm4hep::Vector2i& value) {
  o << value.a << " ";
  o << value.b << " ";

  return o;
}

} // namespace edm4hep



#endif
