#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[40], str2[40];
    printf("Enter string 2: ");
    gets(str2);
    strcpy(str1,str2);
    printf("String 1 is : %s\n",str2);
    return 0;
}