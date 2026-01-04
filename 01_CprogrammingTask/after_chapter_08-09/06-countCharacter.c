/*
Q6. Problem Statement: You are given a string s. Return the array of unique
characters, sorted by highest to lowest occurring characters.
If two or more characters have same frequency then arrange them in alphabetic
order.
*/
#include <stdio.h>
#include <stdio.h>
#define SIZE 100

void count(int *, char *);

int main(void)
{
    char s[SIZE];
    int arr[256];
    printf("Enter string: ");
    gets(s);
    count(arr, s);
    return 0;
}
void count(int *arr, char *str)
{   
    int i,n=strlen(str);
    for(i=0;i<n;i++)
        
}