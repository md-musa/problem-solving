#include "iostream"
#include "string"
using namespace std;

int main() {
  string str;
  while (cin >> str) {
    int arr[10] = {0};

    for (int i = 0; i < str.length(); i++) {
      arr[str[i] - '0']++;
    }

    int index = 0;
    int high = arr[0];

    for (int i = 1; i < 10; i++) {
      if (high <= arr[i]) {
        high = arr[i];
        index = i;
      }
    }
    cout << index << endl;
  }

  return 0;
}