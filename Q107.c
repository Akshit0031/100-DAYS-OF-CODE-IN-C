// Input Example:
// n = 4
// arr = 1 3 2 4
// Output: -1,-1,3,-1

#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        int prev = -1;

        for(j=i-1; j>=0; j--)
        {
            if(arr[j] > arr[i])
            {
                prev = arr[j];
                break;
            }
        }

        if(i == n-1)
            printf("%d", prev);
        else
            printf("%d, ", prev);
    }

    return 0;
}