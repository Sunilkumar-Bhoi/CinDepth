#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="vijaynagr";
    str=str+5;// array typr is not assignable
    printf("%s\n",str);
    return 0;
}