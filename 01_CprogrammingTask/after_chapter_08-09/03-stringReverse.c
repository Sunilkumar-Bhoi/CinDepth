/*
Q3. Problem Statement: Given a string s, reverse the words of the string.
Examples:
Example 1:
Input: s=”this is an amazing program”
Output: “program amazing an is this”
Example 2:
Input: s=”This is decent”
Output: “decent is This”
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100

void reverse(char *start, char *end);
void reverseWord(char[]);

int main(void)
{
    char str[SIZE];
    printf("Enter a string: ");
    gets(str);
    reverseWord(str);
    printf("%s\n",str);
    return 0;
}

void reverse(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWord(char str[])
{
    char *word_begin = str;
    char *temp = str;
    while (*temp)
    {
        temp++;
        if (*temp == '\0')
            reverse(word_begin, temp - 1);
        else if (*temp == ' ')
        {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(str,temp-1);
}