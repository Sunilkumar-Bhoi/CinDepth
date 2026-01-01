#include <stdio.h>
void func(int x, int y);
int main(void)
{
    int a = 5, b = 8;
    func(a, b);
    printf("a=%d, b=%d\n", a, b); /*no change in a b because we have not pass address func will create copy of this two*/
    return 0;
}
void func(int x, int y)
{
    int temp;
    temp = *(&x), *(&x) = *(&y), *(&y) = temp; /*swap x and y but these are the copy of a and b so no change pn them*/
}