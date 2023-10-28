#include "iostream"
using namespace std;

int main() {
  int m = 3, n = 3;
  int dp[m][n];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == 0 || j == 0)
        dp[i][j] = 1;
      else
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }
  cout << dp[m - 1][n - 1] << endl;
}