/*
Q5. Problem Statement: Given two strings, check if two strings are anagrams of each
other or not.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 50
int iaAnagraph(char *, char *);
int main(void)

{
    char str1[SIZE], str2[SIZE];
    printf("Enter string one: ");
    scanf("%s", str1);

    printf("Enter string two: ");
    scanf("%s", str2);

    if (iaAnagraph(str1, str2))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

int iaAnagraph(char *str1, char *str2)
{
    int n = strlen(str1);
    int m = strlen(str2);

    if (n != m)
        return 0;

    int i;
    char count[256] = {0};

    for (i = 0; i < n; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (i = 0; i < 256; i++)
    {
        if(count[i]!=0)
            return 0;
    }
    return 1;
}