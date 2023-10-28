#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string str;
    getline(cin, str);

    int mid = str.length() / 2;
    for (int i = mid - 1; i >= 0; i--) {
      cout << str[i];
    }

    for (int i = str.length() - 1; i >= mid; i--) {
      cout << str[i];
    }

    if (str.length()) cout << endl;
  }

  return 0;
}