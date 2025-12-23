#include <stdio.h>
void func1(int a, int b)
{
    if(a>b)
        return;
    printf("%d ",b);/*winding phase*/
    func1(a,b-1);
}
void func2(int a, int b)
{
    if(a>b)
        return;
    func2(a,b-1);
    printf("%d ",b);/*unwinding phase*/
}
int main(void)
{
    func1(10, 18);//18,17,16,15,14,13,12,11,10
    printf("\n");
    func2(10, 18);//10,11,12,13,14,15,16,17,18
    return 0;
}