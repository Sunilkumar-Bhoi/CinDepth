/*P9.32 Program to dynamically allocate a 2-D array using arzay of pointers*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, cols;
    int *a[3];
    printf("Enter number of column: ");
    scanf("%d", &cols);
    for (i = 0; i < 3; i++)
        a[i] = (int *)malloc(cols * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
        free(a[i]);
    return 0;
}