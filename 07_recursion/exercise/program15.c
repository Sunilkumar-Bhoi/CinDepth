/*Write a recursive function to count all the prime numbers between numbers a and biboth inclusive.*/
#include <stdio.h>
#include <math.h>

int countPrime(int a, int b);
int isPrime(int n);

int main(void)
{
    int a, b, count;
    printf("Enter two number: ");
    do
    {
        scanf("%d%d", &a, &b);
        if (a >= b)
            printf("Enter valid range: ");
    } while (a >= b);

    count = countPrime(a, b);

    printf("Prime numbers between %d and %d = %d\n", a, b, count);

    return 0;
}

int countPrime(int a, int b)
{
    if (a > b)
        return 0;
    if (isPrime(a))
        return 1 + countPrime(a + 1, b);
    return countPrime(a + 1, b);
}

int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}