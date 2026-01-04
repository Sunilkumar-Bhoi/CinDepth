/*
Problem Statement: Given an array of length N, peak element is defined as the
element greater than both of its neighbors. Formally, if arr[i] is the peak element, arr[i -
1] < arr[i] and arr[i + 1] < arr[i]. Find the index(0-based) of a peak element in the array. If
there are multiple peak numbers, return the index of any peak number.
*/

#include <stdio.h>
#define MAX 50

int peakNumber(int[], int);

int main(void)
{
    int n, arr[MAX];
    printf("Enter number of element: ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ENTER ARR[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int index = peakNumber(arr, n);
    if (index != -1)
        printf("%d\n", index);
    else
        printf("no peak element\n");
    return 0;
}

int peakNumber(int arr[], int n)
{
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;
    int i;
    int high = n - 2, low = 1, mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
            return mid;
        if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}