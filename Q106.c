// Input Example:
// n = 4
// arr = 1 3 2 4
// Output: 3,4,4,-1

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
        int next = -1;

        for(j=i+1; j<n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        if(i == n-1)
            printf("%d", next);
        else
            printf("%d, ", next);
    }

    return 0;
}