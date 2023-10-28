#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int t;
    cin >> t;
    if (t == 0) return 0;

    char correctPro[t] = {};
    int index = 0;

    char current;
    int time;
    string state;

    char previous;
    int incorrect = 0;
    int correct = 0;
    int totalTime = 0;

    while (t--) {
      cin >> current >> time >> state;
      previous = current;
      if (current != previous) {
        incorrect = 0;
      }
      if (state == "incorrect") {
        if (current == previous) incorrect++;
        cout << "c = " << current << ", "
             << "p = " << previous << endl;
      } else {
        bool isAlreadyExist = false;
        for (int i = 0; i < index; i++) {
          if (correctPro[i] == current) {
            isAlreadyExist = true;
            break;
          }
        }

        if (!isAlreadyExist) {
          totalTime += time;
          if (current == previous) {
            totalTime += incorrect * 20;
            incorrect = 0;
          }
          correctPro[index++] = current;
          correct++;
        }
      }
    }
    cout << correct << " " << totalTime << endl;
  }
}