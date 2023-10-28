#include "stdio.h"
// Array-1
int main() {
  int length;
  scanf("%d", &length);

  int arr[length];
  for (int i = 0; i < length; i++) {
    scanf("%d", &arr[i]);
  }

  int min = arr[0];
  int max = arr[0];

  for (int i = 1; i < length; i++) {
    if (min > arr[i]) min = arr[i];
    if (max < arr[i]) max = arr[i];
  }

  printf("Minimum = %d, Maximum = %d", min, max);
}