/*A number is perfect if the sum of all its positive proper divisors is equal to the number, for example 28 is a perfect
number since 28 = 1 + 2 + 4 + 7 + 14. Write a recursive function that finds whether a number is perfect or not*/
#include <stdio.h>
int checkPDivisor(int num,int n,int currentSum);
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(checkPDivisor(num,num/2,0))
        printf("%d is perfect Number.\n",num);
    else 
        printf("Not perfect!!!\n");

    return 0;
}
int checkPDivisor(int num, int n,int currentSum)
{
    if(n==0)
        return (num==currentSum);
    if(num%n==0)
        return checkPDivisor(num,n-1,currentSum+n);
    return checkPDivisor(num, n-1, currentSum);
}
