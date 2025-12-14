/*Write a function that inputs two numbers and prints all prime numbers between those numbers*/
#include<stdio.h>
#include<math.h>

void printPrime(int n, int m);
int isprime(int num);

int main(void)
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    printf("prime number between %d and %d is :",num1,num2);
    printPrime(num1,num2);
    return 0;
}

void printPrime(int n, int m)
{
    for(int i=n; i<=m; i++)
    {
        if(isprime(i))
            printf("%d\n",i);
    }
}

int isprime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}