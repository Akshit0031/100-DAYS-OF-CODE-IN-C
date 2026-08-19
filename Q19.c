// Q19
// Input: 3 3 3

#include <stdio.h>

int main() {
    int a = 3, b = 3, c = 3;

    if (a == b && b == c)
        printf("Equilateral");
    else if (a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");

    return 0;
}