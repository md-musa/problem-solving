#include "stdio.h"
#include "string.h"

char subStr(int s, int e, char str[]) {
  char sub[3];
  for (int i = s; i <= e; i++) {
    sub[i - s] = str[i];
  }
  return sub;
}

int main() {
  char str[1000];
  gets(str);
  int count = 0;

  for (int i = 1; i < strlen(str); i++) {
    char sub[4] = subStr(i - 1, i, str);
    puts(sub);
    // if (strcmp(sub, "ok") == 0) count++;
  }

  printf("%d", count);
  return 0;
}