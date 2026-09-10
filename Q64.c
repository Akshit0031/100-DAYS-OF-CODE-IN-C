#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, max = 0, answer = 0;

    scanf("%lld", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}