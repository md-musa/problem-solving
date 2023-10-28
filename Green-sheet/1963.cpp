
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b;
  int c, d;
  cin >> a >> b >> c >> d;

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }

  if (c > d) {
    int temp = c;
    c = d;
    d = temp;
  }
  int result = (a + d) - (b + c);

  cout << abs(result) << endl;

  return 0;
}