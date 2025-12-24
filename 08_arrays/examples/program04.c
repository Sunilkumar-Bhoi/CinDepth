/*P8.4 Program to find the largest and smallest number in an array*/
#include<stdio.h>

int main(void)
{
    int arr []= { 1,2,3,4,2,6,8,2,8,10};
    int large,small,i;
    large=small=arr[0];
    for( i=1; i<10 ; i++)
    {
        if(large<arr[i])
            large=arr[i];
       if(small>arr[i])
            small=arr[i];
    }
    printf("Largest : %d\nSmallest : %d\n",large,small);
    return 0;
}