#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  // 0 1 1 2
  int n1 = 0;
  int n2 = 1;
  cout << n1 << " " << n2;
  for (int i = 0; i < n - 2; i++) {
    int tem = n1 + n2;
    cout << " " << tem;
    n1 = n2;
    n2 = tem;
  }
  cout << endl;

  return 0;
}