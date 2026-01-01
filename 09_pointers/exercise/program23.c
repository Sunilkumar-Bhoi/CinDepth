#include <stdio.h>
void func1(int *ptr);
void func2(int **ptr);
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;         // storing starting address of array in ptr
    printf("p=%p,\t", p); // display starting address of array
    func1(p);
    printf("p=%p,\t", p); // still pointing starting address of array
    func2(&p);
    printf("p=%p\n", p);
    return 0;
}
void func1(int *ptr)
{
    ptr++;
}
void func2(int **pptr)
{
    (*pptr)++;
}