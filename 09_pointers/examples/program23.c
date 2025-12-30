/*array of pointezs*/
#include <stdio.h>

int main(void)
{
    int *pa[10];
    int i, a = 10, b = 15, c = 20;
    pa[0]=&a; pa[1]=&b,pa[2]=&c;
    for(i=0; i<3; i++)
    {
        printf("address of pa[%d] = %p\t",i,pa[i]);
        printf("Value of pa[%d] = %d\n",i,*pa[i]);
    }
    return 0;
}