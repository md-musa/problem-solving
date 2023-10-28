#include <iostream>
#include <string>
using namespace std;

bool lexical(string word1, string word2) {
  int len = word1.length() < word2.length() ? word1.length() : word2.length();

  for (int i = 0; i < len; i++) {
    if (word1[i] < word2[i]) return true;
  }

  return false;
}

int main() {
  string word1, word2;
  cin >> word1 >> word2;

  if (lexical(word1, word2)) {
    cout << word1 << endl;
    cout << word2 << endl;
  } else {
    if (word1.length() < word2.length()) {
      cout << word1 << endl;
      cout << word2 << endl;
    } else {
      cout << word2 << endl;
      cout << word1 << endl;
    }
  }

  return 0;
}
