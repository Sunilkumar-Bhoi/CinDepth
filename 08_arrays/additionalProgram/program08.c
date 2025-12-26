/*Write a program that inserts an element in an array at a specified index by moving elements to the right.*/
#define MAX 10
#include <stdio.h>

int main(void)
{
    int arr[MAX],
        i, item, index, temp;

    printf("Enter element of array : ");
    for (i = 0; i < MAX - 1; i++)
        scanf("%d", &arr[i]);

    printf("Enter index and item to insert in array: ");
    scanf("%d%d", &index, &item);

    for (i = MAX - 2; i >=index; i--)
        arr[i + 1] = arr[i];

    arr[index] = item;

    for (i = 0; i < MAX; i++)
        printf("%d\t", arr[i]);
    return 0;
}