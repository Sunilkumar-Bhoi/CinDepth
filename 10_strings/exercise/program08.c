#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p="Devanshi";
    char arr[]="Devanshi";
    *(p+2)='b';//crash
    arr[2]='b';
    puts(p);
    puts(arr);
    return 0;
}