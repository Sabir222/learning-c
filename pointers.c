#include <stdio.h>

struct Person {
  char name[64];
  int age;
};

void updatePerson(struct Person *p, int age) {
  // (*p).age = age;
  p->age = age;
}

int main() {

  struct Person sabir = {"Sabir"};

  updatePerson(&sabir, 1);

  printf("Name : %s\n", sabir.name);
  printf("Name : %d\n", sabir.age);

  /*int a = 0;*/
  /*int *pointer_to_a = &a;*/
  /*a++;*/
  /*(*pointer_to_a)++;*/
  /**pointer_to_a += 1;*/
  /*printf("%d\n", a);*/
  return 0;
}
