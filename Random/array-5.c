#include "stdio.h"
// Array-5

int main() {
  int length;
  scanf("%d", &length);

  int arr[length];
  for (int i = 0; i < length; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < length / 2; i++) {
    int tem = arr[i];
    arr[i] = arr[(length - i) - 1];
    arr[(length - i) - 1] = tem;
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}