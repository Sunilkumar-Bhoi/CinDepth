/*bubble sort*/
#define MAX 50
#include<stdio.h>

int main(void)
{
    int arr[MAX],i,j,size,temp;
    printf("Enter number of element in array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
         int xchanges=0;

        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
        if(xchanges==0)
            break;
    }
    printf("Sorted list is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}