/*program to print the value of array elements using pointer and subscript notation*/
#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    for(i=0; i<5; i++)
    {
        printf("Value of arr[%d] = ",i);
        printf("%d ",arr[i]);
        printf("%d ",*(arr+i));
        printf("%d ",*(i+arr));
        printf("%d\n",i[arr]);
        printf("Address of arr[%d] = %p\n",i,&arr[i]);
    }
    return 0;
}