#include <stdio.h>

int main(void)
{
    int arr[4] = {10, 20, 30, 40};

    int x = 100, *ptr = arr;
    printf("%p  %d  %d\n", ptr, *ptr, x); // starting address of array, value 10, 100

    x = *ptr++;                        
    printf("%p  %d  %d\n", ptr, *ptr, x); // next address of array, value 20, 10

    x = *++ptr;
    printf("%p  %d  %d\n", ptr, *ptr, x); // next address of array, value 30, 30

    x=++*ptr;
    printf("%p  %d  %d\n", ptr, *ptr, x); // next address of array, value 31, 31 

    x=(*ptr)++;
    printf("%p  %d  %d\n", ptr, *ptr, x); // next address of array, value 32, 31    
    return 0;
}