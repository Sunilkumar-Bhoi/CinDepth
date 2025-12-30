/*passing two dimension array to function*/
#include <stdio.h>
void func(int arr[][4]);

int main(void)
{
    int i, j, arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printf("inside main(): sizeof(arr) = %lu\n",sizeof(arr));
    func(arr);
    printf("content of array after func call : \n");
    for(i=0;i<3;i++)
    {
        for(j=0; j<4;j++)
            printf("%3d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
void func(int (*ar)[4]){
    int i,j;
    printf("inside func(): sizeof(ar) = %lu\n",sizeof(ar));
    for(i=0; i<3; i++)
    {
        for(j=0;j<4;j++)
        {
            ar[i][j]+=2;
        }
    }
}