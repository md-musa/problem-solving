#include <stdio.h>

int main() {
  int arr[] = {1, 3, 8, 9, 5, 2};
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 1; i < len; i++) {
    int current = arr[i];
    int j = i - 1;

    while (arr[j] > current && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    };

    arr[j + 1] = current;
  }

  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
}

// for (int i = 1; i < len; i++) {
//   int current = arr[i];
//   int j = i - 1;

//   while (arr[j] > current && j >= 0) {
//     arr[j + 1] = arr[j];
//     j--;
//   }

//   arr[j + 1] = current;
// }