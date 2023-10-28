#include <iostream>
using namespace std;

int main() {
  int n, x;
  cin >> n;

  int arr[2001] = {};
  for (int i = 0; i < n; i++) {
    cin >> x;
    arr[x]++;
  }

  for (int i = 0; i < 2001; i++) {
    if (arr[i] > 0) {
      cout << i << " aparece " << arr[i] << " vez(es)" << endl;
    }
  }

  return 0;
}