/*finds the sum of digits of an integer*/
#include<stdio.h>
int sumOfDigit(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",sumOfDigit(n));
    return 0;
}
int sumOfDigit(int n)
{
   int sum=0;
   if(n%10==0)
    return n;
return n%10+sumOfDigit(n/10);
}