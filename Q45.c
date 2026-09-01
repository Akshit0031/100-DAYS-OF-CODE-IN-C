#include <stdio.h>

int main() {
    int n = 3;
    float sum = 0;

    for(int i = 1; i <= n; i++) {
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}