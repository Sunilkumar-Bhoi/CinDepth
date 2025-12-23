#include <stdio.h>
int func1(int a)
{
    if (a == 10)
        return a;
    return a + func1(a + 1);
}
int func2(int a)
{
    if (a == 0)
        return a;
    return a + func2(a - 1);
}
int main(void)
{
    printf("%d\n", func1(6)); // 30 x  40 
    printf("%d\n", func2(6)); // 36 x  21
    return 0;
}