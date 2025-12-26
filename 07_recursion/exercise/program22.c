/* The computation of a^n can be made efficient if we apply the following procedure instead of multiplying n times
Write a recursive function to compute a" using chis procedure.*/
#include <stdio.h>
#include<math.h>
long long int power(int a, int n);
int main(void)
{
    int a, n;
    long long pow;
    printf("Enter number (a) and power (n): ");
    scanf("%d%d", &a, &n);

    pow = power(a, n);
    printf("%d ^ %d = %lld\n", a, n, pow);

    return 0;
}

long long int power(int a, int n)
{
    if(n==0)
        return 1;
    long long half = power(2,n/2);

    if(n%2==0)
        return half*half;
    return a*half*half;
}