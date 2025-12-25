#include<stdio.h>
int main(void)
{
    int x[10],y[2][4],z[2][3][5];
    printf("%lu\t%lu\t%lu\n",sizeof(x),sizeof(y),sizeof(z));
    return 0;
}