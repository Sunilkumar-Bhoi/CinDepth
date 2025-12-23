/*divisibility of 11*/
#include <stdio.h>
int divisibleBy11(long int n)
{
    // even sum odd sum no diff 11 hoi athva to 0
    int sum1 = 0, sum2 = 0, diff;

    if (n == 0)
        return 1;
    if (n < 10)
        return 0;
    while (n > 0)
    {
        sum1 += n % 10;
        n /= 10;
        sum2 += n % 10;
        n /= 10;
    }
    diff = (sum1 > sum2) ? (sum1 - sum2) : (sum2 - sum1);
    return divisibleBy11(diff);
}
int main(void)
{
    long int num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    if (divisibleBy11(num))
        printf("Divisible by 11\n");
    else
        printf("Not divisible by 11\n");
    return 0;
}