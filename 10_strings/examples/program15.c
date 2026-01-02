#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *arrp[10], str[20];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a string : ");
        gets(str);
        arrp[i] = (char *)malloc(sizeof(str) + 1);
        strcpy(arrp[i], str);
    }
    for (i = 0; i < 10; i++)
        printf("%s\t", arrp[i]);
    printf("\n");
    for (i = 0; i < 10; i++)
        free(arrp[i]);

    return 0;
}