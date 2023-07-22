#include <string.h>

#include "animal.h"


void Animal_construct(Animal* const this, char* const name, char* const race, double const weight) {
  strcpy(this->name, name);
  strcpy(this->race, race);
  this->weight = weight;
}

void Animal_speak(Animal* this) {
  this->speak(this);
}
