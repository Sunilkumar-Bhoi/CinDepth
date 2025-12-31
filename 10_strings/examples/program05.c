/*10.5 strlen() function*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40];
    printf("Enter a string : ");
    gets(str);
    printf("Length of the string is = %lu\n",strlen(str));
    return 0;
}