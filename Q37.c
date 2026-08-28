#include <stdio.h>

int main()
{
    int a = 4, b = 5, lcm;

    lcm = (a > b) ? a : b;

    while(lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }

    printf("%d", lcm);

    return 0;
}