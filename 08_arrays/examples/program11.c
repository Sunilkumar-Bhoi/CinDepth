/*P8.11 Addition' of two matrices*/
#define ROW 3
#define COL 4
#include <stdio.h>
int main(void)
{
    int array1[ROW][COL],
        array2[ROW][COL],
        temp[ROW][COL],
        i, j, k;
    printf("Enter matrix mat(%d*%d) row-wise\n", ROW, COL);
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &array1[i][j]);
    printf("Enter matrix mat(%d*%d) row-wise\n", ROW, COL);
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &array2[i][j]);
    /*addition*/
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            temp[i][j] = array1[i][j] + array2[i][j];

    printf("the result matrix:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%d\t", temp[i][j]);
        printf("\n");
    }
    return 0;
}