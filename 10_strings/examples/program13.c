/*P10.13 Array of pointer to an strings*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char *str[]= {"white", "red", "green", "yellow", "blue"};
    for (i = 0; i < 5; i++)
    {
        printf("String: %s\t",str[i]);
        printf("Address : %p\t",str[i]);
        printf("Address of string stored at : %p\n",str+i);
    }
    return 0;
}