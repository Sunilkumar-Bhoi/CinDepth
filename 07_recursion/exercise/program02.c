#include<stdio.h>

int func1(int a, int b)
{
    if(a>b)
        return 1000;
    return a+ func1(a+1,b);
}
int main(void)
{
    printf("%d \n",func1(3,8));//1033
    return 0;
}