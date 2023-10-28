#include "iostream"
using namespace std;

int main() {
  long long int arr[61] = {0, 1};

  for (int i = 2; i < 61; i++) {
    arr[i] = arr[i - 2] + arr[i - 1];
  }

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << "Fib(" << n << ") = " << arr[n] << endl;
  }
}