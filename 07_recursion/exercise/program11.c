#include<stdio.h>
int func(char *s, int a)
{
    if(*s=='\0')
        return 0;
    if(*s==a)
        return 1 + func(s+1,a);
    return func(s+1,a);
}
int main(void)
{
    char str[100],a;
    printf("Enter a string:");
    scanf(" %s", str);
    printf("Enter a character: ");
    scanf(" %c",&a);
    printf("%d\n",func(str,a));
    return 0;
}