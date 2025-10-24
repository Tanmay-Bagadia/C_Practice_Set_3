#include <stdio.h>
#include <string.h>

int main()
{
    /*
    Question 1
        You are given a valid parentheses string — a string made only of '(' and ')' that
        forms correctly matched pairs.
        A string is valid if:
        ● It’s empty "", or
        ● It looks like "(" + A + ")" where A is valid, or
        ● It’s made by joining two valid strings A + B.
        Examples of valid strings:
        "", "()", "(())()", "(()(()))"
        A primitive valid parentheses string is a valid string that cannot be split into two smaller
        valid strings.
        For example:
        ● "()" and "(())" are primitive
        ● "(())()" is not primitive (it can be split into "(())" and "()")
        Now, any valid string s can be broken into several primitive parts:
        s = P1 + P2 + ... + Pk
        For each primitive part, remove its outermost pair of parentheses, then join all the
        results together and return the new string.
        Example 1:
        Input: s = "(()())(())"
        Output: "()()()"
    */
    char str[100];
    fgets(str, sizeof(str), stdin);

    int counter = 0, i, j = 0;

    // valid string check
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
        {
            counter++;
        }
        else if (str[i] == ')')
        {
            counter--;
        }
    }

    // primitive string printing
    if (counter == 0)
    {
    }

    else
    {
        printf("Not a valid string");
    }
    return 0;
}
