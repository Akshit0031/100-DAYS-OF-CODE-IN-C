#include <stdio.h>

int main()
{
    int n = 1234;
    int first, last, temp, divisor = 1, middle;

    last = n % 10;
    temp = n;

    while(temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    middle = (n % divisor) / 10;

    n = last * divisor + middle * 10 + first;

    printf("%d", n);

    return 0;
}