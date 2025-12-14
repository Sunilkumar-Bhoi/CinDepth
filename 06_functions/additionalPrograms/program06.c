/*Write a program to raise a floating point number to an integer power(eg. a^n where a is floating point number
and n is an integer value.*/

#include<stdio.h>
double power(double a, int n);
#include<stdlib.h>
int main (void)
{
    double a;
    int n;
    printf("Enter base :");
    scanf("%lf",&a);
    printf("Enter exponen :");
    scanf("%d", &n);
    printf("%lf raised to power %d is %lf\n" ,a,n,power(a,n));
    return 0;
}

double power(double a, int n)
{
    double p=1;
    if (n==0)
        return 1;
    else
    {
        for(int i=1;i<=abs(n);i++)
            p=p*a;
        if(n>0)
            return p;
        else
            return 1/p;
    }
}