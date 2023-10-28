#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, m, c = 0;
  cin >> t;
  while (t--) {
    cin >> m >> n;
    if (m > n)
      printf("Case %d: %d\n", ++c, (m - n) * 4 + m * 4 + 19);
    else
      printf("Case %d: %d\n", ++c, n * 4 + 19);
  };
}