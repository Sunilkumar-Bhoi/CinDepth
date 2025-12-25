/*A positive proper divisor of n is a positive divisor of n, which is different from n. For example 1,3,5,9,15 are positive
proper divisors 45 but 45 is not a proper divisor of 45. Write a recursive function that displays all the proper divisors of a
number and returs their sum.*/
#include <stdio.h>
int properDivisor(int num, int n);
int main(void)
{
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    sum = properDivisor(num, num/2);

    printf("\nSum of proper divisor = %d\n", sum);

    return 0;
}

int properDivisor(int num, int n)
{
    if (n <= 1)
    {
        printf("%d ", n);
        return n;
    }
    if (num % n == 0)
    {
        printf("%d ", n);
        return n + properDivisor(num, n-1);
    }
    return properDivisor(num, n-1);
}