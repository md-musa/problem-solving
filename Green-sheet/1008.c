#include "stdio.h"

int main() {
  int em, hours;
  float salary;
  scanf("%d %d %f", &em, &hours, &salary);
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", em, ((em * hours * salary) / em));

  return 0;
}