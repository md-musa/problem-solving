#include <stdio.h>

int main() {
  int len;
  scanf("%d", &len);

  int arr[len];
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  int item = arr[0];
  int count = 1;

  for (int i = 1; i < len; i++) {
    if (arr[i] != item) {
      printf("%d: %d\n", item, count);
      item = arr[i];
      count = 1;
    } else {
      count++;
    }
  }
  printf("%d: %d\n", item, count);

  return 0;
}