// Q108 - Product of Array Except Self
// Ubuntu C Program

#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i;
    int product = 1;
    int zeroCount = 0;

    // Input:
    // Example 1: 1 2 3 4
    // Example 2: -1 1 0 -3 3

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);

        if(nums[i] == 0)
            zeroCount++;
        else
            product = product * nums[i];
    }

    for(i = 0; i < n; i++)
    {
        if(zeroCount > 1)
        {
            answer[i] = 0;
        }
        else if(zeroCount == 1)
        {
            if(nums[i] == 0)
                answer[i] = product;
            else
                answer[i] = 0;
        }
        else
        {
            answer[i] = product / nums[i];
        }
    }

    printf("Output: [");

    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i != n - 1)
            printf(", ");
    }

    printf("]\n");

    return 0;
}