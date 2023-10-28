#include <stdio.h>

#include <iostream>
using namespace std;

int main() {
  char p;
  cin >> p;

  double arr[12][12];
  for (int row = 0; row < 12; row++) {
    for (int col = 0; col < 12; col++) {
      cin >> arr[row][col];
    }
  }

  double sum = 0.0;

  for (int row = 1; row < 6; row++) {
    //               7
    for (int col = 12 - row; col < 12; col++) {
      sum += arr[row][col];
    }
  }
  //      6
  for (int row = 10; row >= 6; row--) {
    //                  0  <   11-6=5
    for (int col = row + 1; col < 12; col++) {
      sum += arr[row][col];
    }
  }

  if (p == 'S')
    printf("%.1f\n", sum);
  else
    printf("%.1f\n", sum / 30.0);
  return 0;
}