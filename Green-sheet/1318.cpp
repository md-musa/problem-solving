#include "iostream"
using namespace std;

int main() {
  int ticket, persons;
  cin >> ticket >> persons;

  int arr[persons];
  for (int i = 0; i < persons; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < persons; i++) {
    for (int j = i + 1; j < persons; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  int count = 0;
  for (int i = 0; i < persons; i++) {
    if (arr[i] == arr[i - 1]) count++;
  }
  cout << count << endl;
  return 0;
}