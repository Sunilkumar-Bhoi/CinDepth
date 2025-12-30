/*P9.18 Returning more than one value from a function using call by reference*/
#include<stdio.h>
void func(int x, int y, int *ps, int *pd, int *pp);
int main(void)
{
    int a,b,sum,prod,diff;
    a=6;
    b=4;
    func(a,b,&sum,&diff,&prod);
    printf("Sum= %d\n",sum);
    printf("Difference= %d\n",diff);
    printf("Product= %d\n",prod);
    return 0;
}
void func(int x, int y, int *ps, int *pd, int *pp)
{
    *ps=x+y;
    *pd=x-y;
    *pp=x*y;
}