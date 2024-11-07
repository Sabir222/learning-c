
#include <stdio.h>
struct Car {
  char brand[64];
  char model[64];
  int year;
};

int main() {
  // declaring my car
  struct Car mycar = {"Dacia", "logan", 2014};

  printf("my car: %s,%s,%d\n", mycar.brand, mycar.model, mycar.year);
}
