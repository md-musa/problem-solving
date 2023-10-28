#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int dum;
    cin >> dum;
    if (dum == 0) return 0;

    char arr[4] = {'N', 'L', 'S', 'O'};
    string ds;
    cin >> ds;

    int dir = 0;
    for (int i = 0; i < ds.length(); i++) {
      if (ds[i] == 'D') {
        if (dir == 3)
          dir = 0;
        else
          ++dir;
      } else {
        if (dir == 0)
          dir = 3;
        else
          --dir;
      }
    }

    cout << arr[dir] << endl;
  }

  return 0;
}