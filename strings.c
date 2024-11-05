#include <stdio.h>
#include <string.h>

int main() {

  char *first_name = "Sabir";
  char second_name[20] = "Koutabi";
  char nickname[] = "Lion";

  strncat(second_name, nickname, 4);

  // compare string
  if (strncmp(first_name, "Sabir", 5) == 0) {
    printf("Hello Sabir\n");
  } else {
    printf("fuck off u twat\n");
  }

  printf("%d %s \n", strlen(first_name), second_name);
  printf("%p %s \n", (void *)first_name, second_name);
  return 0;
}
