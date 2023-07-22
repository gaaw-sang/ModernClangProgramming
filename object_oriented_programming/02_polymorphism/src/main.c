#include <stdio.h>
#include <stddef.h>

#include "animal.h"
#include "cat.h"
#include "dog.h"

int main(void) {
  Dog pochi;
  Dog_construct(&pochi, "ポチ", "柴", 10.3);

  Cat tama;
  Cat_construct(&tama, "タマ", "アメリカンショートヘア", 8.5);

  Animal* animals[] = {(Animal*)&pochi, (Animal*)&tama};

  for(size_t i=0; i < sizeof(animals) / sizeof(animals[0]); i++) {
    Animal_speak(animals[i]);
  }

  return 0;
}
