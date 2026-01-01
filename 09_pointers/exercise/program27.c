#include <stdio.h>

int main(void)
{
    int arr[3][4][5];                      /*3 dimension array -> 3 2D array of 4x5*/
    printf("%p\t", arr);                   /*0th element address or starting address of array*/
    printf("%p\t", arr[0]);                /*starting address of oth 2d array*/
    printf("%p\t", arr[0][0]);             /*point 0th 1d array of 0th 2d array*/
    printf("%p\n", &arr[0][0][0]);         /*point 0th 2d array 0th 1d array 0th element*/
    printf("%lu\t", sizeof(arr));          /*240*/
    printf("%lu\t", sizeof(arr[0]));       /*80*/
    printf("%lu\t", sizeof(arr[0][0]));    /*20*/
    printf("%lu\n", sizeof(arr[0][0][0])); /*4*/
    return 0;
}