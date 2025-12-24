/*binary search in an array*/
#define MAX 50
#include <stdio.h>
int binarySearch(int arr[], int size, int item);
int main(void)
{
    int size, arr[MAX], i, item, index;
    printf("Enter number of element in array: ");
    scanf("%d", &size);

    printf("Enter element of array in sorted order: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter item to be searched: ");
    scanf("%d", &item);

    index = binarySearch(arr, size, item);
    if (index == (-1))
        printf("item not found !!\n");
    else
        printf("%d item found at index %d", item, index);

    return 0;
}
int binarySearch(int arr[], int size, int item)
{
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == item)
            return mid;
        if (item < arr[mid])
            high = mid + 1;
        else
            low = mid - 1;
    }
    return -1;
}