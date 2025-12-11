/*program for function with arguement and return value*/
#include<stdio.h>

/*program to find sum of digit of any number*/

int sum(int num);/*function declaration*/

int main(void)
{
    int num,s;
    printf("Enter a number:");
    scanf("%d",&num);
    s=sum(num);
    printf("Sum of digit is %d\n",s);
    return 0;
}
int sum(int num)
{
    int rem,sum=0;
    while(num>0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    return sum;
}