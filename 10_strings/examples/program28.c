/*sscanf()*/
#include <stdio.h>

int main(void)
{
    char str1[] = "1238";
    char str2[] = "123.24";
    int x;
    float y;
    sscanf(str1, "%d", &x);
    sscanf(str2, "%f", &y);
    printf("value of x=%d, value of y =%f\n", x, y);
    return 0;
}