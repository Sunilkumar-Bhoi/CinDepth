/*program to insert an iten in a sorted array at the proper place by shifting other
elment to the right*/

#define SIZE 10
#include <stdio.h>

int main(void)
{
    int arr[SIZE], i, item;
    printf("Enter sorted array: ");
    for (i = 0; i < SIZE - 1; i++)
        scanf("%d", &arr[i]);

    printf("Enter item to insert: ");
    scanf("%d", &item);
    i = SIZE - 2;
    while (i >= 0 && arr[i] > item)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i+1]=item;

    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    return 0;
}
