#include <stdio.h>
void func(int **pp);
int main(void)
{
    int *ptr;
    func(&ptr);           // passing address of ptr pointer
    printf("%d\n", *ptr); // 10
    return 0;
}
void func(int **pp)
{
    int num = 10;
    *pp = &num; // go to *ptr and change address of it to &num
}