/*Write a program to search for an element in an array using linear search.*/
#include <stdio.h>
#define SIZE 50
int linearSearch(int arr[], int n, int item)
{
    int i = 0;
    while (i < n && arr[i] != item)
        i++;
    if (i<n)
        return i;
    return -1;
}
int main(void)
{
    int arr[SIZE], n, i, item, index;
    printf("Number of element in array: ");
    scanf("%d", &n);
    printf("Enter element of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter item to be searched : ");
    scanf("%d", &item);
    index = linearSearch(arr, n, item);
    if (index != (-1))
        printf("%d found at index %d\n", item, index);
    else
        printf("not found!!!\n");
    return 0;
}