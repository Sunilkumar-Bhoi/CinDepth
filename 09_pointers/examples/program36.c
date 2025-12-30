/*P9.36 program to send a function's address as an argument to other function*/
#include <stdio.h>
void func(char,void (*fp)(float));
void func1(float);
int main(void)
{
    printf("Function main() called..\n");
    func('a',func1);
    return 0;
}
void func(char c, void (*fp)(float))
{
    printf("Function func() called..\n");
    (*fp)(2.1);
}
void func1(float a)
{
    printf("Function func1 () called..");
}