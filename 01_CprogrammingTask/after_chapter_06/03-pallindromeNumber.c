#include <stdio.h>

int main(void)
{
    int num, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (rev == temp)
        printf("Pallindrome Number!!\n");
    else
        printf("Not Pallindrome!!\n");
    return 0;
}