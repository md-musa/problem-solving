#include <stdio.h>

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;

    double result = str.length() * 0.01;
    printf("%.2lf\n", result);
  }
  return 0;
}