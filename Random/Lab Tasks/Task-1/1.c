#include <stdio.h>

int main() {
  int len;
  scanf("%d", &len);

  int arr[len];
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
  }

  int query;
  scanf("%d", &query);

  int low = 0;
  int high = len - 1;
  int mid = (low + high) / 2;
  int isFound = -1;

  while (low <= high) {
    mid = low + (high - low) / 2;

    if (arr[mid] == query) {
      printf("Element is found at position %d\n", mid + 1);
      isFound = 1;
      break;
    }

    if (arr[mid] < query)
      low = mid + 1;
    else
      high = mid - 1;
  }

  if (isFound == -1) printf("Not found\n");

  return 0;
}