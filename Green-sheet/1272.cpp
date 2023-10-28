#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' ') continue;

      if (str[i] != ' ' && str[i - 1] == ' ') {
        cout << str[i];
      }
    }
    if (str.length()) {
      cout << endl;
    }
  }

  return 0;
}