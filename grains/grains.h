#include <cstdint>
#include <sys/types.h>
#if !defined(GRAINS_H)
#define GRAINS_H

namespace grains {

std::uint64_t square(int square);
std::uint64_t all();
}  // namespace grains

#endif // GRAINS_H