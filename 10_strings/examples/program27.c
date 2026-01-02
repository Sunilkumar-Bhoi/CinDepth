/*sprintf() function*/
#include <stdio.h>

int main(void)
{
    char str[50];
    char name[] = "suresh";
    int m1 = 89, m2 = 90, m3 = 81;
    float per = (m1 + m2 + m3) / 3.0;
    char gr = 'A';
    sprintf(str, "Result = %s %d %d %d %.2f %c\n", name, m1, m2, m3, per, gr);
    printf("string is : %s", str);
    return 0;
}