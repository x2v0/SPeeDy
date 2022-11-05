// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_Vector2f_H
#define EDM4HEP_Vector2f_H

#include <ostream>

namespace edm4hep {


class Vector2f {
public:
  float a{};
  float b{};

 Vector2f() : a(0),b(0) {}
 Vector2f(float aa,float bb) : a(aa),b(bb) {}
 Vector2f(const float* v) : a(v[0]), b(v[1]) {}
 bool operator==(const Vector2f& v) const { return (a==v.a&&b==v.b) ; }
 float operator[](unsigned i) const { return *( &a + i ) ; }
 

};

inline std::ostream& operator<<(std::ostream& o, const edm4hep::Vector2f& value) {
  o << value.a << " ";
  o << value.b << " ";

  return o;
}

} // namespace edm4hep



#endif
