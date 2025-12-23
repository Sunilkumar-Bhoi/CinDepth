/*program to find factorial using of a number recursive method*/
#include<stdio.h>
long int factorial(int n)
{
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
int main(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num<0)
        printf("no factorial for negative number\n");
    else
        printf("factorial: %ld\n",factorial(num));
    return 0;
}