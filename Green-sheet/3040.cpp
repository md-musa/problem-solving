#include "iostream"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int tall, dia, bra;
    cin >> tall >> dia >> bra;
    if (tall >= 200 && tall <= 300 && dia >= 50 && bra >= 150) {
      cout << "Sim" << endl;
    } else {
      cout << "Nao" << endl;
    }
  }

  return 0;
}