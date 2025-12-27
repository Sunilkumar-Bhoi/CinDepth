/*Program of merging two sorted atrays into a third sorted array*/
#define MAX 100
#include <stdio.h>
void mergeSort(int arr1[], int arr2[], int arr3[], int n, int m);
int main(void)
{
    int i, j, k=0, n, m;
    int arr1[MAX], arr2[MAX], arr3[MAX];

    printf("Enter element of array 1 2: ");
    scanf("%d%d", &n, &m);

    printf("Enter first array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter secund array: \n");
    for (i = 0; i < m; i++)
    {
        printf("Enter arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    mergeSort(arr1, arr2, arr3, n, m);

    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
void mergeSort(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while ((i < n) && (j < m))
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while(i<n)
        arr3[k++]=arr1[i++];

    while(j<m)
        arr3[k++]=arr2[j++];
}