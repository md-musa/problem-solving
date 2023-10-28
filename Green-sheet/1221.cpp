#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;

  for (int i = 3; i <= n / 2; i += 2) {
    if (n % i == 0) return false;
  }

  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num;
    cin >> num;

    if (isPrime(num))
      cout << "Prime" << endl;
    else
      cout << "Not Prime" << endl;
  }

  return 0;
}