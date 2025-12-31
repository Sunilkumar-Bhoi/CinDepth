/*input and output stringe using gets ( ) and puts()*/
#include <stdio.h>

int main(void)
{
    char str[40];
    printf("Enter a string: ");
    gets(str);
    printf("You have entered: ");
    puts(str);   
    return 0;
}