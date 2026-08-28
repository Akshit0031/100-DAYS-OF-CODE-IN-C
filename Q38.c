#include <stdio.h>

int main()
{
    int n = 123, sum = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}