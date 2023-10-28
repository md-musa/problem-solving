#include "iostream"
using namespace std;

void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    cout << *(arr + i) << "   ";
  }
  cout << endl;
}

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) return 0;

    int arr[n];
    for (int i = 0; i <= n; i++) {
      arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
      for (int i = 0; i < n; i++) {
        cout << arr[i] << "   ";
      }
      cout << endl;

      int temp = arr[i];
      arr[i] = arr[n - (i + 1)];
      arr[n - (i + 1)] = temp;
    }
    cout << endl;
  }

  return 0;
}