#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[40],str2[40];
    printf("enter string : ");
    gets(str1);
    printf("Enter string: ");
    gets(str2);
    strcat(str1,str2);
    printf("String1 + string2 = %s\n",str1);
    return 0;
}