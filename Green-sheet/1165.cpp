#include "iostream"
using namespace std;

bool isPrime(int num) {
  for (int i = 2; i < num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num;
    cin >> num;

    bool prime = isPrime(num);
    if (prime)
      cout << num << " eh primo" << endl;
    else
      cout << num << " nao eh primo" << endl;
  }

  return 0;
}