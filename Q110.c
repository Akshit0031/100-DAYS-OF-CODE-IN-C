#include <stdio.h>

int main() {
    int n, k, arr[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int maxElement = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > maxElement) {
                maxElement = arr[j];
            }
        }

        printf("%d", maxElement);

        if (i < n - k) {
            printf(" ");
        }
    }

    return 0;
}