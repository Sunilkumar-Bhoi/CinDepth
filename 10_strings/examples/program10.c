#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;
    str = (char *)malloc(10);
    printf("Enter a string: ");
    scanf("%s", str);
    printf("%s\n", str);
}