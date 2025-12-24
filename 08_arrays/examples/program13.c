/*transpose of a matrix*/
#define ROW 3
#define COL 4
#include <stdio.h>

int main(void)
{
    int mat1[ROW][COL], mat2[COL][ROW];
    int i, j;
    printf("Enter Element of mat(%Dx%d): ", ROW, COL);
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &mat1[i][j]);
    /*transpose*/
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    printf("result matrix:\n");
    for (i = 0; i < COL; i++){
        for (j = 0; j < ROW; j++)
            printf("%d\t", mat2[i][j]);
        printf("\n");
    }
    return 0;
}