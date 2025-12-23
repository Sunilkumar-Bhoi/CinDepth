/*fibbonaci series*/
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int nterm, i;
    printf("Enter nth term: ");
    scanf("%d", &nterm);
    for (i = 0; i < nterm; i++)
        printf("%d ", fibonacci(i));
    return 0;
}