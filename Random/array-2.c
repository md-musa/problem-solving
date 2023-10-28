#include "stdio.h"
// Array-2
int main() {
  int length;
  scanf("%d", &length);

  int arr[length];
  for (int i = 0; i < length; i++) {
    scanf("%d", &arr[i]);
  }

  int countEven = 0;
  int countOdd = 0;

  for (int i = 0; i < length; i++) {
    if (arr[i] % 2 == 0)
      countEven++;
    else
      countOdd++;
  }

  printf("Number of Even = %d\n", countEven);
  printf("Number of Odd = %d\n", countOdd);
}
