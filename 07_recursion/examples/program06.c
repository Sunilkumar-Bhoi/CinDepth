/*P7.6 Program to raise a floating point number to a positive integer"*/
#include <stdio.h>
float power(float a, int n);
int main(void)
{
    float a, p;
    int n;
    printf("Enter two number : ");
    scanf("%f %d", &a, &n);
    p = power(a, n);
    printf("%f raised to %d is %f", a, n, p);
    return 0;
}
/*linear recursion if n=1000 it will make 1000 function calls*/
float power(float a, int n)
{
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}