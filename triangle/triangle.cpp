#include "triangle.h"
#include <stdexcept>

namespace triangle {

    flavor kind(double x, double y, double z) {
        if (x <= 0)
            throw std::domain_error("X is 0 or less");
        else if (y <= 0)
            throw std::domain_error("Y is 0 or less");
        else if (z <= 0)
            throw std::domain_error("Z is 0 or less");
        else if((x+y)<z)
            throw std::domain_error("Not a valid triangle.");
        if (x == y == z)
            return flavor::equilateral;

        return flavor::scalene;
    }
} // namespace triangle
