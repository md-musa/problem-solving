#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  int cent;

  while (cin >> str >> cent) {
    string format = "";

    int count = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
      if (count == 3) {
        format = ',' + format;
        count = 0;
      }
      format = str[i] + format;
      count++;
    }

    cout << "$" << format << ".";

    if (cent < 10) {
      cout << "0" << cent;
    } else {
      cout << cent;
    }

    cout << endl;
  }
  return 0;
}
