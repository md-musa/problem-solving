#include <stdio.h>
// Wrong
int main() {
  int L, C;
  scanf("%d %d", &L, &C);

  if (L % 2 == 0 && C % 2 || L % 2 == 1 && C % 2 == 1)
    printf("0\n");
  else
    printf("1\n");
  return 0;
}