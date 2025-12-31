#include <stdio.h>

int main(void)
{
    int a=5,*ptr;
    ptr=&a;
    printf("Input number: ");
    scanf("%d", ptr);
    printf("%d %d\n",a,*ptr);//display 16
    return 0;
}