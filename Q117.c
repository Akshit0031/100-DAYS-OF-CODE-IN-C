/* Q117: Merge Two Sorted Arrays */

#include <stdio.h>

int main() {
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {4, 8, 10};
    int m = 4, n = 3;
    int arr[20];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            arr[k++] = nums1[i++];
        else
            arr[k++] = nums2[j++];
    }

    while (i < m)
        arr[k++] = nums1[i++];

    while (j < n)
        arr[k++] = nums2[j++];

    for (i = 0; i < k; i++)
        printf("%d ", arr[i]);

    return 0;
}

/* Sample Test Cases:
   nums1 = [2,7,11,15], nums2 = [4,8,10]
   Output: 2 4 7 8 10 11 15

   nums1 = [1,2,7], nums2 = [9,10,17]
   Output: 1 2 7 9 10 17

   nums1 = [-10,-2,7], nums2 = [-3,-1,7]
   Output: -10 -3 -2 -1 7 7
*/