#include <bits/stdc++.h>
using namespace std;

int intToBinary(int num) {
  int sum = 0;
  int power = 0;

  for (int i = 0; i <= 32; i++) {
    int bit = (num & (1 << i)) > 0 ? 1 : 0;
    sum += bit * pow(10, power++);
  };

  return sum;
}

int main() {
  int num = 100;
  cout << intToBinary(num) << endl;

  return 0;
}