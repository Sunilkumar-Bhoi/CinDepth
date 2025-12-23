#include <stdio.h>
void func1(int a, int b)
{
    if(a>b)
        return;
    printf("%d ",a);/*winding phaase execution*/
    func1(a+1,b);
}
void func2(int a, int b)
{
    if(a>b)
        return;
    func2(a+1,b);
    printf("%d ",a);/*unwinding phase execution*/
}
int main(void)
{
    func1(10,18);//10,11,12,13,14,15,16,17,18
    printf("\n");
    func2(10,18);//18,17,16,15,14,13,12,11,10
    return 0;
}