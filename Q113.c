
#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    n = 10;
    k = 4;
    int a[10] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};

    for (i = 0; i < n; i++) {
        arr[i] = a[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);

    return 0;
}