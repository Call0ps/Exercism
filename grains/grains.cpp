#include "grains.h"
#include <cstdint>

namespace grains {
const int MAX = 64;
std::uint64_t square(int square){
    if(square <= MAX){
        int count = 0;
        for (int c = 1; c <= square; ++c) {
            count += c;
        }
        return count;
    }
    return 0;
}
}  // namespace grains
