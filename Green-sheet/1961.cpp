#include <bits/stdc++.h>
using namespace std;

int main() {
  int jump;
  int numOfPipe;
  cin >> jump >> numOfPipe;
  int arr[numOfPipe];
  for (int i = 0; i < numOfPipe; i++) {
    cin >> arr[i];
  }
  bool isWon = true;
  for (int i = 0; i < numOfPipe - 1; i++) {
    if (abs(arr[i + 1] - arr[i]) > jump) {
      cout << "GAME OVER" << endl;
      isWon = false;
      break;
    }
  }
  if (isWon) cout << "YOU WIN" << endl;
}