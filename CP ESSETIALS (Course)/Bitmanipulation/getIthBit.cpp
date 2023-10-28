#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i) {
  int mask = (1 << i);

  return ((n & mask) > 0) ? 1 : 0;
};

int clearIthBit(int n, int i) {
  int mask = ~(1 << i);

  return n & mask;
};
int setIthBit(int n, int i) {
  int mask = (1 << i);

  return (n | mask);
};

int main() {
  int n = 13;
  int i;
  cin >> i;

  cout << clearIthBit(n, i);
}
