#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of 'nums' array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter the elements one by one:");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    int currStreak = 0, maxStreak = 0;
    for (int j = 0; j < size; j++)
    {
        if (nums[j] == 1)
        {
            currStreak++;
            if (currStreak > maxStreak)
            {
                maxStreak = currStreak;
            }
        }
        else if (nums[j] == 0)
        {
            currStreak = 0;
        }
    }
    printf("Maximum number of consecutive 1's in the array is: %d", maxStreak);
    return 0;
}
/*
    Given a binary array nums, return the maximum number of consecutive 1's in the array.
    Example 1:
    Input: nums = [1,1,0,1,1,1]
    Output: 3
    Example 2:
    Input: nums = [1,0,1,1,0,1]
    Output: 2
*/