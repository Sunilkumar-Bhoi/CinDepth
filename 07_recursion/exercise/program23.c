/*Write a recursive function to multiply two numbers by Russian peasant method. Russian peasant method multiplies any
two positive numbers using multiplication b y 1 , division by 1 and addition. Here the first number is divided b y 1(integer
division), and the second i s multiplied b y 1 repeatedly until the first number reduces to 1. Suppose w e have t o multiply 19.
b y 15, we write the result o f division and multiplication by 1, in the two columns like this-*/
#include <stdio.h>

long int russianPeasant(int a, int b);
int main(void)
{
    int a, b;
    printf("Enter number a and b: ");
    scanf("%d%d", &a, &b);

     long int mul = russianPeasant(a, b);

    printf("%d x %d = %ld\n", a, b, mul);
}
long int russianPeasant(int a, int b)
{
    if (a == 1)
        return b;
    if (a % 2 != 0)
        return b+russianPeasant(a >> 1, b <<1 );
    return russianPeasant(a>>1,b<<1);
}
