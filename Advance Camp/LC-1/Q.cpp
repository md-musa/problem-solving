#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int k, n;
  cin >> k >> n;
  //  5    k=11  5.5=6
  long long int x = ceil(k / 2.0);
  if (n <= x) {
    cout << 2 * n - 1 << endl;
  } else {
    cout << 2 * (n - ceil(k / 2.0)) << endl;
  }
}
// 10
// 1 3 5 7 9 11   2  4  6  8   10
// 1 2 3 4 5  6   7  8  9  10  11
//                1  2  3  4   5

//  nth odd 2n-1     2*6-1
//  nth even 2(k-n) 2(9-ceil(11/2)) =
