/*finds the sum of digits of an integer*/
#include<stdio.h>
int sumOfDigit(int n);
void display(int n);
void reverse(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("sum of digit: %d\n",sumOfDigit(n));

    display(n); printf("\n");

    reverse(n); printf("\n");
    return 0;
}

/*finds the sum of digits of a n integer*!*/
int sumOfDigit(int n)
{
    if(n/10==0)
        return n;
    return n%10+sumOfDigit(n/10);
}

/*Displays the digits of an integer*/
void display(int n)
{
    if(n/10==0){
        printf("%d",n%10);
        return;
    }
    display(n/10);
    printf("%d",n%10);
}

/*displays the digits of an integer, in reverse order*/
void reverse(int n)
{
    if(n/10==0){
        printf("%d",n);
        return;
    }
    printf("%d",n%10);
    reverse(n/10);
}