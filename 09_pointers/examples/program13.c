/*.13 Program to print the values and addresa of element of a 2-D'azray**/
#include <stdio.h>
int main(void)
{
    int i, j;
    int arr[2][2] = {{1, 2}, {3, 4}};
    for (i = 0; i < 2; i++)
    {
        printf("Address of %dth array = %p %p\n", i, arr[i], arr + i);
        for (j = 0; j < 2; j++)
        {
            printf("value of arr[%d][%d] = %d %d\n",i,j,arr[i][j],*(*(arr+i)+j));
        }
    }
    return 0;
}