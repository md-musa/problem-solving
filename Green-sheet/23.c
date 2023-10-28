#include <stdio.h>

int main() {
  int hours, minutes, seconds;
  scanf("%d", &seconds);

  hours = seconds / (60 * 60);
  minutes = (seconds / 60) - (hours * 60);
  seconds = seconds - ((hours * 60 * 60) + (minutes * 60));

  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}