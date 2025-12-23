/*recursive function to print prime factors*/
#include <stdio.h>
void factor(int num)
{
    int i = 2;
    if (num == 1)
        return;
    while (num % i != 0)
        i++;
    printf("%d ", i);
    factor(num / i);
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main(void)
{
    factor(80); 
    printf("\n");
    printf("GCD of 15, 22 is %d",gcd(15,22));
    printf("\n");
    return 0;
}