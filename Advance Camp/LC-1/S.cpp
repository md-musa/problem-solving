#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s) {
  if (s.length() == 0) return true;
  stack<char> st;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(' || s[i] == '[') {
      st.push(s[i]);
    } else if (s[i] == ')' || s[i] == ']') {
      if (st.empty()) return false;

      if (s[i] == ')' && st.top() == '(')
        st.pop();
      else if (s[i] == ']' && st.top() == '[')
        st.pop();
      else
        return false;
    };
  };
  return st.empty();
}

int main() {
  int t;
  cin >> t;
  string str;
  cin.ignore();

  while (t--) {
    getline(cin, str);

    if (isBalanced(str))
      cout << "Yes\n";
    else
      cout << "No\n";
  }
}
