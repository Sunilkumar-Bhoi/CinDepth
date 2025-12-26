/*21 Write a recursive function to find quotient when a positive integer a is divided by positive integer b.*/
#include <stdio.h>
int quotient(int a, int b);
int main(void)
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d", &a);
    do
    {
        scanf("%d", &b);
        if (b == 0)
            printf("Enter another value for b: ");
    } while (b == 0);

    printf("%d / %d : %d \n", a, b, quotient(a, b));

    return 0;
}
int quotient(int a, int b)
{
    if (a < b)
        return 0;
    return 1 + quotient(a - b, b);
}