#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, c = 0;
  cin >> t;

  while (t--) {
    printf("Case %d:\n", ++c);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int numOfCow, x, y;
    cin >> numOfCow;
    while (numOfCow--) {
      cin >> x >> y;

      if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }
}