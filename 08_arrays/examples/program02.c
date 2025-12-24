/*P8.2 Program to add elementa of an array*/
#include <stdio.h>

int main(void)
{
    int array[5], i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter element of array[%d]: ",i);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("Sum of array is : %d\n", sum);
    return 0;
}
