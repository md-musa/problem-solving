#include "iostream"
using namespace std;

int main() {
  int p, m;
  cin >> p >> m;

  int arr[p][m];
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int count = 0;

  for (int col = 0; col < m; col++) {
    bool t = true;
    for (int k = 0; k < p; k++) {
      if (!(arr[k][col] > 0)) {
        t = false;
        break;
      }
    }

    if (t) count++;
  }

  cout << count << endl;
  return 0;
}