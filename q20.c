#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            printf("%d", nums[i]);
            return 0;
        }
    }

    return 0;
}

/*
    Given an array nums of size n, return the majority element.
    The majority element is the element that appears more than ⌊n / 2⌋ times. You may
    assume that the majority element always exists in the array.
    Example 1:
    Input: nums = [3,2,3]
    Output: 3
    Example 2:
    Input: nums = [2,2,1,1,1,2,2]
    Output: 2
*/