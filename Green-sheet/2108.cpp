#include <iostream>
using namespace std;

int main() {
  string str;
  string sens[10000];
  int index = 0;
  int last = 0;

  while (getline(cin, str)) {
    if (str[0] == '0') {
      cout << endl;
      for (int i = 0; i < index; i++) {
        for (int j = i + 1; j < index; j++) {
          if (sens[i].length() > sens[j].length()) {
            string temp = sens[i];
            sens[i] = sens[j];
            sens[j] = temp;
          }
        }
      }
      cout << "The biggest word: " << sens[index - 1] << endl;
      return 0;
    };

    string s = "";
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' ') {
        sens[index++] = s;
        s = "";
      } else if (i == str.length() - 1) {
        s += str[i];
        sens[index++] = s;
      } else {
        s += str[i];
      }
    }

    for (int i = last; i < index; i++) {
      if (i != index - 1) {
        cout << sens[i].length() << '-';
      } else {
        cout << sens[i].length();
      }
    }
    last = index;

    if (str.length()) {
      cout << endl;
    }
  }

  return 0;
}