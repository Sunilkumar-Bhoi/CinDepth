#include <stdio.h>
#include <string.h>
unsigned int astrcmp(char str1[],char str2[])
{
    int i;
    for(i=0; str1[i]==str2[i];i++)
        if(str1[i]=='\0')
            return 0;
    return str1[i]-str2[2];
}
int main(void)
{
    char str1[40],str2[40];
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);
    if(!strcmp(str1,str2))
        printf("Strings are same!!\n");
    else
        printf("Strings are not same!!\n");
    return 0;
}