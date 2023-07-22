#ifndef CAT_H_
#define CAT_H_

#include <stdio.h>

#include "animal.h"


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct _Cat {
  Animal base;
} Cat;

void Cat_construct(Cat* const this, char* const name, char* const race, double const weight);

void Cat_speak(Animal* const this);

#ifdef __cplusplus
extern }
#endif // __cplusplus

#endif // CAT_H_
