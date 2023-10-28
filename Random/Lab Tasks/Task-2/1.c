#include <stdio.h>

int main() {
  int row = 100, col = 100;
  int matrix[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      matrix[i][j] = j + 1;
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
