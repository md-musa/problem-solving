#include "iostream"
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << "Case 1: " << arr[(n / 2)] << endl;
  }

  return 0;
}