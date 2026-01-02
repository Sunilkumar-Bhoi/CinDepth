#include <stdio.h>
#define MAX 50

int main(void)
{
    int arr[MAX], n, i;
    printf("Enter number of element: ");
    scanf("%d", &n);

    /*input array*/
    printf("Enter element : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    /*logic for largest*/
    int max_index = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[max_index] < arr[i + 1])
            max_index = i + 1;
    }
    printf("%d\n", arr[max_index]);
    return 0;
}