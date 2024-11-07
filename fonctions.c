
#include <stdio.h>
void foo() { printf("this fonctions return nothing\n"); }
int bazz(int a, int b) { return a + b; }

int main() {

  foo();
  int bazz_return = bazz(1, 1);
  printf("bazz result = %d\n", bazz_return);
  return 0;
}
