#include <iostream>
#include <string>
using namespace std;

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
  string str;
  getline(cin, str);

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      str.erase(i, 1);
    }
  }
  string sorted = sortStr(str);
  cout << sorted << endl;

  char previous = sorted[0];

  for (int i = 0; i < sorted.length(); i++) {
    if (sorted[i] != sorted[i + 1] || sorted[i] + 1 != sorted[i + 1]) {
      cout << previous << ":" << sorted[i] << ", ";
      previous = sorted[i];
    }
  }

  cout << endl;

  return 0;
}