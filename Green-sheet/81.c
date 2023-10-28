#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  int arr[N];

  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  int lowest = arr[0];
  int index = 0;

  for (int i = 1; i < N; i++) {
    if (lowest > arr[i]) {
      lowest = arr[i];
      index = i;
    }
  }

  printf("Menor valor: %d\n", lowest);
  printf("Posicao: %d\n", index);

  return 0;
}
