/*P8.9 Program that uses a general function which works on arrays of different sizco*/
#include <stdio.h>
int add(int arr[],int n);
int main(void)
{
    int a[5]={2,4,6,8,10};
    int b[8] = {1,3,5,7,9,11,13,15};
    int c[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Sum of array : %d\n",add(a,5));
    printf("Sum of array : %d\n",add(b,8));
    printf("Sum of array : %d\n",add(c,10));
    return 0;
}
int add(int arr[],int n)
{
    int sum=0,i;
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}