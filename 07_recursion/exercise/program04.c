#include <stdio.h>
int func(int a, int b)
{
    if (a == b)
        return a;
    return a + b + func(a + 1, b - 1);
}
int main(void)
{
    printf("%d\n", func(4, 8)); // 12+12+6=30
    printf("%d\n", func(3, 8)); // 4 7, 5 6 , 6 5 .... segment fault
    return 0;
}