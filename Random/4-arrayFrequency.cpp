#include "bits/stdc++.h"
using namespace std;

int main() {
  int len = 10;
  int arr[len] = {1, 3, 4, 6, 4, 2, 1, 3, 9, 90};

  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  int feq = 1;
  for (int i = 1; i < len; i++) {
    if (arr[i] == arr[i - 1])
      feq++;
    else {
      cout << "Feq " << arr[i - 1] << " : " << feq << endl;
      feq = 1;
    }
  }
  cout << "Feq " << arr[len - 1] << " : " << feq << endl;
}