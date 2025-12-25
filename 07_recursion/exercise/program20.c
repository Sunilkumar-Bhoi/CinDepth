/*Write a recursive function t o find remainder when a positive integer a i s divided by positive integer b*/
#include <stdio.h>
int recursiveDivide(int a, int b)
{
    if(a<b)
        return a;
    return recursiveDivide(a-b,b);
}
int main(void)
{
    int a, b;
    printf("Enter a number : ");
    do
    {
            scanf("%d%d", &a, &b);
        if(b==0)
            printf("Enter another value for b !!");
    } while (b==0);
    
    int remainder = recursiveDivide(a, b);
    printf("remainder : %d",remainder);
    return 0;
}