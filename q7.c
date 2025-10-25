#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100], str2[100];
    printf("Enter word1 (1-100 characters): ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter word2 (1-100 characters): ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2))
    {
        printf("Not an Anagram\n");
        return 0;
    }

    int countStr1[26] = {}, countStr2[26] = {}, index;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        index = str1[i] - 'a';
        countStr1[index]++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        index = str2[i] - 'a';
        countStr2[index]++;
    }
    int isAnagram = 1;
    for (int i = 0; i < 26; i++)
    {
        if (countStr1[i] != countStr2[i])
        {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not an Anagram");
    }

    return 0;
}
