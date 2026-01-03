/*
Q5. Moves Zero to the End
Problem Statement: You are given an array of integers, your task is to move all the zeros
in the array to the end of the array and move non-negative integers to the front by
maintaining their order.
*/
#include <stdio.h>
#define MAX 50

int main(void)
{
    int i, index = 0, n, arr[MAX];
    printf("Enter number of element");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index++] = arr[i];
        }
    }
    while (index < n){
        arr[index++] = 0;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}