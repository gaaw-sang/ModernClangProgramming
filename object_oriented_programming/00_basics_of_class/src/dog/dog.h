#ifndef DOG_H_
#define DOG_H_


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


/* メンバ変数（プロパティ）とクラス名の宣言*/
typedef struct _Dog {
  char name[64];
  char race[64];
  double weight;
}Dog;

/* メンバ関数（メソッド）の宣言*/
void Dog_construct(Dog* const this, char* const name, char* const race, double const weight);

char* Dog_getName(Dog* const this);

char* Dog_getRace(Dog* const this);

double Dog_getWeight(Dog* const this);


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DOG_H_
