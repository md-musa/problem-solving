#include <stdio.h>
int main() {
  int arr1[100], arr2[100], i, n;
  printf("How many numbers:");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d ", &arr1[i]);
  }
  printf("Array1 : ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr1[i]);
  }

  for (i = 0; i < n; i++) {
    arr2[i] = arr1[i];
  }

  printf("\nArray2 : ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr2[i]);
  }
}