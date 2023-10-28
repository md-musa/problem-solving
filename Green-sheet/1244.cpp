#include <bits/stdc++.h>
using namespace std;

class Object {
 public:
  int index;
  string word;
  Object(int index, string word) {
    this->index = index;
    this->word = word;
  }
};

int main() {
  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    string str;
    getline(cin, str);

    vector<Object> words;

    string word = "";
    int index = 0;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] != ' ') {
        word += str[i];
        if (i == str.length() - 1) {
          words.push_back(*new Object(index++, word));
        }
      } else {
        words.push_back(*new Object(index++, word));
        word = "";
      }
    }

    for (int i = 0; i < words.size(); i++) {
      for (int j = i + 1; j < words.size(); j++) {
        if (words[i].word.length() < words[j].word.length()) {
          Object temp = words[i];
          words[i] = words[j];
          words[j] = temp;
        }
      }
    }

    for (int i = 0; i < words.size(); i++) {
      cout << words[i].index << " " << words[i].word << endl;
    }

    // for (int i = 0; i < words.size(); i++) {
    //   cout << words[i] << " ";
    // }
  }

  return 0;
}