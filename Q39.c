#include <stdio.h>

int main()
{
    int n = 12345, digit, product = 1;

    while(n > 0)
    {
        digit = n % 10;

        if(digit % 2 != 0)
            product = product * digit;

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}