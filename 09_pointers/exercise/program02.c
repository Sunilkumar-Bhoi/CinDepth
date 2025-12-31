#include <stdio.h>

int main(void)
{
    int *ptr;/*pointing random garbage memory address*/
    printf("Enter a number: ");
    scanf("%d", ptr);
    printf("%d\n",*ptr);
    return 0;
}