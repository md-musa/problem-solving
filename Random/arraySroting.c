#include "stdio.h"

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int arr[10] = {42, 10, 240, 60, 80, 103320, 90, 70, 30, 53232};

  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (arr[i] > arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }

  printf("[");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", arr[i]);
  }
  printf("]");
  return 0;
}
