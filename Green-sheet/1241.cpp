#include "iostream"
#include "string"
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string a, b;
    cin >> a >> b;

    if (a.length() < b.length()) {
      cout << "nao encaixa" << endl;
      continue;
    }

    int i = 0;
    for (i = 0; i < b.length(); i++) {
      if (a[(a.length() - b.length()) + i] != b[i]) {
        cout << "nao encaixa" << endl;
        break;
      }
    }

    if (i == b.length()) {
      cout << "encaixa" << endl;
    }
  }
  return 0;
}
