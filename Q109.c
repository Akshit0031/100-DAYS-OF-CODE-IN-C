#include <stdio.h>

int main() {
    int n, k, arr[1000];
    int sum = 0, maxSum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}