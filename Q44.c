#include <stdio.h>

int main() {
    int n = 3;
    float sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}