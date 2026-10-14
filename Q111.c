// Q111 - First Negative Integer in Every Window

#include <stdio.h>

int main()
{
    int arr[] = {-8, 2, 3, -6, 10};
    int n = 5, k = 2;
    int i, j, found;

    for(i = 0; i <= n - k; i++)
    {
        found = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
            printf("0 ");
    }

    return 0;
}