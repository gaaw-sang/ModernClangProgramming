#include <string.h>

#include "dog.h"


void Dog_construct(Dog* const this, char* const name, char* const race, double const weight) {
  strcpy(this->name, name);
  strcpy(this->race, race);
  this->weight = weight;
}

char* Dog_getName(Dog* const this) {
  return this->name;
}

char* Dog_getRace(Dog* const this) {
  return this->race;
}

double Dog_getWeight(Dog* const this) {
  return this->weight;
}
