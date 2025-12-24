/*Write a recursive function to input and add n numbers.*/
#include<stdio.h>
int func(int n)
{
    int sum;
    if(n==0)
        return 0;
    scanf("%d",&sum);
    return sum+func(n-1);
}
int main(void)
{
    int num;
    printf("Enter the number of input you want to enter.. :");
    scanf("%d",&num);
    printf("sum = %d\n",func(num));
    return 0;
}