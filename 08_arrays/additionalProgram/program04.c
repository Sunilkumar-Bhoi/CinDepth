/*Write a procedure which finds the smallest element of the array and swaps it with the O * element of the array.*/
#include <stdio.h>
#define MAX 50
int main(void)
{
    int size, arr[MAX], i, minIndex = 0, temp;
    printf("Enter number of element in array :");
    scanf("%d", &size);

    printf("Enter element of an array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < size; i++)
    {
        if (arr[minIndex] > arr[i])
            minIndex = i;
    }
    if (i != 0)
    {
        temp = arr[minIndex];
        arr[minIndex] = arr[0];
        arr[0] = temp;
    }
    printf("array after operation : ");
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);

    printf("\n");
    return 0;
}