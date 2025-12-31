/*Input and output strings using scanf()) and printf()*/
#include <stdio.h>

int main(void)
{
    char str[40];
    printf("Enter string: ");
    scanf("%s", str);
    printf("%s %s",str,"sunil");
    return 0;
}