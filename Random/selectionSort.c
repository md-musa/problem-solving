#include <stdio.h>

int main() {
  int arr[] = {1, 1, 1, 1, 0, 5, 8};
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++) {
    int minIndex = i;
    for (int j = minIndex; j < len; j++) {
      if (arr[j] < arr[minIndex]) minIndex = j;
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }

  printf("[");
  for (int i = 0; i < len; i++) {
    printf("%d, ", arr[i]);
  }
  printf("]");
};
