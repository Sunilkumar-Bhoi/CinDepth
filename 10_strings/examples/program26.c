/*10.25 Program to convort intager ana float values to strings using sprintf() function"*/
#include <stdio.h>

int main(void)
{
    char str1[10];
    char str2[10];
    int x = 2030;
    float y = 12.20;
    sprintf(str1, "%d", x);
    sprintf(str2, "%f", y);
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);
    return 0;
}