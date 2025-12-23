/*divisibility check of 9 and 11*/
#include <stdio.h>

int divisibleBy9(long int n)
{
    int sumOfdigit;
    if (n == 9)
        return 1;
    if( n < 9)
        return 0;
    sumOfdigit = 0;
    while (n > 0)
    {
        sumOfdigit += n % 10;
        n /= 10;
    }
    return divisibleBy9(sumOfdigit);
}
int main(void)
{
    long int num;
    int sum;
    printf("Enter a number: ");
    scanf("%ld", &num);
    if (divisibleBy9(num))
        printf("divisible by 9\n");
    else
        printf("not dividible by 9\n");
    return 0;
}