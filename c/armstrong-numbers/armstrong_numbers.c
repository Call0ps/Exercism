#include "armstrong_numbers.h"
#include <math.h>
#include <stdlib.h>

bool is_armstrong_number(int candidate) {
  if (candidate == 0)
    return true;
  if (candidate < 10)
    return pow(candidate, 1) == candidate;
  if (candidate < 100)
    return false;
  return true;
}

int *get_number(int candidato) 
{
    int* numbers = malloc(sizeof(int)*get_number_count(candidato));
    // do candidate / 10 until all numbers are separated.
    return numbers;
}

int get_number_count(int candidate) {
  int count = 0;
  while (candidate > 0) {
    candidate %= 10;
  }
  return count;
}