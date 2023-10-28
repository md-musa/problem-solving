#include <cctype>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
      if (islower(str[i])) cout << str[i];
    }
    cout << endl;
  }

  return 0;
}