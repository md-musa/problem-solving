#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string str1, str2;
    cin >> str1 >> str2;

    string bigger;
    string smaller;
    if (str1.length() > str2.length()) {
      bigger = str1;
      smaller = str2;
    } else {
      bigger = str2;
      smaller = str1;
    }

    for (int i = 0; i < smaller.length(); i++) {
      cout << str1[i];
      cout << str2[i];
    }

    for (int i = smaller.length(); i < bigger.length(); i++) {
      cout << bigger[i];
    }

    cout << endl;
  }

  return 0;
}