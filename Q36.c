#include <stdio.h>

int main()
{
    int a = 12, b = 18, r;

    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    printf("%d", a);

    return 0;
}