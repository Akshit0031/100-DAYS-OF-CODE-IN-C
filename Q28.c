#include <stdio.h>

int main() {
    int n = 6, product = 1;

    for(int i = 2; i <= n; i += 2)
        product *= i;

    printf("%d", product);

    return 0;
}