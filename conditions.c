#include <stdio.h>

int main() {

  int a = 10;
  int b = 14;

  if (a > b) {
    printf("a is bigger than b\n");
  } else if (b > a) {
    printf("b is bigger than a\n");
  } else {
    printf("a is equal to b\n");
  }

  return 0;
}
