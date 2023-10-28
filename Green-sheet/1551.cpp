#include <bits/stdc++.h>
using namespace std;
// 26 = full
// 13 = almostfull
string sortStr(string str) {
  for (int i = 0; i < str.length(); i++) {
    for (int j = i + 1; j < str.length(); j++) {
      if (str[i] > str[j]) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
  return str;
}
int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string sentence;
    getline(cin, sentence);

    string sorted = sortStr(sentence);
    int count = 0;
    for (int i = 0; i < sorted.length(); i++) {
      if (sorted[i] < 'a') {
        continue;
      }
      if (sorted[i] != sorted[i + 1]) count++;
    }

    if (count == 26)
      cout << "frase completa" << endl;
    else if (count >= 13)
      cout << "frase quase completa" << endl;
    else
      cout << "frase mal elaborada" << endl;
  }

  return 0;
}