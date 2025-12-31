/*P10.2 Program to print the address and characters of a string using pointer*/
#include <stdio.h>

int main(void)
{
    int i;
    char str[]="sunil";
    char *p=str;
    for (i=0; *p!='\0';i++)
    {
        printf("character = %c, address = %p\n",*p,p);
        p++;
    }
    return 0;
}