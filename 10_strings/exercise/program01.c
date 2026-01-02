#include <stdio.h>

int main(void)
{
    int i = 0;
    char name[10] = {'m', 'o', 'h', 'i', 'n', '\0'};
    while (name[i])
        putchar(name[i++]);
    printf("\n");
    return 0;
}