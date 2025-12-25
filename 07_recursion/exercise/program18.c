/*Write a recursive function that displays a positive integer in words, for example if the integer is 2134 then i t is displayed
as - two one three four.*/
#include <stdio.h>
void display(int n);
void printDigit(int n);
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
        printf("zero\n");
    else
        display(num);
    printf("\n");
    return 0;
}

void display(int num)
{
    if (num == 0)
        return;
    display(num / 10);
    printDigit(num % 10);
}
void printDigit(int n)
{
    switch (n)
    {
    case 0:
        printf("zero ");
        break;
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
        break;
    default:
        break;
    }
}