#include <stdio.h>
int main() { 
    int n, key;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++);{
        scanf("%d",&a[i]);

    }scanf("%d",&key);
    int low = 0, high = n -1;
    int found =-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) {
            found = mid;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
