#ifndef DOG_H_
#define DOG_H_

#include <stdio.h>

#include "animal.h"


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct _Dog {
  Animal base;
} Dog;

void Dog_construct(Dog* const this, char* const name, char* const race, double const weight);

void Dog_speak(Animal* const this);

#ifdef __cplusplus
extern }
#endif // __cplusplus

#endif // DOG_H_
