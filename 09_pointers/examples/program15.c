/*P9.15 Program to print the elements of 3-D array using pointer notation*/
#include<stdio.h>

int main(void)
{
    int i,j,k;
    int arr[2][3][1]={{1,2,3},{4,5,6}};
    for(i=0; i<2;i++){
        for(j=0;j<3;j++)
        {
            for(k=0;k<1;k++)
            {
                printf("%d ",*(*(*(arr+i)+j)+k));
            }
        }
        printf("\n");
    }
    return 0;
}