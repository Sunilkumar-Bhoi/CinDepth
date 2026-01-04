/*Q7. Problem Statement: Implement the myAtoi(string s) function, which converts a
string to a 32-bit signed integer.
The algorithm for myAtoi(string s) is as follows:
1. Whitespace: Ignore any leading whitespace (" ").
2. Signedness: Determine the sign by checking if the next character is '-' or '+', assuming
positivity if neither present.
3. Conversion: Read the integer by skipping leading zeros until a non-digit character is
encountered or the end of the string is reached. If no digits were read, then the result is
0.
4. Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then
round the integer to remain in the range. Specifically, integers less than -231 should be
rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.*/
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define SIZE 100

void myAtoi(char[]);

int main(void)
{
    char str[100];
    printf("Enter signed integer: ");
    fgets(str, SIZE, stdin);
    myAtoi(str);
    return 0;
}
void myAtoi(char str[])
{
    int i = 0;
    int sign = 1;
    long long int result = 0;

    /*skipping white space*/
    while (str[i] == ' ')
        i++;

    /*checking the sign*/
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    /*conversion*/
    while (str[i] >= '0' && str[i] <= '9')
    {
        int digit = str[i] - '0';
        if (result > (INT_MAX - digit) / 10)
        {
            if (sign == 1)
            {
                printf("%d\n", INT_MAX);
                return;
            }
            else
            {
                printf("%d\n", INT_MIN);
                return;
            }
            i++;
        }
        result = result * 10 + digit;
    }
    printf("%d\n", (int)(result * sign));
}