#include "stdio.h"
#include "string.h"
// String-6

int main() {
  char str[1000];
  gets(str);

  int len = strlen(str);
  int i;
  for (i = 0; i < len / 2; i++) {
    if (str[i] != str[(len - 1) - i]) break;
  }

  if (i == len / 2)
    printf("Palindrome\n");
  else
    printf("Not Palindrome\n");

  return 0;
}