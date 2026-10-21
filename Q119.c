/* Q119: Find the Repeated Element */

#include <stdio.h>

int main() {
    int nums[] = {1, 3, 3, 4};
    int n = 4, i, result = 0;

    for (i = 0; i < n; i++)
        result = result ^ nums[i];

    for (i = 1; i <= n - 1; i++)
        result = result ^ i;

    printf("%d", result);

    return 0;
}

/* Sample Test Cases:
   nums = [1,3,3,4]
   Output: 3

   nums = [1,2,2]
   Output: 2

   nums = [0,4,1,1,5]
   Output: 1
*/