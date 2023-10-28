// #include <stdio.h>
// #include <string.h>

void reverseString(char* s, int sSize) {
  for (int i = 0; i < sSize / 2; i++) {
    char tem = s[i];
    s[i] = s[sSize - (i + 1)];
    s[sSize - (i + 1)] = tem;
  }
}
int main() {
  char string[6] = {'h', 'e', 'l', 'l', 'o'};

  reverseString(string, strlen(string));

  printf("%s", string);

  return 0;
}
