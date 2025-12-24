/*P8.1 Program to input values into an array and display them*/
#include <stdio.h>

int main(void)
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element array[%d] : ", i);
        scanf("%d", &array[i]);
    }
    printf("Element of array are:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\t", array[i]);
    printf("\n");
    return 0;
}