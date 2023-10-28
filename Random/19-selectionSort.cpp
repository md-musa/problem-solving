#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 30, 20, 100, 80, 90, 50, 60, 60};
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++) {
    int smallestIndex = i;

    for (int j = i + 1; j < len; j++) {
      if (arr[j] < arr[smallestIndex]) smallestIndex = j;
    }

    swap(arr[smallestIndex], arr[i]);
  }

  printf("[");
  for (int i = 0; i < len; i++) {
    printf("%d, ", arr[i]);
  }
  printf("]");
}