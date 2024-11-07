#include <stdio.h>

int main() {

  int a = 0;

  while (a < 10) {
    a++;

    if (a % 2 == 0) {
      printf("this number %d is even \n", a);
      continue;
    } else if (a == 9) {
      break;
    }

    printf("this number %d is odd \n", a);
  }

  return 0;
}
