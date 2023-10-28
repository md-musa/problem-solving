#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, s, a, b;
  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &a, &b);

    if (a < b) swap(a, b);

    while (a % b != 0) {
      s = a;
      a = b;
      b = s % a;
    }
    printf("%d\n", b);
  }
  return 0;
}