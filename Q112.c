// Q112 - Maximum Subarray Sum

#include <stdio.h>

int main()
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = 7;
    int i, currentSum, maxSum;

    currentSum = arr[0];
    maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);

    return 0;
}