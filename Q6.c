// Q6

#include <stdio.h>

int main()
{
    int a = 3, b = 5, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d\n", a, b);

    return 0;
}