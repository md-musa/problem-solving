#include "iostream"
using namespace std;

int main() {
  int row1, col1, row2, col2;
  cin >> row1 >> col1;
  int m1[row1][col1];

  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      cin >> m1[i][j];
    }
  }

  cin >> row2 >> col2;
  int m2[row2][col2];

  for (int i = 0; i < row2; i++) {
    for (int j = 0; j < col2; j++) {
      cin >> m2[i][j];
    }
  }

  int c = 0;

  if (row1 != col2) {
    cout << "Multiplication is not possible";
    return 0;
  }
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < row1; j++) {
      int sum = 0;

      for (int k = 0; k < col1; k++) {
        sum += m1[i][k] * m2[k][j];
      }
      cout << sum << "  ";
      if (++c == row1) {
        cout << "\n";
        c = 0;
      };
    }
  }
}