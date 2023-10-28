#include <stdio.h>

int main() {
  int len;
  scanf("%d", &len);

  int arr[len];
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
  }

  int lastIndex = len - 1;

  int deleteIndex;
  scanf("%d", &deleteIndex);

  if (deleteIndex == lastIndex) {
    --lastIndex;
  } else {
    for (int i = deleteIndex; i <= lastIndex - 1; i++) {
      arr[i] = arr[i + 1];
    }
    --lastIndex;
  }

  for (int i = 0; i <= lastIndex; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}