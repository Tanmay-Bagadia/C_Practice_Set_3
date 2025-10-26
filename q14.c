#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], result[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int resultSize = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (resultSize > 0 && ((str[i] - result[resultSize - 1]) == 32) || ((str[i] - result[resultSize - 1]) == -32))
        {
            resultSize--;
        }
        else
        {
            result[resultSize] = str[i];
            resultSize++;
        }
    }
    result[resultSize] = '\0';

    printf("The resulted string is: %s", result);
    return 0;
}
/*
    Given a string s of lower and upper case English letters.
    A good string is a string which doesn't have two adjacent characters s[i] and s[i +
    1] where:
    ● 0 <= i <= s.length - 2
    ● s[i] is a lower-case letter and s[i vice-versa.
    + 1] is the same letter but in upper-case or
    T o make the string good, you can choose two adjacent characters that make the string
    bad and remove them. You can keep doing this until the string becomes good.
    Return the string after making it good. The answer is guaranteed to be unique under the
    given constraints.
    Notice that an empty string is also good.
    Example 1:
    Input: s = "leEeetcode"
    Output: "leetcode"
    Example 2:
    Input: s = "abBAcC"
    Output: ""
*/