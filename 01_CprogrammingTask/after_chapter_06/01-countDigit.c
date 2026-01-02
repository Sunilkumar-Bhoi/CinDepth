#include <stdio.h>
int countDigit(int n);
int main(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("%d\n", countDigit(num));
    return 0;
}

int countDigit(int n)
{
    int count = 0;
    do
    {
        n = n / 10;
        count++;
    } while (n > 0);
    return count;
}