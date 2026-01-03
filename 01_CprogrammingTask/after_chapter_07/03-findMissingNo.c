/*
Q3. Find missing number in a array
Problem Statement: Given an integer N and an array of size N-1 containing N-1
numbers between 1 to N. Find the number(between 1 to N), that is not present in the
given array.
*/
#include <stdio.h>
#define MAX 50

int findMissing(int arr[], int n);

int main(void)
{
    int n, arr[MAX];
    printf("Enter number of element : ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n - 1; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int missingNumber = findMissing(arr, n);
    printf("%d\n", missingNumber);
    return 0;
}

int findMissing(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n - 1; i++)
        sum += arr[i];
    return (n * (n + 1) / 2) - sum;
}