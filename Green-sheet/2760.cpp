#include "iostream"
#include "string"
using namespace std;

void printStr(string str) {
  for (int i = 0; i < 10; i++) {
    cout << str[i];
  }
}

int main() {
  string s1, s2, s3;
  getline(cin, s1);
  getline(cin, s2);
  getline(cin, s3);

  cout << s1 << s2 << s3 << endl;
  cout << s2 << s3 << s1 << endl;
  cout << s3 << s1 << s2 << endl;

  if (s1.length() <= 10)
    cout << s1;
  else
    printStr(s1);

  if (s2.length() <= 10)
    cout << s2;
  else
    printStr(s2);

  if (s3.length() <= 10)
    cout << s3;
  else
    printStr(s3);

  cout << endl;

  return 0;
}