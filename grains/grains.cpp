#include "grains.h"
#include <cmath>
#include <cstdint>
#include "math.h"

namespace grains {
uint64_t square(uint64_t square) {
  return 1ULL << (square - 1);
}
uint64_t total(){
    uint64_t total = 0;
    for(uint64_t i = 1; i <= 64ULL; i++){
        total += square(i);
    }
    return total;
}
} // namespace grains
