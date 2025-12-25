/*Write a program t o sort the clements o f a 1-D array, i n ascending order through selection sort.*/

#define MAX 50
#include <stdio.h>
int main(void)
{
    int arr[MAX], i, j, n, size, temp;
    printf("Enter number of element in array : ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    /*selection sort*/
    for (i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("Sorted list is : ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}