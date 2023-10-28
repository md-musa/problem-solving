#include "iostream"
using namespace std;

int main() {
  int arr1[5], a1 = 0;
  int arr2[5], a2 = 0;

  for (int i = 0; i < 15; i++) {
    int num;
    cin >> num;

    if (num % 2 == 0) {
      arr1[a1] = num;
      a1++;
    } else {
      arr2[a2] = num;
      a2++;
    }

    if (a1 == 4) {
      for (int i = 0; i <= a1; i++) {
        cout << "par[" << i << "] = " << arr1[i] << endl;
      }
      a1 = 0;
    }
    if (a2 == 4) {
      for (int i = 0; i <= a2; i++) {
        cout << "impar[" << i << "] = " << arr2[i] << endl;
      }
      a2 = 0;
    }
  }

  return 0;
}