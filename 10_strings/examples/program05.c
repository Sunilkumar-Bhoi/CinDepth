/*10.5 strlen() function*/
#include <stdio.h>
#include <string.h>
unsigned int astrlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}
unsigned int pastrlen(char *str)
{
    char *p=str;
    while(*p!='\0')
        p++;
    return p-str;
}
int main(void)
{
    char str[40];
    printf("Enter a string : ");
    gets(str);
    printf("Length of the string is = %lu\n",strlen(str));
    printf("Length of string usinf Custom function : %u\n",astrlen(str));
    printf("Length of string usinf Custom pointer function : %u\n",pastrlen(str));
    return 0;
}
