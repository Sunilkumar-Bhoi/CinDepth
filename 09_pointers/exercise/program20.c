#include <stdio.h>
void func(int x, int *y);
int main(void)
{
    int a = 2, b = 6;
    func(a, &b);                  // passing a and address of b
    printf("a=%d, b=%d\n", a, b); // 2,2
    return 0;
}
void func(int x, int *y)
{
    int temp;
    temp = x;
    x = *y;
    *y = temp;
}