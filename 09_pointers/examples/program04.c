/*Pointer arithmetic*/
#include <stdio.h>
int main(void)
{
    int a = 5, *pi = &a;
    char b = 'x', *pc = &b;
    float c = 12.34, *pf = &c;

    printf("value of pi, address of a: %p\n", pi);
    printf("value of pc, address of b: %p\n", pc);
    printf("value of pd, address of c: %p\n", pf);
    pi++;
    pc++;
    pf++;
    printf("now value of pi : %p\n", pi);
    printf("now value of pc : %p\n", pc);
    printf("now value of pf : %p\n", pf);
    return 0;
}