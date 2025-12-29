/*P.14 Program to print elemenț of a 2-D array by subacripting a pointer to an array variable.*/
#include <stdio.h>
int main(void)
{
    int i, j;
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3];
    ptr = arr;
    printf("%p  %p  %p\n", ptr, ptr + 1, ptr + 2);
    printf("%p  %p  %p\n", *ptr, *ptr + 1, *ptr + 2);
    printf("%d  %d  %d\n", **ptr, *(*ptr + 1), *(*ptr + 2));
    printf("%d  %d  %d\n", arr[0][0], arr[0][1], arr[0][2]);
    return 0;
}