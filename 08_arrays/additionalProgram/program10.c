/*Write a program to sort the elements o f a 1-D array, i n ascending order through insertion sort.*/
#define SIZE 100 
#include<stdio.h>

int main(void)
{
    int arr[SIZE],i,j,n,k;
    printf("Enter number of element in array: ");
    scanf("%d",&n);

    printf("Enter element of array : ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    for(i=1; i<n; i++)
    {
        k=arr[i];
        for(j=i-1;j>=0 && k<arr[j];j--)
            arr[j+1]=arr[j];
        arr[j+1]=k;
    }
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
}