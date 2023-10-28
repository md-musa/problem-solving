#include <stdio.h>
#include <string.h>

int main() {
  int len;
  scanf("%d", &len);

  char str[len];
  scanf("%s", &str);

  int end = 1;
  int start = 0;

  for (int i = 0; i <= len; i++) {
    char subStr[(end - start) + 1];

    for (int j = start; j <= end; j++) {
      subStr[j] = str[j];
      printf("%c", subStr[j]);
    }

    int k;
    for (k = 0; k < strlen(subStr); k++) {
      if (subStr[k] != str[end - k]) {
        start++;
        end++;
        break;
      };
    }

    if (k + 1 == strlen(subStr)) {
      printf("%d %d", start, end);
      break;
    }

    return 0;
  }
}
//    ab
// "abcda "