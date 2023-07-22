#ifndef ANIMAL_H_
#define ANIMAL_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct _Animal Animal;

struct _Animal {
  char name[64];
  char race[64];
  double weight;
  void (*speak)(Animal* this);
};

void Animal_construct(Animal* const this, char* const name, char* const race, double const weight);

void Animal_speak(Animal* this);


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // ANIMAL_H_