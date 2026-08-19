// Q9

#include <stdio.h>
#include <math.h>

int main()
{
    float p = 1000, r = 5, t = 2;
    float si, ci;

    si = (p * r * t) / 100;
    ci = p * pow(1 + r / 100, t) - p;

    printf("Simple Interest=%.0f, Compound Interest=%.2f\n",
           si, ci);

    return 0;
}