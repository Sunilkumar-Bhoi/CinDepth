/*ostfix/prefix iricrement/decrement in a pointer variable of base type int*/

#include<stdio.h>

int main(void)
{
    int a=10;
    int *iptr;
    iptr=&a;

    printf("Value of ptr = address of a = %p\n",iptr);
    printf("value of p = %p\n",++iptr);
    printf("value of p = %p\n",iptr++);
    printf("value of p = %p\n",iptr);
    printf("value of p = %p\n",--iptr);
    printf("value of p = %p\n",iptr--);
    printf("value of p = %p\n",iptr);
    return 0;
}