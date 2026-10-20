/* Q118: Find the Missing Number */

#include <stdio.h>

int main() {
    int nums[] = {0, 3, 2, 4};
    int n = 4, i, sum = 0;

    for (i = 0; i <= n; i++)
        sum = sum + i;

    for (i = 0; i < n; i++)
        sum = sum - nums[i];

    printf("%d", sum);

    return 0;
}

/* Sample Test Cases:
   nums = [0,3,2,4]
   Output: 1

   nums = [1,2,3]
   Output: 0

   nums = [0,4,3,1,5]
   Output: 2
*/