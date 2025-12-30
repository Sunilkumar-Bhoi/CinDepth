/*Furction returning pointer*/
#include <stdio.h>
void *func(int *p, int n);
int main(void)
{
    int n=5, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = func(arr, n);
    printf("value of arr=%p, value of ptr=%p, value of *ptr=%d", arr, ptr, *ptr);
    return 0;
}
void *func(int *p, int n)
{
    p=p+n;
    return p;
}