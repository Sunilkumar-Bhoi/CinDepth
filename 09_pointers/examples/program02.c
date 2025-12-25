/*derefarencing pointer variable*/
#include<stdio.h>
int main(void)
{
    int a=87;
    float b=15.0;
    int *p1=&a;
    float *p2=&b;
    printf("adress of pointer p1 is %p\n",&p1);
    printf("adress of pointer p2 is %p\n",&p2);
    printf("address of a is %p\n",p1);
    printf("address of b is %p\n",p2);
    printf("value of a = %d %d %d\n",a,*p1,*(&a));
    printf("value of b = %f %f %f\n",b,*p2,*(&b));
    return 0;
}