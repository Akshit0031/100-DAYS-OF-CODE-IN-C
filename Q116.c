/* Q116: Two Sum */

#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = 4, target = 9;
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");
    return 0;
}

/* Sample Test Cases:
   nums = [2,7,11,15], target = 9
   Output: 0 1

   nums = [3,2,4], target = 6
   Output: 1 2

   nums = [3,3], target = 6
   Output: 0 1
*/