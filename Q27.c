#include <stdio.h>

int main() {
    int n = 5, sum = 0;

    for(int i = 1; i <= n; i++)
        sum += 2 * i - 1;

    printf("%d", sum);

    return 0;
}