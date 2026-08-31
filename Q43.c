#include <stdio.h>

int main() {
    int n = 145, original, sum = 0, digit, fact;

    original = n;

    while (n > 0) {
        digit = n % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}