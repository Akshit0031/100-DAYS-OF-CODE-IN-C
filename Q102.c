#include <stdio.h>

int ceilingIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // possible answer
            high = mid - 1;  // search for first occurrence
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    printf("%d\n", ceilingIndex(arr, n, x));

    return 0;
}