#include <stdio.h>

#include "dog.h"

void Dog_construct(Dog* const this, char* const name, char* const race, double const weight) {
  Animal_construct((Animal*)this, name, race, weight);
  this->base.speak = Dog_speak;
}

void Dog_speak(Animal* const this) {
  printf("わんわん\n");
}
