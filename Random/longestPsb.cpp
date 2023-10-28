#include "iostream"
using namespace std;

bool isPalindrome(int start, int end, string sub) {
  for (int i = start; i <= end; i++) {
    if (sub[i] != sub[end - (i - start)]) {
      return false;
    }
  }

  return true;
}

int main() {
  string str = "hellowowowjkfde";
  // getline(cin, str);
  // cout << str;
  int start = 0;
  int end = 0;

  for (int i = 0; i < str.length(); i++) {
    for (int j = i; j < str.length(); j++) {
      bool palindrome = isPalindrome(i, j, str);
      cout << "-> ";
      if (palindrome && end - start < j - i) {
        start = i;
        end = j;
      }
      for (int k = i; k <= j; k++) {
        cout << str[k];
      }
      cout << endl;
    }
  }
  cout << endl << "-------------" << endl;
  for (int i = start; i <= end; i++) {
    cout << str[i];
  }
  cout << endl << "s = " << start << " end = " << end;

  return 0;
}
