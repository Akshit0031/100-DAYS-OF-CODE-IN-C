// Q16
// Input: 3 7 5

#include <stdio.h>

int main() {
    int a = 3, b = 7, c = 5;
    int largest;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("Largest is %d", largest);

    return 0;
}