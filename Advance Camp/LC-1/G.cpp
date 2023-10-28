#include <bits/stdc++.h>
using namespace std;

bool solve(string str) {
  string h = "hello";
  int count = 0;

  for (int i = 0; i < str.length(); i++) {
    for (int j = i; j < str.length(); j++) {
      if (str[j] == h[count]) count++;
      if (count == 5) return true;
    }
    count = 0;
  }
  return false;
}

int main() {
  string str;
  cin >> str;

  if (solve(str)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}