#include <stdio.h>

int main() {
  int len = 100;

  int arr[len];
  int lastIndex = 9;
  for (int i = 0; i <= lastIndex; i++) {
    scanf("%d", &arr[i]);
  }

  int index, newItem;
  scanf("%d %d", &index, &newItem);

  if (index == lastIndex) {
    arr[++lastIndex] = newItem;
  } else {
    int prev = arr[index];
    int current = arr[index + 1];

    for (int i = index + 1; i <= lastIndex + 1; i++) {
      arr[i] = prev;
      prev = current;
      current = arr[i + 1];
    }

    arr[index] = newItem;
    ++lastIndex;
  }

  for (int i = 0; i <= lastIndex; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}