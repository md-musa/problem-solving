#include <iostream>
using namespace std;

void recur(int n, int start) {
  cout << start << endl;
  if (start == n) return;

  recur(n, ++start);
}

int main() {
  int n;
  cin >> n;
  recur(n, 1);
}