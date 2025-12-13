/*using the function reverse () in previous program, make a function isPal indrome () that inputs a number
and checks whether it is a palindrome number. A number is palindrome number if it remains same afte reversing its digits, for example 949, 82328 are palindromes.*/

#include<stdio.h>

int isPal(int num);
long int reverse(int n);

int main(void)
{
    long int n;
    printf("Enter a number: ");
    scanf("%ld",&n);
    if(isPal(n))
    {
        printf("Number is pallindrom\n");
    }
    else{
        printf("Number is not pallindrom\n");
    }
    return 0;
}

long int reverse(int n)
{
    int rev=0;
    do
    {
        rev=rev*10+n%10;
        n/=10;
    } while (n>0);
    return rev;
}

int isPal(int num)
{
    if(num==reverse(num))
    {
        return 1;
    }
    return 0;
}