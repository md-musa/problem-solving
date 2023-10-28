#include <stdio.h>
#include <string.h>

struct Student {
  char *name;
  int id;
};

int main() {
  struct Student musa;
  musa.id = 21213;
  musa.name = "Mohammad musa";

  printf("%d", musa.id);
  printf("%s", musa.name);
  return 0;
}