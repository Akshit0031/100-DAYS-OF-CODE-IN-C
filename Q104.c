#include <stdio.h>
#include <math.h>

// O(n) solution
int pivotON(long long n) {
    for (long long x = 1; x <= n; x++) {
        long long left = x * (x + 1) / 2;
        long long right = n * (n + 1) / 2 - x * (x - 1) / 2;

        if (left == right)
            return x;
    }

    return -1;
}

// O(log n) solution
int pivotOLogN(long long n) {
    long long low = 1;
    long long high = n;
    long long total = n * (n + 1) / 2;

    while (low <= high) {
        long long x = (low + high) / 2;

        long long left = x * (x + 1) / 2;
        long long right = total - x * (x - 1) / 2;

        if (left == right)
            return x;

        if (left < right)
            low = x + 1;
        else
            high = x - 1;
    }

    return -1;
}

// O(1) solution
int pivotO1(long long n) {
    long long total = n * (n + 1) / 2;

    long long x = (long long)sqrt(total);

    if (x * x == total)
        return x;

    return -1;
}

int main() {
    long long n;

    // Input
    scanf("%lld", &n);

    // All three methods
    int answer1 = pivotON(n);
    int answer2 = pivotOLogN(n);
    int answer3 = pivotO1(n);

    // Main answer
    printf("%d\n", answer1);

    return 0;
}