#include <stdio.h>
int a=5, b=10;
void change(int *p)
{
    p=&a;
}
void change2(int **pp)
{
    *pp=&b;
}
int main(void)
{
    int x=20, *ptr=&x;
    printf("%d ",*ptr);//20
    change(ptr);
    printf("%d ",*ptr);//5
    change2(&ptr);
    printf("%d ",*ptr);
    return 0;
}