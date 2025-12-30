/*P9.37 Program to pass a pointer containing function's address as an argument*/
#include <stdio.h>
void func(char, void (*fp)(float));
void func1(float);
int main(void)
{
    void (*p)(float);
    p = func1;
    printf("function main() called...!!\n");
    func('a', p);
    return 0;
}
void func(char a, void (*fp)(float)) //value of p stored in fp
{
    printf("Function func() called...!!\n");
    (*fp)(8.5);
}
void func1(float a)
{
    printf("Function func1() called...!!\n");
}