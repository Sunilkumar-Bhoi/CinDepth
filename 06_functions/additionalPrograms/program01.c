/*Write a function reverse () that inputs a number and returns the reverse o f that number, for example if the
input is 1293, function should retum 3921.*/
#include<stdio.h>

int reverse(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Reverse of %d is %d\n",num,reverse(num));
    return 0;
}
int reverse(int n)
{
    int rev=0,rem;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}