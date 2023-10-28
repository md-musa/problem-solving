#include <bits/stdc++.h>
using namespace std;

int getPosition(char ch) {
  if (ch == ' ') return 1;
  if (ch == 'a' || ch == 'd' || ch == 'g' || ch == 'j' || ch == 'm' ||
      ch == 'p' || ch == 't' || ch == 'w')
    return 1;

  if (ch == 'b' || ch == 'e' || ch == 'h' || ch == 'k' || ch == 'n' ||
      ch == 'q' || ch == 'u' || ch == 'x')
    return 2;

  if (ch == 'c' || ch == 'f' || ch == 'i' || ch == 'l' || ch == 'o' ||
      ch == 'r' || ch == 'v' || ch == 'y')
    return 3;

  if (ch == 's' || ch == 'z') return 4;
};

int main() {
  int t, c = 0;
  string str;
  cin >> t;
  cin.ignore();

  while (t--) {
    getline(cin, str);

    int keyPress = 0;

    for (int i = 0; i < str.length(); i++) {
      keyPress += getPosition(str[i]);
    }

    printf("Case #%d: %d\n", ++c, keyPress);
  }
}