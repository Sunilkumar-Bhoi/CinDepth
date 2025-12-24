#include<stdio.h>
int main(void)
{
    char str[10];
    printf("Enter a string: ");
    gets(str);
    printf("string is: ");
    puts(str);
    return 0;
}