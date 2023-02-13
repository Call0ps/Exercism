#include "space_age.h"
#include "test/catch.hpp"

namespace space_age {
space_age::space_age(long seconds) { age_in_seconds = seconds; }
int space_age::seconds() const { return age_in_seconds; }
double space_age::on_earth() const { return convert_age(1); }
double space_age::on_jupiter() const { return convert_age(11.862615); }
double space_age::on_mars() const { return convert_age(1.8808158); }
double space_age::on_mercury() const { return convert_age(0.2408467); }
double space_age::on_neptune() const { return convert_age(164.79132); }
double space_age::on_saturn() const { return convert_age(29.447498); }
double space_age::on_venus() const { return convert_age(0.61519726); }
double space_age::on_uranus() const { return convert_age(84.016846); }
double space_age::convert_age(double conversion_rate) const {
  const double age_on_earth = age_in_seconds / 31557600.0;
  return age_on_earth / conversion_rate;
}
} // namespace space_age
