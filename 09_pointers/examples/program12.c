/*Program to dereference a pointer to an array*/
#include <stdio.h>
int main(void)
{
    int arr[5] = {2, 4, 6, 8, 10};
    int *p = arr;
    int(*ptr)[5] = &arr;
    printf("p = %p, ptr = %p\n",p,ptr);
    printf("*p = %d, *ptr = %p\n",*p,*ptr);
    printf("size of(p)= %lu, sizeof(*p) = %lu\n",sizeof(p),sizeof(*p));
    printf("size of(ptr)= %lu, sizeof(*ptr) = %lu",sizeof(ptr),sizeof(*ptr));
    return 0;
}