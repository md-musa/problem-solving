#include <stdio.h>

int main() {
  int a = 10, b = 20;

  int tem = a;
  if (a > b) {
    a = b;
    b = tem;
  }

  if (b % a == 0)
    printf("Sao Multiplos\n");
  else
    printf("Nao sao Multiplos\n");

  return 0;
}