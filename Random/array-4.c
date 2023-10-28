#include "stdio.h"
// Array-4

int main() {
  int length;
  scanf("%d", &length);

  int arr[length];
  for (int i = 0; i < length; i++) {
    scanf("%d", &arr[i]);
  }

  int count;
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
      /* If duplicate found then increment count by 1 */
      if (arr[i] == arr[j]) {
        count++;
        break;
      }
    }
  }

  printf("Number of duplicate elements = %d", count);
  return 0;
}