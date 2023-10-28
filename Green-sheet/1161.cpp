#include "iostream"
using namespace std;

long long getFactorial(int num) {
  if (num == 0) return 1;
  if (num == 1) return 1;

  return num * getFactorial(num - 1);
}

int main() {
  int a;
  int b;

  while (cin >> a >> b) {
    long long f1 = getFactorial(a);
    long long f2 = getFactorial(b);
    cout << f1 + f2 << endl;
  }

  return 0;
}
