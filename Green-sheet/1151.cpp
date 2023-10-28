#include "iostream"
using namespace std;

int main() {
  int range;
  cin >> range;

  int t1 = 0;
  int t2 = 1;
  int t3 = t1 + t2;
  // 0   1  1  2  3  5 8 13
  //                 t1 t2 t3

  cout << t1 << " " << t2;

  for (int i = 3; i <= range; i++) {
    cout << " " << t3;
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }
  cout << endl;

  return 0;
}