#include <stdio.h>

#include "dog.h"


int main(void) {
  Dog pochi;
  Dog_construct(&pochi, "ポチ", "柴", 10.3);

  printf("名前は%sです。\n", Dog_getName(&pochi));
  printf("犬種は%sです。\n", Dog_getRace(&pochi));
  printf("体重は%.1fkgです。\n", Dog_getWeight(&pochi));
  
  return 0;
}