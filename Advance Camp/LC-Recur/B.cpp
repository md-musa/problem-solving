#include <iostream>
using namespace std;

void printDigit(int n) {
  if (n < 10) {
    cout << n << "_";
    return;
  }

  printDigit(n / 10);
  cout << n % 10 << "_";
}

int main() {
  int n;
  cin >> n;

  printDigit(n);
  cout << endl;

  return 0;
}
