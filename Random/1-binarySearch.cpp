#include "iostream"
using namespace std;

bool binarySearch(int arr[], int len, int query) {
  int low = 0;
  int high = len - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (arr[mid] == query)
      return true;
    else if (query < arr[mid])
      high = --mid;
    else
      low = ++mid;
  }

  return false;
}

int main() {
  int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (int i = 0; i < 10; i++) {
    bool result = binarySearch(arr, 10, arr[i]);
    cout << result << endl;
  };
}