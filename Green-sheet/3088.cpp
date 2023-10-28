#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;

  while (getline(cin, str)) {
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == ',' || str[i] == '.') {
        if (str[i - 1] == ' ') str.erase(i - 1, 1);
      }
    }
    cout << str << endl;
  }

  return 0;
}