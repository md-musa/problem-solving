#include "iostream"
using namespace std;

bool checkSmaller(int t) {
  int arr[t];
  for (int i = 0; i < t; i++) {
    cin >> arr[i];
  }

  for (int i = 1; i < t; i++) {
    if (arr[i - 1] > arr[i]) {
      cout << i + 1 << endl;
      return false;
    }
  }

  return true;
}

int main() {
  int t;
  cin >> t;
  if (t == 1) {
    cout << 1 << endl;
    return 0;
  }
  if (checkSmaller(t)) cout << 0 << endl;
  return 0;
}