// Input Example:
// n = 7
// arr = 2 2 1 1 1 2 2
// Output: 2

#include <stdio.h>

int main()
{
    int n, i, j, count;
    int arr[100];
    int majority = -1;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        count = 0;

        for(j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n/2)
        {
            majority = arr[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}