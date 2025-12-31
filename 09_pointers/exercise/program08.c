#include <stdio.h>

int main(void)
{
    int i, arr[5] = {25, 40, 55, 70, 85}, *p = arr;
    for (i = 0; i < 5; i++)
        printf("%d ", *p++); /*diisplay arr from 25...85*/
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *--p); /*display arr in reverse order*/
    printf("\n");
    return 0;
}