#include "triangle.h"
#include <stdexcept>

namespace triangle {

flavor kind(double x, double y, double z) {
  if (x <= 0 || y <= 0 || z <= 0)
    throw std::domain_error("domain error");

  if (x + y < z || y + z < x || z + x < y)
    throw std::domain_error("domain error");
  if (x == y && y == z)
    return flavor::equilateral;
  else if (x == y || (x == z && y != z) || y == z)
    return flavor::isosceles;
  return flavor::scalene;
}
} // namespace triangle
