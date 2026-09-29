#include <stdio.h>

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = 6;
    int target;
    int first = -1, last = -1;

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d, %d\n", first, last);

    return 0;
}