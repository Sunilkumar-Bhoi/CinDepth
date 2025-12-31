/*P10.1 Program to print characters of a string and address of each character*/
#include <stdio.h>

int main(void)
{
    int i = 0;
    char str[] = "Sunil";
    while (str[i] != '\0')
    {
        printf("character = %c, address = %p\n", str[i], &str[i]);
        i++;
    }
    return 0;
}