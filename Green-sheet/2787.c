#include "stdio.h"

int main() {
  int row, col;

  scanf("%d %d", &row, &col);

  if (row % 2 == 0 && col % 2 == 0) {
    printf("1\n");
  } else if (row % 2 == 1 && col % 2 == 1) {
    printf("1\n");
  } else {
    printf("0\n");
  }
}