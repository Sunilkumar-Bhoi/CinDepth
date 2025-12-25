/*Write a recursive function to enter a line of text and display it in reverse order, without storing the text in an array*/
#include <stdio.h>
void reverse()
{
    char c;
    c = getchar();
    if (c == ' ')
        return;
    reverse();
    putchar(c);
}
int main(void)
{
    reverse();
    return 0;
}