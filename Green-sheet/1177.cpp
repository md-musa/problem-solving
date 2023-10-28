#include "iostream"
using namespace std;

int main() {
  int arr[1000];
  int num;
  cin >> num;

  int track = 0;
  for (int i = 0; i < 1000; i++) {
    arr[i] = track;
    track++;
    if (track == num) {
      track = 0;
    }
  }

  for (int i = 0; i < 1000; i++) {
    cout << "N[" << i << "] = " << arr[i] << endl;
  }

  return 0;
}