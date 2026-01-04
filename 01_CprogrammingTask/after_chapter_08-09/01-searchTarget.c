/*
Q1. Problem statement: You are given a sorted array of integers and a target, your task is
to search for the target in the given array. Assume the given array does not contain any
duplicate numbers.
Note:- Have to solve this in time complexity O(log n).
Let’s say the given array is = {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.
*/
#include <stdio.h>
#define MAX 50
int binarySearch(int[], int, int);
int main(void)
{
    int n, target, arr[MAX];
    printf("Enter number of element: ");
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);
    int index = binarySearch(arr, n, target);
    if (index == -1)
        printf("Not found!!\n");
    else
        printf("%d found at index %d!!\n", target, index);
    return 0;
}

int binarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}