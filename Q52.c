#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        int stars;

        if(i <= 3)
            stars = 2 * i - 1;
        else
            stars = 2 * (n - i) + 1;

        for(int j = 1; j <= stars; j++)
            printf("*");

        printf("\n");

        if(i == 1 || i == 3 || i == 5)
            printf("\n");
    }

    return 0;
}