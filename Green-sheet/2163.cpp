#include <stdio.h>

#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin >> row >> col;

  int arr[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }

  bool tracer = true;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == 42 && arr[i][j - 1] == 7 && arr[i][j + 1] == 7 &&
          arr[i - 1][j] == 7 && arr[i - 1][j - 1] == 7 &&
          arr[i - 1][j + 1] == 7 && arr[i + 1][j] == 7 &&
          arr[i + 1][j - 1] == 7 && arr[i + 1][j + 1] == 7) {
        cout << i + 1 << " " << j + 1 << endl;
        tracer = false;
        break;
      }
    }
  }
  if (tracer) {
    cout << 0 << " " << 0 << endl;
  }
  return 0;
}