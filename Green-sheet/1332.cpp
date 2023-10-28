#include "bits/stdc++.h"
using namespace std;

int recognizeWord(string word) {
  if (word.length() == 5) return 3;
  int correctLatter = 0;
  if (word[0] == 'o') correctLatter++;
  if (word[1] == 'n') correctLatter++;
  if (word[2] == 'e') correctLatter++;

  if (correctLatter >= 2)
    return 1;
  else
    return 2;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string word;
    cin >> word;
    int num = recognizeWord(word);
    cout << num << endl;
  }
  return 0;
}