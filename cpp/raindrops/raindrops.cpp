#include "raindrops.h"
#include <string.h>

namespace raindrops {

bool factor(int num, int factorOf) { return !(num % factorOf > 0); }
std::string convert(int raindrop) {
  std::string toReturn = "";
  if (factor(raindrop, 3)) {
    toReturn += "Pling";
  } else if (factor(raindrop, 5)) {
    toReturn += "Plong";
  } else if (factor(raindrop, 7)) {
    toReturn += "Plang"
  }
  return toReturn;
}
} // namespace raindrops
