#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[100], result[100];
    printf("Enter a number: ");
    fgets(num, sizeof(num), stdin);
    num[strcspn(num, "\n")] = '\0';

    int i, size = strlen(num), foundIndex, found_odd = 0;

    for (i = size - 1; i >= 0; i--)
    {
        if (num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9')
        {
            foundIndex = i;
            found_odd = 1;
            int j;
            for (j = 0; j <= foundIndex; j++)
            {
                result[j] = num[j];
            }
            result[j] = '\0';
            for (int k = 0; k <= foundIndex; k++)
            {
                printf("%c", result[k]);
            }
            break;
        }
    }

    if (!found_odd)
    {
        printf("");
    }
    return 0;
}

/*
    You are given a string num, representing a large integer. Return the largest-valued odd
    integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd
    integer exists.
    A substring is a contiguous sequence of characters within a string.
    Example 1:
    Input: num = "52"
    Output: "5"
    Example 2:
    Input: num = "4206"
    Output: ""
*/