#include <bits/stdc++.h>
using namespace std;

int main() {
  string r1 = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  string str;

  while (getline(cin, str)) {
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' ') {
        cout << " ";
        continue;
      }
      for (int j = 0; j < r1.length(); j++) {
        if (str[i] == r1[j]) {
          cout << r1[j - 1];
          break;
        }
      }
    }
    cout << endl;
  }
}