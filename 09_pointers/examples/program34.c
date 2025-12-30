/*9.P34 program to illustrate that every function has an address and how to access that address*/
#include <stdio.h>
#include <stdlib.h>
void func(void);
int main(void)
{
    printf("Address of main(): %p\n",main);
    printf("Address of func(): %p\n",func);
}
void func(void)
{
    printf("C in depth\n");
}