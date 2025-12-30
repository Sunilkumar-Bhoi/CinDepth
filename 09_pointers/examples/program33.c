/*P9.33 Program to dynanically allocate a 2-D array*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **a, i, j, row, cols;
    printf("Enter number of rows and column : ");
    scanf("%d%d", &row, &cols);
    /*allocate a one dumension array of int pointers*/
    a = (int **)malloc(row * sizeof(int *));

    /*allocate aone dimensional array of integers for each row pointer*/
    for (i = 0; i < row; i++)
        a[i] = (int *)malloc(cols * sizeof(int));

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("enter a[%d][%d]: ", i, j);
        
            scanf("%d", &a[i][j]);
        }

    }
    printf("result matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
    free(a);
}