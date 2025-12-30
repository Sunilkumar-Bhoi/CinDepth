/*P9.38 Array of function pointers*/
#include <stdio.h>

float add(float, int);
float sub(float, int);
float mul(float, int);
float div(float, int);

int main(void)
{
    float (*fp[])(float, int) = {add, sub, mul, div};
    int b;
    float a;
    printf("Enter two number (a & b): ");
    scanf("%d%f", &b, &a);

    int *operation[]={"add","subtract","multiply","divide"};

    for(int i=0; i<4; i++)
        printf("operation : %s %f\n",operation[i],(*fp[i])(a,b));
    return 0;
}
float add(float a, int b)
{
    return a + b;
}
float sub(float a, int b)
{
    return a - b;
}
float mul(float a, int b)
{
    return a * b;
}
float div(float a, int b)
{
    return a / b;
}