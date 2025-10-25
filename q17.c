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

    int k = 0;
    for (int j = 0; j < size; j++)
    {
        if (nums[j] != 0)
        {
            nums[k] = nums[j];
            k++;
        }
    }

    for (int m = k; m < size; m++)
    {
        nums[m] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
/*
    Given an integer array nums, move all 0's to the end of it while maintaining the relative
    order of the non-zero elements.
    Note that you must do this in-place without making a copy of the array.
    Example 1:
    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]
    Example 2:
    Input: nums = [0]
    Output: [0]
*/