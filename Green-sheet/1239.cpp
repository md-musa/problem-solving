#include <iostream>
using namespace std;

int main() {
  string str;

  while (getline(cin, str)) {
    bool italicStarted = false;
    bool boldStarted = false;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] == '_') {
        if (!italicStarted) {
          cout << "<i>";
          italicStarted = true;
        } else {
          cout << "</i>";
          italicStarted = false;
        }
      } else if (str[i] == '*') {
        if (!boldStarted) {
          cout << "<b>";
          boldStarted = true;
        } else {
          cout << "</b>";
          boldStarted = false;
        }
      } else {
        cout << str[i];
      }
    }

    if (str.length()) {
      cout << endl;
    }
  }

  return 0;
}