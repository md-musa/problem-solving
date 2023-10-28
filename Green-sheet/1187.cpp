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
  for (int row = 7; row < 12; row++) {
    //                5       5 > 7
    for (int col = 12 - row; col < row; col++) {
      sum += arr[row][col];
    }
  }

  if (p == 'S')
    printf("%.1f\n", sum);
  else
    printf("%.1f\n", sum / 30.0);
  return 0;
}