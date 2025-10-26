#include <stdio.h>
#include <string.h>

int main()
{
    int size;
    printf("Enter the size of nums array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < size; j++)
    {
        int count = 0;
        for (int k = 0; k < size; k++)
        {
            if (nums[j] == nums[k])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d", nums[j]);
            return 0;
        }
    }

    return 0;
}
/*
    Given a non-empty array of integers nums, every element appears twice except for one.
    Find that single one.
    Example 1:
    Input: nums = [2,2,1]
    Output: 1
    Example 2:
    Input: nums = [4,1,2,1,2]
    Output: 4
*/