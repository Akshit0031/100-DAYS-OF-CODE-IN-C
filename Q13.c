// Q13
// Input: 2020

#include <stdio.h>

int main() {
    int year = 2020;

    if (year % 400 == 0)
        printf("Leap year");
    else if (year % 100 == 0)
        printf("Not a leap year");
    else if (year % 4 == 0)
        printf("Leap year");
    else
        printf("Not a leap year");

    return 0;
}