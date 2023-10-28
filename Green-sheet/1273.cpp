#include "iostream"
#include "string"
using namespace std;

int main() {
  bool isEnd = false;
  while (true) {
    int t;
    cin >> t;

    if (t == 0) return 0;

    if (!isEnd) {
      isEnd = true;
    } else {
      cout << endl;
    };

    string words[50];
    int index = 0;

    int highestLen = 0;
    for (int i = 0; i < t; i++) {
      string str;
      cin >> str;
      words[i] = str;

      if (str.length() > highestLen) {
        highestLen = str.length();
      }
    }

    for (int i = 0; i < t; i++) {
      for (int j = 0; j < highestLen - words[i].length(); j++) {
        cout << ' ';
      }
      cout << words[i] << endl;
    }
  }

  return 0;
}