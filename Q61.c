#include <stdio.h>

int main() {
    int n, search, found = -1;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (a[i] == search) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}