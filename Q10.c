// Q10

#include <stdio.h>

int main()
{
    int s = 3661;
    int h, m, sec;

    h = s / 3600;
    s = s % 3600;

    m = s / 60;
    sec = s % 60;

    printf("%d:%d:%d\n", h, m, sec);

    return 0;
}