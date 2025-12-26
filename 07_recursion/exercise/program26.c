/*Write a program to find out the sum of this series, both by iterative and recursive methods.*/

#include <stdio.h>
#include <math.h>
double series(int x, int n);
double fact(int c);
int main(void)
{
    int x, n, i,term;
    double sum = 0.0, num;
    printf("Enter value of (x) and Nth term(n) : ");
    do
    {
        scanf("%d%d", &x, &n);
    } while (x < 1 || n < 1);

    /*iterative method*/
    for (i = 1; i <= n; i++)
    {
        term = 2 * i - 1;
        num = pow(x, term);
        sum = sum + (num / fact(term));
    }
    printf("iterative sum= %f\n", sum);
    printf("recursion sum =%f\n",series(x,n));
    return 0;
}

/*recursive method*/

double series(int x, int n)
{
    double sum = 0;
    if (n == 1)
        return x;
    sum = pow(x, 2 * n - 1) / fact(2 * n - 1);
    return sum + series(x, n - 1);
}

double fact(int n)
{
    double prod = 1.0;
    for (int i = 1; i <= n; i++)
        prod = prod * i;
    return prod;
}