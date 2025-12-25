/*write a program that scans a one-dimensional array from left to right and compares all adjacent elements Any
adjacent elements arr[i] and arr [i+1] should be exchanged if arr[i] is greater than arr [i+1]. This
procedure will always place the biggest element at the last position. Count the total number of exchanges done.*/
#define MAX 50
#include <stdio.h>
int main(void)
{
    int arr[MAX], i, j, temp, size;

    printf("Number of element in array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter eleemnt %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int xchange=0;
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            xchange++;
        }
    }

    printf("Sorted list is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nTotal exchannges: %d",xchange);
    return 0;
}