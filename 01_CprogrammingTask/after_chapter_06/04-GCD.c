#include<stdio.h>

int main(void)
{
    int a, b, rem;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }

    printf("%d\n",a);
    return 0;
}