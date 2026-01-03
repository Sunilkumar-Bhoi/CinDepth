/*
Q2. Check if a array is sorted
Problem Statement: Given an array of size n, write a program to check if the given array
is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is
sorted then return True, Else return False.
*/
#include <stdio.h>
#define MAX 50
int checkArray(int arr[], int n);

int main(void)
{
    int n, arr[MAX], i;
    printf("Enter number of element: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    if(checkArray(arr,n))
        printf("True\n");
    else    
        printf("False\n");
    return 0;
}

int checkArray(int arr[],int n)
{
    int i;
    for(i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
            return 0;
    }
    return 1;
}