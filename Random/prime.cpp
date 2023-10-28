#include "iostream"
using namespace std;
//                   4
bool checkPrime(long long num) {
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) return false;
  }

  return true;
}

int main() {
  // int t;
  // cin >> t;
  // while (t--) {
  long long num;
  cin >> num;

  long long arr[num / 3];
  long long index = 0;

  for (long long i = 2; i < num; i++) {
    if (checkPrime(i)) {
      arr[index++] = i;
      // cout << i << " ";
    }
  }

  bool isSum = true;
  for (int i = 0; i < index; i++) {
    for (int j = i; j < index; j++) {
      if (arr[i] + arr[j] == num) {
        cout << arr[i] << " + " << arr[j] << " = " << arr[i] + arr[j] << endl;
        return 0;
      }
    }
  }

  // if (isSum) cout << "NO" << endl;
  // }
  return 0;
}