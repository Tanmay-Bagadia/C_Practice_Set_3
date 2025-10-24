#include <stdio.h>
#include <string.h>

int main()
{
    char word1[100], word2[100], result[200];

    printf("Enter word1 (1-100 characters): ");
    fgets(word1, sizeof(word1), stdin);
    printf("Enter word2 (1-100 characters): ");
    fgets(word2, sizeof(word2), stdin);

    word1[strcspn(word1, "\n")] = '\0';
    word2[strcspn(word2, "\n")] = '\0';

    int len1 = strlen(word1), len2 = strlen(word2);

    if (len1 == len2)
    {
        int i, j;
        for (i = 0; i < len1; i++)
        {
            result[2 * i] = word1[i];
        }
        for (j = 0; j < len2; j++)
        {
            result[2 * j + 1] = word2[j];
        }
        result[len1 + len2] = '\0';
        printf("%s", result);
    }
    else
    {
        int minLen = (len1 > len2) ? len2 : len1;
        int k;
        for (k = 0; k < minLen; k++)
        {
            result[2 * k] = word1[k];
            result[2 * k + 1] = word2[k];
        }
        if (minLen == len1)
        {

            for (int i = 0; i < len2 - minLen; i++)
            {
                result[2 * minLen + i] = word2[minLen + i];
            }
            result[len1 + len2] = '\0';
        }
        else
        {
            for (int i = 0; i < len1 - minLen; i++)
            {
                result[2 * minLen + i] = word1[minLen + i];
            }
            result[len1 + len2] = '\0';
        }
        printf("%s", result);
    }

    return 0;
}

/*
    You are given two strings word1 and word2. Merge the strings by adding letters in
    alternating order, starting with word1. If a string is longer than the other, append the
    additional letters onto the end of the merged string.
    Return the merged string.
    Example 1:
    Input: word1 = "abc", word2 = "pqr"
    Output: "apbqcr"
    Example 2:
    Input: word1 = "ab", word2 = "pqrs"
    Output: "apbqrs"
*/