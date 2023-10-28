#include <stdio.h>

int main()
{
    long long int lower, upper, upperSum, lowerSum;
    scanf("%lld", &lower);
    scanf("%lld", &upper);

    upperSum = (upper * (upper + 1)) / 2;
    lowerSum = ((lower - 1) * lower) / 2;

    printf("%lld\n", upperSum - lowerSum);

    return 0;
}
