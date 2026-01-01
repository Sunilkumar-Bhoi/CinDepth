#include <stdio.h>

int main(void)
{
    int arr[3][4];
    printf("%p\t", arr);                // starting address of array
    printf("%p\t", arr[0]);             // point 0th 1d array in 2d array starting address
    printf("%p\n", &arr[0][0]);         // point address of 0th element or starting element
    printf("%lu\t", sizeof(arr));       // 48
    printf("%lu\t", sizeof(arr[0]));    // 16
    printf("%lu\n", sizeof(arr[0][0])); // 4
    return 0;
}