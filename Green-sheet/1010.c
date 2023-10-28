#include <stdio.h>

int main() {
  int c1, c2, q1, q2;
  float p1, p2;
  scanf("%d %d %f", &c1, &q1, &p1);
  scanf("%d %d %f", &c2, &q2, &p2);
  float total = (q1 * p1) + (q2 * p2);
  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}