#include "stdio.h"
// Function-1

int max(int num1, int num2);
int min(int num1, int num2);

int main() {
  int num1, num2;

  printf("Enter any two numbers: ");
  scanf("%d%d", &num1, &num2);

  int maximum = max(num1, num2);  // Call maximum function
  int minimum = min(num1, num2);  // Call minimum function

  printf("\nMaximum = %d\n", maximum);
  printf("Minimum = %d", minimum);

  return 0;
}

int min(int num1, int num2) {
  if (num1 < num2) {
    return num1;
  } else {
    return num2;
  }
}

int max(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}