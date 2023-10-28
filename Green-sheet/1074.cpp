#include "iostream"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num;
    cin >> num;
    if (num == 0) {
      cout << "NULL" << endl;
    } else {
      if (num < 0) {
        if (num % 2 == -1) {
          cout << "ODD NEGATIVE" << endl;
        } else {
          cout << "EVEN NEGATIVE" << endl;
        }
      } else {
        if (num % 2 == 1) {
          cout << "ODD POSITIVE" << endl;
        } else {
          cout << "EVEN POSITIVE" << endl;
        }
      }
    }
  }

  return 0;
}