/*
Q4. Problem Statement: Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while
preserving the order of characters. No two characters may map to the same character,
but a character may map to itself.
*/

#include <stdio.h>
#include <string.h>
#define MAX 50

int isIsomorphic(char[], char[]);

int main(void)
{
    char s[MAX], t[MAX];
    printf("Enter string s: ");
    gets(s);
    printf("Enter string t: ");
    gets(t);
    if (isIsomorphic(s, t))
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

int isIsomorphic(char *s, char *t)
{
    int n = strlen(s);
    int m = strlen(t);

    if (n != m)
        return 0;

    int mapS[256] = {0};
    int mapT[256] = {0};

    int i;
    for (i = 0; i < n; i++)
    {
        char charS = s[i];
        char charT = t[i];

        // character is seen before?
        if (mapS[charS] != 0 || mapT[charT] != 0)
        {
            if (mapS[charS] != charT || mapT[charT] != charS)
            {
                return 0;
            }
        }
        else
        {
            mapS[charS] = charT;
            mapT[charT] = charS;
        }
    }
    return 1;
}