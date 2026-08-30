#include <stdio.h>

int main()
{
    int n = 6, i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}