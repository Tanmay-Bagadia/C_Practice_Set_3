#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[100];
    printf("The value of n (0-100): ");
    fgets(buffer, 100, stdin);
    int n = atoi(buffer);
    int nums[n];
    printf("The values: ");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &nums[j]);
    }

    int reqSum = n * (n + 1) / 2, actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        actualSum += nums[i];
    }

    int missing = reqSum - actualSum;

    printf("The missing number from the range (0- %d) is %d", n, missing);

    return 0;
}
/*
    Given an array nums containing n distinct numbers in the range [0, n], return the only
    number in the range that is missing from the array.
    Example 1:
    Input: nums = [3,0,1]
    Output: 2
    Example 2:
    Input: nums
*/