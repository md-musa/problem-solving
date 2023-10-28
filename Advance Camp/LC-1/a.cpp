#include <bits/stdc++.h>
using namespace std;

int main() {
  int Case = 0;
  string str;
  while (true) {
    cin >> str;
    if (str == "*") return 0;

    if (str == "Hajj") {
      printf("Case %d: Hajj-e-Akbar\n", ++Case);
    }
    if (str == "Umrah") {
      printf("Case %d: Hajj-e-Asghar\n", ++Case);
    }
  }
}