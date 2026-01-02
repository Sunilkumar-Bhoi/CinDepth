#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="painstaking";
    char *p=str+5;
    printf("%c\n",*p);
    printf("%s\n",p);
    return 0;
}