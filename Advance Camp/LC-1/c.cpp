#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, l, c, amount = 0;
  cin >> t;

  while (t--) {
    c++;
    printf("Case %d:\n", c);
    cin >> l;
    while (l--) {
      string oper;
      int am;

      cin >> oper;
      if (oper == "donate") {
        cin >> am;
        amount += am;
      } else {
        cout << amount << endl;
      }
    }
    amount = 0;
  }
}