#include "stdio.h"
// Array-3

int main() {
  int length;
  scanf("%d", &length);

  int arr1[length];
  for (int i = 0; i < length; i++) {
    scanf("%d", &arr1[i]);
  }

  int arr2[length];

  for (int i = 0; i < length; i++) {
    arr2[i] = arr1[i];
  }

  // Print all elements of Array1
  printf("\nElements of Array1: ");
  for (int i = 0; i < length; i++) {
    printf("%d\t", arr1[i]);
  }

  // Print all elements of Array1
  printf("\nElements of Array2: ");
  for (int i = 0; i < length; i++) {
    printf("%d\t", arr2[i]);
  }

  return 0;
}