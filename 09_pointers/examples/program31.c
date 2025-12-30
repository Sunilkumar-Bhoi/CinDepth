#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,row;
    int (*a)[4];
    printf("Enter number of row: ");
    scanf("%d", &row);
    a=(int (*)[4])malloc(row*4*sizeof(int));
    if(a==NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("The matrix is:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
        
    }
    free(a);
    return 0;
}