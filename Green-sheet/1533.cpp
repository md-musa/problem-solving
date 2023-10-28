#include "iostream"
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < n; i++) {
      if (max1 < arr[i]) {
        max2 = max1;
        max1 = arr[i];
      }
      if (max2 < arr[i] && max1 > arr[i]) {
        max2 = arr[i];
      }
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] == max2) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}