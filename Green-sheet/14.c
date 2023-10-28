#include <stdio.h>
// Unsolved
int main()
{
    char a, b, c;
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    printf("A = %s, B = %s, C = %s\n", a, b, c);
    printf("A = %s, B = %s, C = %s\n", b, c, a);
    printf("A = %s, B = %s, C = %s\n", c, a, b);
    return 0;
}