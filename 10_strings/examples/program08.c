#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[40],str2[40];
    printf("enter string : ");
    gets(str1);
    printf("Enter string: ");
    gets(str2);
    printf("First string : %d, Secund String : %s\n",str1, str2);
    strcat(str1,str2);
    printf("now first string is  = %s\n",str1);
    return 0;
}