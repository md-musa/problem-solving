#include "stdio.h"
#include "string.h"
// String-5

int main() {
  char str[1000];
  gets(str);

  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[(len - 1) - i];
    str[(len - 1) - i] = temp;
  }

  puts(str);

  return 0;
}