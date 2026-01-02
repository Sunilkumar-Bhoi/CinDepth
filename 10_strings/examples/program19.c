/*P10.19 strncat()*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[15] = "ABC";
    strncat(str1, "DEFGH", 4);
    printf("%s\n", str1);
    return 0;
}