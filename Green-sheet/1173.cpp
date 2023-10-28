#include "iostream"
using namespace std;

int main() {
  int arr[10];
  int num;
  cin >> num;

  arr[0] = num;
  printf("N[0] = %d\n", arr[0]);

  for (int i = 1; i < 10; i++) {
    arr[i] = arr[i - 1] * 2;
    printf("N[%d] = %d\n", i, arr[i]);
  }

  return 0;
}