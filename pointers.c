#include <stdio.h>
int main() {
  int a = 0;
  int *pointer_to_a = &a;
  a++;
  (*pointer_to_a)++;
  printf("%d\n", a);
  return 0;
}
