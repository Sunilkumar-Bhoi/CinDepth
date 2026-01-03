/*
Q4. Rotate array by K elements
Problem Statement: Given an array of integers, rotating array of elements by k
elements either left or right.
*/
#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    int n, k, arr[MAX], result[MAX];
    printf("Enter number of element : ");
    scanf("%d", &n);

    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter position : ");
    scanf("%d", &k);

    char str[6];
    printf("Enter side: ");
    scanf("%s", str);

    if (strcmp(str, "right") == 0)
    {
        for (i = 0; i < n; i++)
            result[(i + k) % n] = arr[i];
    }
    else
    {
        for (i = 0; i < n; i++)
            result[((i - k + n) % n)] = arr[i];
    }
    for (i = 0; i < n; i++)
        printf("%d ", result[i]);
    return 0;
}