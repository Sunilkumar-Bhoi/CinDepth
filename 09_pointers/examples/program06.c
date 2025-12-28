/*pointer to pointer*/
#include <stdio.h>

int main(void)
{
    int a = 5;
    int *pa = &a;
    int **ppa = &pa;
    printf("adress of a = %p\n", &a);
    printf("value of pa = address of a =  %p\n", pa);
    printf("address of *pa = %p\n", &pa);
    printf("value ppa= address of pa= %p\n", ppa);
    printf("address of ppa = %p\n", &ppa);
    printf("value of *ppa = adress of pa = %p\n", *ppa);
    printf("value of **ppa = value of a = %d\n", **ppa);
    printf("address of ppa = %p\n", &ppa);
    return 0;
}