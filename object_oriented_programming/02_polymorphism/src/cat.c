#include <stdio.h>

#include "cat.h"

void Cat_construct(Cat* const this, char* const name, char* const race, double const weight) {
  Animal_construct((Animal*)this, name, race, weight);
  this->base.speak = Cat_speak;
}

void Cat_speak(Animal* const this) {
  printf("にゃーにゃー\n");
}
