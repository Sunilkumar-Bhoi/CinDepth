/*array of pointer*/
#include <stdio.h>
int main(void)
{
    int i, j, arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int *pa[3];
    for (i = 0; i < 3; i++)
        pa[i] = arr[i];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",pa[i][j]);
    }
    return 0;
}