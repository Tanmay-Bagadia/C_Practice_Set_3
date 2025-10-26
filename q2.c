#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100], words[100][100];
    printf("Enter the snetence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, '\n')] = '\0';

    int wordCount = 0;

    for (int i = 0; sentence[i] != '\0';)
    {
        int j = 0;
        if (sentence[i] == ' ')
        {
            i++;
        }
        else
        {
            words[j][i] = sentence[i];
        }
    }

    return 0;
}

/*
    Given an input string s, reverse the order of the words.
    A word is defined as a sequence of non-space characters. The words in s will be
    separated by at least one space.
    Return a string of the words in reverse order concatenated by a single space.
    Note that s may contain leading or trailing spaces or multiple spaces between two
    words. The returned string should only have a single space separating the words. Do
    not include any extra spaces.
    Example 1:
    Input: s = "the sky is blue"
    Output: "blue is sky the"
    Example 2:
    Input: s = " hello world "
    Output: "world hello"
*/