#include <stdio.h>

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;

  while (getline(cin, str)) {
    int index = 0;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' ') {
        cout << str[i];
        continue;
      }
      if (index % 2 == 0) {
        printf("%c", toupper(str[i]));
      } else {
        printf("%c", tolower(str[i]));
      }
      index++;
    }

    if (str.length()) cout << endl;
  }

  return 0;
}

// Output: A