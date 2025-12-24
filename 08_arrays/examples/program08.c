/*P8.8 Program to understand the effect of passing an array to a function*/
#include <stdio.h>
void func(int var[]);
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6}, i;
    func(arr);
    printf("Content of array: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void func(int var[])
{
    int sum=0,i;
    for(i=0; i<6; i++)
    {
        var[i]=var[i]*var[i];
        sum+=var[i];
    }
    printf("Sum of square : %d\n",sum);
}