# Basics of Class
C言語には“Class”を作る機能はありません。
代わりに、構造体を使ってデータ構造をまとめ、その構造体に対する操作をメソッドとして用意します。

# 最初の一歩
ちまたでは「オブジェクト指向を説明するときに犬やら猫を使うのはよくない」という派閥もあるようですが、ここではイメージがわくように犬を使わせてもらいます。

## Dogクラスの宣言：dog.h
```c
#ifndef DOG_H_
#define DOG_H_


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


/* プロパティ（メンバ変数）とクラス名の宣言*/
typedef struct _Dog {
  char name[64];
  char race[64];
  double weight;
}Dog;

/* メソッド（メンバ関数）の宣言*/
void Dog_construct(Dog* const this, char* const name, char* const race, double const weight);

char* Dog_getName(Dog* const this);

char* Dog_getRace(Dog* const this);

double Dog_getWeight(Dog* const this);


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DOG_H_

```

## Dogクラスのメソッド定義：dog.c

```c
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

```

## 利用方法：main.c

```c
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

```