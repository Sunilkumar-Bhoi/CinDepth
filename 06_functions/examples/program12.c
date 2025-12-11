/*program that uses function without arguments but return value*/
#include<stdio.h>

int func(void);

int main(void)
{
    printf("%d\n",func());
    return 0;
}
/*retun the sum of the square of all odd number from 1 to 25*/
int func(void)
{
    int sum=0;

    for(int i=1;i<=25;i++)
    {
        if(i%2!=0)
            sum+=i*i;
    }
    return sum;
}