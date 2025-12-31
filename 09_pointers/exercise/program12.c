#include <stdio.h>

int main(void)
{
    int i, arr[10] = {25, 30, 35, 40, 55, 60, 65, 70, 85, 90};
    int *p = arr + 9; // assigning address of 9 array index
    for (i = 0; i < 10; i++)
        printf("%d ", *p--); /*right associativity first p-- then display value of it*/
    printf("\n");
    return 0;
}