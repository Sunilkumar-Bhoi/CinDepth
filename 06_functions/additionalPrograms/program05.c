/*Write a function that converts a decimal number to binary number.*/
#include<stdio.h>

long int binary(int n);

int main(void)
{
    int num;
    printf("Enter Decimal number: ");
    scanf("%d",&num);
    printf("decimal %d, binary %ld\n",num,binary(num));
    return 0;
}

long int binary(int n)
{
    long a=1,bin=0,rem;
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*a;
        n/=2;
        a*=10;
    }
return bin;
}