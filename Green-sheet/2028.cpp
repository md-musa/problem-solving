#include "iostream"
using namespace std;

void gen(int n) {}

int main() {
  int n;
  int seq = 0;

  while (cin >> n) {
    int num = 1;
    seq++;
    num += ((n * (n + 1)) / 2);

    if (n == 0) {
      printf("Caso %d: %d numero\n", seq, num);
    } else {
      printf("Caso %d: %d numeros\n", seq, num);
    }

    printf("0");

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        printf(" %d", i);
      }
    }

    printf("\n\n");
  }

  return 0;
}