/*P8.6 Program to convert a decimal number to binary number*/
#include<stdio.h>
int main(void)
{
    int arr[15],i=0,j=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num>0){
        arr[i]=num%2;
        num/=2;
        i++;
    }
    printf("Binary number is: ");
    for(j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");
    return 0;
}